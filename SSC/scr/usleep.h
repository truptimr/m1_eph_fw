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

#pragma once

#include <stdint.h>
#include "bsp.h"

static inline void usleep(uint32_t us) // mirco seconds
{
  uint32_t delaycount_us = us * M1SA_US_TO_CORETIMER_TICKS;
  uint32_t starttime = ReadCoreTimer();

  while ((uint32_t)(ReadCoreTimer() - starttime) < delaycount_us) {};
}

static inline void usleep10(uint32_t us10) // 10ths of mirco seconds
{
  uint32_t delaycount_us10 = us10 *  M1SA_10US_TO_CORETIMER_TICKS;
  uint32_t starttime = ReadCoreTimer();

  while ((uint32_t)(ReadCoreTimer() - starttime) < delaycount_us10) {};
}


static inline void usleepticks(uint32_t ticks) // 10ths of mirco seconds
{
//  uint32_t delaycount_us10 = us10 *  M1SA_10US_TO_CORETIMER_TICKS;
  uint32_t starttime = ReadCoreTimer();

  while ((uint32_t)(ReadCoreTimer() - starttime) < ticks) {};
}