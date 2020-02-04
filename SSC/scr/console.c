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

#include <plib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdint.h>

static void uart_snd(const char * buff, uint32_t size)
{
  while (size--)
    {
      while (!UARTTransmitterIsReady(UART1));

      UARTSendDataByte(UART1, *buff++);
    }

  while (!UARTTransmissionHasCompleted(UART1));
}

static uint32_t uart_rcv(char * buff, uint32_t size)
{
  uint32_t n = 0;

  while (n++ < size)
    {
      while (!UARTReceivedDataIsAvailable(UART1));

      uint8_t c = UARTGetDataByte(UART1);
      UARTSendDataByte(UART1, c);

      if (c == '\r') { break; }

      *buff++ = c;
    }

  return n;
}

char keypress(void)
{
  char key;

  while (!UARTReceivedDataIsAvailable(UART1));

  key = UARTGetDataByte(UART1);
  uart_snd(&key, 1);
  uart_snd("\r\n", 2);
  return key;
}


void printk(const char * pformat, ...)
{
  char buf[1024];
  va_list args;
  va_start(args, pformat);
  vsnprintf(buf, 1024, pformat, args);
  va_end(args);
  buf[1023] = '0';
  uart_snd(buf, strlen(buf));
}


