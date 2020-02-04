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

#define M1SA_SYS_FREQ               (80000000ul)
#define M1SA_CORETIMER_TICKS        (M1SA_SYS_FREQ/2)
#define M1SA_US_TO_CORETIMER_TICKS  (M1SA_SYS_FREQ/2/1000000UL)
#define M1SA_10US_TO_CORETIMER_TICKS  (M1SA_SYS_FREQ/2/10000000UL)
#define M1SA_PBUS_CLOCK             (M1SA_SYS_FREQ/(1 << OSCCONbits.PBDIV))
#define M1SA_CTRL_HZ                100
#define M1SA_CTRL_TICKS             (M1SA_CORETIMER_TICKS/M1SA_CTRL_HZ)
#define M1SA_PWM_FREQ               50000 // 50kHz
//#define M1SA_PWM_FREQ             20000 // 20kHz
//#define M1SA_PWM_FREQ             5000 // 5kHz
#define M1SA_T2_PR2_COUNT           ((M1SA_PBUS_CLOCK / M1SA_PWM_FREQ)-1) // max 0xffff
#define M1SA_SPI_CHANNEL            SPI_CHANNEL4



void bsp_init();
void bsp_close();