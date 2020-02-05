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

#include "nvmem.h"

#include <plib.h>

#define NVMemIsError()    (NVMCON & (_NVMCON_WRERR_MASK | _NVMCON_LVDERR_MASK))

#ifdef _DMAC
static int nvm_susp;
#endif
static int nvm_int_status;

void NVMemEnter()
{
  // disable dma & interrupts
  nvm_int_status = INTDisableInterrupts();
#ifdef _DMAC
  nvm_susp = DmaSuspend();
#endif
}

void NVMemExit()
{
  // enable dma & interrupts
#ifdef _DMAC
  DmaResume(nvm_susp);
#endif
  INTRestoreInterrupts(nvm_int_status);
}

static UINT __longramfunc__ __attribute__((nomips16)) NVMemOperation(UINT nvmop)
{
  // XXX NVMemEnter();  // ramcode, done externally

  // Enable Flash Write/Erase Operations
  NVMCON = NVMCON_WREN | nvmop;
  // Data sheet prescribes 6us delay for LVD to become stable.
  // To be on the safer side, we shall set 7us delay.
  int i;

  for (i = 0; i < 70; i++) { _nop(); } // ~9us on PIC32MX

  NVMKEY    = 0xAA996655;
  NVMKEY    = 0x556699AA;
  NVMCONSET   = NVMCON_WR;

  // Wait for WR bit to clear
  while (NVMCON & NVMCON_WR);

  // Disable Flash Write/Erase operations
  NVMCONCLR = NVMCON_WREN;

  // XXX NVMemExit(); // ramcode, done externally

  return NVMemIsError();
}

UINT NVMemErasePage(void * address)
{
  // Convert Address to Physical Address
  NVMADDR = KVA_TO_PA((unsigned int)address);
  // Unlock and Erase Page
  return NVMemOperation(NVMOP_PAGE_ERASE);
}

UINT NVMemWriteWord(void * address, UINT data)
{
  NVMADDR = KVA_TO_PA((unsigned int)address);
  // Load data into NVMDATA register
  NVMDATA = data;
  // Unlock and Write Word
  return NVMemOperation(NVMOP_WORD_PGM);
}


UINT NVMemWriteRow(void * address, void * data)
{
  // Set NVMADDR to Address of row t program
  NVMADDR = KVA_TO_PA((unsigned int)address);
  // Set NVMSRCADDR to the SRAM data buffer Address
  NVMSRCADDR = KVA_TO_PA((unsigned int)data);
  // Unlock and Write Row
  return NVMemOperation(NVMOP_ROW_PGM);
}



UINT NVMemClearError(void)
{
  return NVMemOperation(NVMOP_NOP);
}

