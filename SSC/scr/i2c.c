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

#include "i2c.h"
#include <plib.h>
#include "bsp.h"
#include "console.h"
#include "gpio_fast.h"

//#define I2C_CLOCK_FREQ           100000
#define I2C_CLOCK_FREQ              50000
#define EEPROM_I2C_BUS              I2C2
//#define TPSE1_ADDRESS              0x20       // 0b1010111 Serial EEPROM address (SW4 1..3 On=0, Off=1, 4=WP)
//#define TPSE2_ADDRESS              0x21       // 0b1010111 Serial EEPROM address (SW4 1..3 On=0, Off=1, 4=WP)

static BOOL StartTransfer(BOOL restart)
{
  I2C_STATUS  status;

  // Send the Start (or Restart) signal
  if (restart)
    {
      I2CRepeatStart(EEPROM_I2C_BUS);
    }

  else
    {
      // Wait for the bus to be idle, then start the transfer
      while (!I2CBusIsIdle(EEPROM_I2C_BUS));

      if (I2CStart(EEPROM_I2C_BUS) != I2C_SUCCESS)
        {
          printk("Error: Bus collision during transfer Start\r\n");
          return FALSE;
        }
    }

  // Wait for the signal to complete
  do
    {
      status = I2CGetStatus(EEPROM_I2C_BUS);

    }
  while (!(status & I2C_START));

  return TRUE;
}

static BOOL TransmitOneByte(uint8_t data)
{
  // Wait for the transmitter to be ready
  while (!I2CTransmitterIsReady(EEPROM_I2C_BUS));

  // Transmit the byte
  if (I2CSendByte(EEPROM_I2C_BUS, data) == I2C_MASTER_BUS_COLLISION)
    {
      printk("Error: I2C Master Bus Collision\r\n");
      return FALSE;
    }

  // Wait for the transmission to finish
  while (!I2CTransmissionHasCompleted(EEPROM_I2C_BUS));

  return TRUE;
}


static void StopTransfer(void)
{
  I2C_STATUS  status;

  // Send the Stop signal
  I2CStop(EEPROM_I2C_BUS);

  // Wait for the signal to complete
  do
    {
      status = I2CGetStatus(EEPROM_I2C_BUS);

    }
  while (!(status & I2C_STOP));
}


//static uint8_t tpse1_write;
//static uint8_t tpse1_read;

int i2c_init()
{
  I2C_7_BIT_ADDRESS  addr;
  uint32_t           clck;

  clck = I2CSetFrequency(EEPROM_I2C_BUS, M1SA_PBUS_CLOCK, I2C_CLOCK_FREQ);

  if (abs(clck - I2C_CLOCK_FREQ) > I2C_CLOCK_FREQ / 10)
    {
      // printk("i2c actual clk %d, requested %d\r\n", clck, I2C_CLOCK_FREQ);
      return -1;
    }

  I2CEnable(EEPROM_I2C_BUS, TRUE);

//  I2C_FORMAT_7_BIT_ADDRESS(addr, TPSE1_ADDRESS, I2C_WRITE);
//  tpse1_write = addr.byte;
//  I2C_FORMAT_7_BIT_ADDRESS(addr, TPSE1_ADDRESS, I2C_READ);
//  tpse1_read = addr.byte;
  return 0;
}

void i2c_close()
{
  I2CEnable(EEPROM_I2C_BUS, FALSE);
}




struct write_data
{
  uint8_t sa;        // slave address
  uint8_t registeraddr;   // byte address
  uint8_t data[32]; // byte data
} __attribute__((packed));

static int i2c_tx_byte(uint8_t v)
{
  if (TransmitOneByte(v) && I2CByteWasAcknowledged(EEPROM_I2C_BUS))
    {
      return 0;
    }

  return -1;

}







int i2c_write(unsigned int i2cAddress, uint16_t registerAddress, uint8_t * buff, size_t nbytes)
{
  struct write_data wd;
  I2C_7_BIT_ADDRESS  addr7bit;
  uint8_t tpse_write;

  wd.registeraddr = registerAddress;

  // XXX printk("page %d 0x%x 0x%x\r\n", page, wd.addr_hi, wd.addr_lo);

  int i, rc = 0;
  uint8_t * p = (uint8_t *) & wd;

  for (i = 0; i < nbytes; i++) { wd.data[i] = *buff++; }

  
  I2C_FORMAT_7_BIT_ADDRESS(addr7bit, (uint8_t)i2cAddress, I2C_WRITE);
  tpse_write = addr7bit.byte;
  wd.sa = tpse_write;


  if (!StartTransfer(FALSE))
    {
      printk("Error: Failed to start transfer\r\n");
      return;
    }

  for (i = 0; i < (nbytes+2); i++)
    {
      if (rc = i2c_tx_byte(*p++))
        {
          printk("Error: write at %d\r\n", i);
          return -1;
        }
    }

  StopTransfer();

  // Wait for EEPROM to complete write process, by polling the ack status.
  // while (EEAckPolling(0xA0));  // Wait for write cycle to complete

  int ack = 0;


  do
    {
      // Start the transfer to address the EEPROM
      if (!StartTransfer(FALSE))
        {
          printk("Error: Failed to start transfer\r\n");
          return;
        }

      // Transmit just the EEPROM's address
      if (TransmitOneByte(tpse_write))
        {
          // Check to see if the byte was acknowledged
          ack = I2CByteWasAcknowledged(EEPROM_I2C_BUS);
        }

      else
        {
          printk("Error: Failed to TransmitOneByte\r\n");
          return;
        }

      // End the transfer (stop here if an error occured)
      StopTransfer();

    }
  while (ack == 0);


  return 0;
}



int i2c_read(unsigned int i2cAddress,uint16_t addr, uint8_t * buff, size_t nbytes)
{
  int status;
  int i;
  uint8_t tpse_write;
  uint8_t tpse_read;
  
  I2C_7_BIT_ADDRESS  addr7bit;
  I2C_FORMAT_7_BIT_ADDRESS(addr7bit, (uint8_t)i2cAddress, I2C_WRITE);
  tpse_write = addr7bit.byte;
  I2C_FORMAT_7_BIT_ADDRESS(addr7bit, (uint8_t)i2cAddress, I2C_READ);
  tpse_read = addr7bit.byte;
  
  IdleI2C2();  // Ensure module is idle
  StartI2C2(); // Initiate START condition

  // XXX while (SSPCON2bits.SEN); // Wait until START condition is over
  // XXX error counter to return with an error
  // XXX ditto other locations in i2c
  // XXX possibly, use a startup watchdog
  do
    {
      status = I2CGetStatus(EEPROM_I2C_BUS);

    }
  while (!(status & I2C_START));

  MasterWriteI2C2(tpse_write); // Write 1 byte - R/W bit should be 0
  if(!I2CByteWasAcknowledged(EEPROM_I2C_BUS))
        {
            printk("Error: Sent byte was not acknowledged\n");
//            Success = FALSE;
        }
  
  IdleI2C2();  // Ensure module is idle
  MasterWriteI2C2(addr);  // Write address byte to EEPROM
  if(!I2CByteWasAcknowledged(EEPROM_I2C_BUS))
        {
            printk("Error: Sent byte was not acknowledged\n");
//            Success = FALSE;
        }
  
  IdleI2C2();  // Ensure module is idle

 RestartI2C2(); // Initiate RESTART condition
 
  //while (SSPCON2bits.RSEN); // Wait until RESTART condition is over
  do
    {
      status = I2CGetStatus(EEPROM_I2C_BUS);

    }
  while (!(status & I2C_START));
  
  MasterWriteI2C2(tpse_read); // Write 1 byte - R/W bit should be 1 for read
  
  if(!I2CByteWasAcknowledged(EEPROM_I2C_BUS))
        {
            printk("Error: Sent byte was not acknowledged\n");
//            Success = FALSE;
        }
  
  IdleI2C2();  // Ensure module is idle

  for (i = 0; i < nbytes; i++)
    {
      if (I2CReceiverEnable(EEPROM_I2C_BUS, TRUE) == I2C_RECEIVE_OVERFLOW)
        {
          return -1;
        }
        

      *buff++ = SlaveReadI2C2(); // Read in one byte

      if (i < nbytes - 1)
        {
          AckI2C2(); // Send ACK condition
          IdleI2C2();  // Ensure module is idle
        }
    }

  StopTransfer();

  return 0;
}

