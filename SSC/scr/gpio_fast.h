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

#include <plib.h>

//#define CV_PWR_EN_Off() { PORTClearBits(IOPORT_A, BIT_10); }
//#define CV_PWR_EN_On() { PORTSetBits(IOPORT_A, BIT_10); }
//#define CV_PWR_EN_StateGet() { mPORTAReadLatchBits(BIT_10); }
//#define CV_PWR_EN_Toggle() { PORTToggleBits(IOPORT_A, BIT_10); }
//#define DIR_CV1Off() { PORTClearBits(IOPORT_A, BIT_7); }
//#define DIR_CV1On() { PORTSetBits(IOPORT_A, BIT_7); }
//#define DIR_CV1StateGet() { mPORTAReadLatchBits(BIT_7); }
//#define DIR_CV1Toggle() { PORTToggleBits(IOPORT_A, BIT_7); }
//#define DIR_CV2Off() { PORTClearBits(IOPORT_A, BIT_0); }
//#define DIR_CV2On() { PORTSetBits(IOPORT_A, BIT_0); }
//#define DIR_CV2StateGet() { mPORTAReadLatchBits(BIT_0); }
//#define DIR_CV2Toggle() { PORTToggleBits(IOPORT_A, BIT_0); }
//#define DIR_CV3Off() { PORTClearBits(IOPORT_D, BIT_9); }
//#define DIR_CV3On() { PORTSetBits(IOPORT_D, BIT_9); }
//#define DIR_CV3StateGet() { mPORTDReadLatchBits(BIT_9); }
//#define DIR_CV3Toggle() { PORTToggleBits(IOPORT_D, BIT_9); }
//#define DRV_ENA1_Off() { PORTClearBits(IOPORT_A, BIT_4); }
//#define DRV_ENA1_On() { PORTSetBits(IOPORT_A, BIT_4); }
//#define DRV_ENA1_StateGet() { mPORTGReadLatchBits(BIT_4); }
//#define DRV_ENA1_Toggle() { PORTToggleBits(IOPORT_A, BIT_4); }
//#define DRV_ENA2_Off() { PORTClearBits(IOPORT_A, BIT_6); }
//#define DRV_ENA2_On() { PORTSetBits(IOPORT_A, BIT_6); }
//#define DRV_ENA2_StateGet() { mPORTAReadLatchBits(BIT_6); }
//#define DRV_ENA2_Toggle() { PORTToggleBits(IOPORT_A, BIT_6); }
//#define DRV_ENA3_Off() { PORTClearBits(IOPORT_A, BIT_1); }
//#define DRV_ENA3_On() { PORTSetBits(IOPORT_A, BIT_1); }
//#define DRV_ENA3_StateGet() { mPORTAReadLatchBits(BIT_1); }
//#define DRV_ENA3_Toggle() { PORTToggleBits(IOPORT_A, BIT_1); }
//#define DRV_SVOff() { PORTClearBits(IOPORT_D, BIT_0); }
//#define DRV_SVOn() { PORTSetBits(IOPORT_D, BIT_0); }
//#define DRV_SVStateGet() { mPORTDReadLatchBits(BIT_0); }
//#define DRV_SVToggle() { PORTToggleBits(IOPORT_D, BIT_0); }
//#define DRV_SV2Off() { PORTClearBits(IOPORT_D, BIT_11); }
//#define DRV_SV2On() { PORTSetBits(IOPORT_D, BIT_11); }
//#define DRV_SV2StateGet() { mPORTDReadLatchBits(BIT_11); }
//#define DRV_SV2Toggle() { PORTToggleBits(IOPORT_D, BIT_11); }
//#define A9p22Off() { PORTClearBits(IOPORT_A, BIT_9); }
//#define A9p22On() { PORTSetBits(IOPORT_A, BIT_9); }
//#define A9p22StateGet() { mPORTGReadLatchBits(BIT_9); }
//#define A9p22Toggle() { PORTToggleBits(IOPORT_A, BIT_9); }
//#define DRV_SV4Off() { PORTClearBits(IOPORT_D, BIT_14); }
//#define DRV_SV4On() { PORTSetBits(IOPORT_D, BIT_14); }
//#define DRV_SV4StateGet() { mPORTDReadLatchBits(BIT_14); }
//#define DRV_SV4Toggle() { PORTToggleBits(IOPORT_D, BIT_14); }
//#define HC_A0Off() { PORTClearBits(IOPORT_G, BIT_13); }
//#define HC_A0On() { PORTSetBits(IOPORT_G, BIT_13); }
//#define HC_A0StateGet() { mPORTGReadLatchBits(BIT_13); }
//#define HC_A0Toggle() { PORTToggleBits(IOPORT_G, BIT_13); }
//#define HC_A1Off() { PORTClearBits(IOPORT_G, BIT_12); }
//#define HC_A1On() { PORTSetBits(IOPORT_G, BIT_12); }
//#define HC_A1StateGet() { mPORTGReadLatchBits(BIT_12); }
//#define HC_A1Toggle() { PORTToggleBits(IOPORT_G, BIT_12); }
//#define HC_A2Off() { PORTClearBits(IOPORT_G, BIT_6); }
//#define HC_A2On() { PORTSetBits(IOPORT_G, BIT_6); }
//#define HC_A2StateGet() { mPORTGReadLatchBits(BIT_6); }
//#define HC_A2Toggle() { PORTToggleBits(IOPORT_G, BIT_6); }
//#define HC_ENBOff() { PORTClearBits(IOPORT_G, BIT_15); }
//#define HC_ENBOn() { PORTSetBits(IOPORT_G, BIT_15); }
//#define HC_ENBStateGet() { mPORTGReadLatchBits(BIT_15); }
//#define HC_ENBToggle() { PORTToggleBits(IOPORT_G, BIT_15); }
//#define RST_GPIOOff() { PORTClearBits(IOPORT_G, BIT_14); }
//#define RST_GPIOOn() { PORTSetBits(IOPORT_G, BIT_14); }
//#define RST_GPIOStateGet() { mPORTGReadLatchBits(BIT_14); }
//#define RST_GPIOToggle() { PORTToggleBits(IOPORT_G, BIT_14); }
//#define SG_CNVOff() { PORTClearBits(IOPORT_F, BIT_3); }
//#define SG_CNVOn() { PORTSetBits(IOPORT_F, BIT_3); }
//#define SG_CNVStateGet() { mPORTFReadLatchBits(BIT_3); }
//#define SG_CNVToggle() { PORTToggleBits(IOPORT_F, BIT_3); }

// For the external WDT

#define WDT_Off() { PORTClearBits(IOPORT_A, BIT_5); }
#define WDT_On() { PORTSetBits(IOPORT_A, BIT_5); }
#define WDT_StateGet() { mPORTGReadLatchBits(BIT_5); }
#define WDT_Toggle() { PORTToggleBits(IOPORT_A, BIT_5); }

// for 