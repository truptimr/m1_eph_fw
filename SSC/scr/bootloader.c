/*
 *    Copyright (C) 2017 Matthieu Bec
 *
 *    This file is part of m1cs.
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "bootloader.h"
#include <GenericTypeDefs.h>
#include <plib.h>
#include <sys/attribs.h>
#include <string.h>

#include "nvmem.h"
#include "console.h"
#include "gpio_fast.h"

#define BOOT_FLASH_BASE_ADDRESS     0x9FC00000
#define BOOT_FLASH_END_ADDRESS      0x9FC02FEF
#define PROGRAM_FLASH_BASE_ADRESS   0x9D000000
#define PROGRAM_FLASH_BASE_ADRESS_KSEG1   0xBD000000
#define PROGRAM_FLASH_END_ADRESS    (0x9D000000+BMXPFMSZ-1)
#define APP_FLASHCOPY_SIZE          (BMXPFMSZ/2)
#define APP_FLASHCOPY_BASE_ADDRESS  0x9D000000 + APP_FLASHCOPY_SIZE
#define APP_FLASHCOPY_END_ADDRESS   PROGRAM_FLASH_END_ADRESS
#define FLASH_PAGE_SIZE             4096

typedef struct
{
  UINT8 * start;
  UINT8 len;
  UINT8 status;
} T_REC;

typedef struct
{
  UINT8 RecDataLen;
  DWORD_VAL Address;
  UINT8 RecType;
  UINT8 * Data;
  UINT8 CheckSum;
  DWORD_VAL ExtSegAddress;
  DWORD_VAL ExtLinAddress;
} T_HEX_RECORD;

#define DATA_RECORD         0
#define END_OF_FILE_RECORD  1
#define EXT_SEG_ADRS_RECORD 2
#define EXT_LIN_ADRS_RECORD 4

static void ConvertAsciiToHex(UINT8 * asciiRec, UINT8 * hexRec)
{
  UINT8 i = 0;
  UINT8 k = 0;
  UINT8 hex;

  while ((asciiRec[i] >= 0x30) && (asciiRec[i] <= 0x66))
    {
      // Check if the ascci values are in alpha numeric range.
      if (asciiRec[i] < 0x3A)
        {
          // Numerical reperesentation in ASCII found.
          hex = asciiRec[i] & 0x0F;
        }

      else
        {
          // Alphabetical value.
          hex = 0x09 + (asciiRec[i] & 0x0F);
        }

      // Following logic converts 2 bytes of ASCII to 1 byte of hex.
      k = i % 2;

      if (k)
        {
          hexRec[i / 2] |= hex;
        }

      else
        {
          hexRec[i / 2] = (hex << 4) & 0xF0;
        }

      i++;
    }
}

static void __longramfunc__ erase_flash_range(UINT64 start, UINT64 end)
{
  void * pFlash;
  UINT rc;
  INT i;

  UINT npages = (end - start - 1) / FLASH_PAGE_SIZE;

  pFlash = * (void **) &start;

  for (i = 0; i < npages; i++)
    {
      if (rc = NVMemErasePage(pFlash + (i * FLASH_PAGE_SIZE)))
        {
          while (1); // XXX bummer
        }
    }
}

static void __longramfunc__ reflash_ram_exe()
{
  UINT i;
  // erase bottom
  erase_flash_range(PROGRAM_FLASH_BASE_ADRESS, PROGRAM_FLASH_BASE_ADRESS + APP_FLASHCOPY_SIZE);
  // copy top to bottom
  int nrecs = APP_FLASHCOPY_SIZE / sizeof(UINT);
  UINT * src;
  src = (UINT *)(PROGRAM_FLASH_BASE_ADRESS_KSEG1 + APP_FLASHCOPY_SIZE);

  for (i = 0; i < nrecs; i++) // XXX WriteRow
    {
      NVMemWriteWord((void *)((UINT)PROGRAM_FLASH_BASE_ADRESS + sizeof(UINT) * i), *src++); // void* -> UINT
    }

  // erase top
  erase_flash_range(APP_FLASHCOPY_BASE_ADDRESS, APP_FLASHCOPY_END_ADDRESS);

  // soft reset
  volatile int * p = &RSWRST;
  RSWRSTSET = _RSWRST_SWRST_MASK;
  *p;

  while (1);

}

static void reflash()
{
  int intStat;
  int dmaSusp;
  mSYSTEMUnlock(intStat, dmaSusp); // for softreset
  reflash_ram_exe();
}

static void WriteHexRecord2Flash(UINT8 * HexRecord)
{
  static T_HEX_RECORD HexRecordSt;
  UINT8 Checksum = 0;
  UINT8 i;
  UINT WrData;
  UINT RdData;
  void * ProgAddress;
  UINT result;

  HexRecordSt.RecDataLen = HexRecord[0];
  HexRecordSt.RecType = HexRecord[3];
  HexRecordSt.Data = &HexRecord[4];

  // Hex Record checksum check.
  for (i = 0; i < HexRecordSt.RecDataLen + 5; i++)
    {
      Checksum += HexRecord[i];
    }

  if (Checksum != 0)
    {
      printk("Checksum error, bummer!\r\n");

      while (1);
    }

  else
    {
      // Hex record checksum OK.
      switch (HexRecordSt.RecType)
        {
        case DATA_RECORD:  //Record Type 00, data record.
          HexRecordSt.Address.byte.MB = 0;
          HexRecordSt.Address.byte.UB = 0;
          HexRecordSt.Address.byte.HB = HexRecord[1];
          HexRecordSt.Address.byte.LB = HexRecord[2];

          // Derive the address.
          HexRecordSt.Address.Val = HexRecordSt.Address.Val + HexRecordSt.ExtLinAddress.Val + HexRecordSt.ExtSegAddress.Val;

          while (HexRecordSt.RecDataLen) // Loop till all bytes are done.
            {

              // Convert the Physical address to Virtual address.
              ProgAddress = (void *)PA_TO_KVA0(HexRecordSt.Address.Val);

              // Make sure we are not writing boot area and device configuration bits.
              if (((ProgAddress >= (void *)(PROGRAM_FLASH_BASE_ADRESS)) && (ProgAddress <= (void *)PROGRAM_FLASH_END_ADRESS))
                  || ((ProgAddress >= (void *)(BOOT_FLASH_BASE_ADDRESS)) && (ProgAddress <= (void *)BOOT_FLASH_END_ADDRESS)))
                {
                  if (HexRecordSt.RecDataLen < 4)
                    {
                      // Sometimes record data length will not be in multiples of 4. Appending 0xFF will make sure that..
                      // we don't write junk data in such cases.
                      WrData = 0xFFFFFFFF;
                      memcpy(&WrData, HexRecordSt.Data, HexRecordSt.RecDataLen);
                    }

                  else
                    {
                      memcpy(&WrData, HexRecordSt.Data, 4);
                    }

                  // Write the data into flash.
                  if ((ProgAddress >= (void *)(PROGRAM_FLASH_BASE_ADRESS)) && (ProgAddress <= (void *)PROGRAM_FLASH_END_ADRESS))
                    { result = NVMemWriteWord(ProgAddress + APP_FLASHCOPY_SIZE, WrData); } // write to top

                  else
                    { result = NVMemWriteWord(ProgAddress, WrData); } // write to boot

                  // Assert on error. This must be caught during debug phase.
                  if (result != 0)
                    {
                      printk("NVMemWriteWord error, bummer!\r\n");

                      while (1);
                    }
                }

              // Increment the address.
              HexRecordSt.Address.Val += 4;
              // Increment the data pointer.
              HexRecordSt.Data += 4;

              // Decrement data len.
              if (HexRecordSt.RecDataLen > 3)
                {
                  HexRecordSt.RecDataLen -= 4;
                }

              else
                {
                  HexRecordSt.RecDataLen = 0;
                }
            }

          break;

        case EXT_SEG_ADRS_RECORD:  // Record Type 02, defines 4th to 19th bits of the data address.
          HexRecordSt.ExtSegAddress.byte.MB = 0;
          HexRecordSt.ExtSegAddress.byte.UB = HexRecordSt.Data[0];
          HexRecordSt.ExtSegAddress.byte.HB = HexRecordSt.Data[1];
          HexRecordSt.ExtSegAddress.byte.LB = 0;
          // Reset linear address.
          HexRecordSt.ExtLinAddress.Val = 0;
          break;

        case EXT_LIN_ADRS_RECORD:   // Record Type 04, defines 16th to 31st bits of the data address.
          HexRecordSt.ExtLinAddress.byte.MB = HexRecordSt.Data[0];
          HexRecordSt.ExtLinAddress.byte.UB = HexRecordSt.Data[1];
          HexRecordSt.ExtLinAddress.byte.HB = 0;
          HexRecordSt.ExtLinAddress.byte.LB = 0;
          // Reset segment address.
          HexRecordSt.ExtSegAddress.Val = 0;
          break;

        case END_OF_FILE_RECORD:  //Record Type 01, defines the end of file record.
          HexRecordSt.ExtSegAddress.Val = 0;
          HexRecordSt.ExtLinAddress.Val = 0;
          printk("END_OF_FILE_RECORD, reflash and reset\r\n");
          reflash();
          // NVMemExit(); // we'll never get here
          // SoftReset();
          break;

        default:
          HexRecordSt.ExtSegAddress.Val = 0;
          HexRecordSt.ExtLinAddress.Val = 0;
          break;
        }
    }
}

#define REC_FLASHED 0
#define REC_NOT_FOUND 1
#define REC_FOUND_BUT_NOT_FLASHED 2

static UINT pointer = 0;
static UINT8 asciiBuffer[1024];
static UINT8 asciiRec[200];
static UINT8 hexRec[100];
static T_REC record;

void firmware_dl(uint16_t * pData, uint16_t Size)
{
  int i;

  // Initialize the state-machine to read the records.
  record.status = REC_NOT_FOUND;

  if (Size == 0) { return; } // noop

  memcpy((void *)&asciiBuffer[pointer], (void *)pData, sizeof(uint16_t) * Size);

  for (i = 0; i < (Size + pointer); i ++)
    {
      // This state machine seperates-out the valid hex records from the read 512 bytes.
      switch (record.status)
        {
        case REC_FLASHED:
        case REC_NOT_FOUND:
          if (asciiBuffer[i] == ':')
            {
              // We have a record found in the 512 bytes of data in the buffer.
              record.start = &asciiBuffer[i];
              record.len = 0;
              record.status = REC_FOUND_BUT_NOT_FLASHED;
            }

          break;

        case REC_FOUND_BUT_NOT_FLASHED:
          if ((asciiBuffer[i] == 0x0A) || (asciiBuffer[i] == 0xFF))
            {
              // We have got a complete record. (0x0A is new line feed and 0xFF is End of file)
              // Start the hex conversion from element
              // 1. This will discard the ':' which is
              // the start of the hex record.
              ConvertAsciiToHex(&record.start[1], hexRec);
              WriteHexRecord2Flash(hexRec);
              record.status = REC_FLASHED;
            }

          break;
        }

      // Move to next byte in the buffer.
      record.len ++;
    }

  if (record.status == REC_FOUND_BUT_NOT_FLASHED)
    {
      // We still have a half read record in the buffer. The next half part of the record is read
      // when we read 512 bytes of data from the next file read.
      memcpy(asciiBuffer, record.start, record.len);
      pointer = record.len;
      record.status = REC_NOT_FOUND;
    }

  else
    {
      pointer = 0;
    }
}

void erase_flash(void)
{
  NVMemEnter();
  erase_flash_range(APP_FLASHCOPY_BASE_ADDRESS, APP_FLASHCOPY_END_ADDRESS);
  erase_flash_range(BOOT_FLASH_BASE_ADDRESS, BOOT_FLASH_END_ADDRESS);
  //NVMemExit(); // keep going
}


