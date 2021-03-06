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

#include "m1eph.h"
# define _SUPPRESS_PLIB_WARNING 1 // #warning The PLIB functions and macros in this file will be removed from the MPLAB XC32 C/C++ Compiler in future releases

typedef long double float64_t;

extern int safety_disable;

struct adc_t
{
  float lc1;
  float lc2;
  float lc3;
  float hk;
};

enum hk_channel
{
  TEMP_CHK
  , Vin_CHK
  , P5V_CHK
  , CV_DRV_PWR_CHK
};

