/*
 * system_init.h
 *
 *  Created on: Sep 23, 2016
 *
 */



/**************************************************************************************************************************************************
*       Copyright © 2013-2016 Texas Instruments Incorporated - http://www.ti.com/                                                                      *
***************************************************************************************************************************************************
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
**************************************************************************************************************************************************/







#ifndef _CONFIG_H_
#define _CONFIG_H_


//#include "msp430.h"
#include "common.h"
#include "console.h"
#include "I2C_Functions.h"
#include<stdint.h>



//user configurable parameter
#define TPS2388                          1           //Device selection 1: TPS2388 is selected
#define TPS23861                         0           //Device selection 1: TPS23861 is selected
#define TYPE2_TURN_ON                    1           //Choose Type 2 for port 1-4
#define TYPE1_TURN_ON                    0           //Choose Type 1 for port 1-4
//#define NUM_OF_TPS238x                   2           // device number in system
#define NUM_OF_TPS238x                   4           // device number in system
#define VMARK_WORKAROUND                 1           // set 1 if TPS23861 has the mark voltage drop
#define NORMAL_OPERATING                 0           // set 1 if TPS23861 doesn't have the mark voltage drop
#define PRINT_STATUS                     1           // set 1 if wanting to print port status through uart
#define DETAILED_STATUS                  1           // set 1 if wanting to print detailed status through uart
#define PM_POWER_MONITOR_TIMER           20          //20 = 1s
#define PM_DETECT_CLASS_RESTART_TIMER    60          //20 = 1s
//
#define PM_NUM_OF_PORT                   4           // port count in one PSE

extern uint8_t i2cAddList[NUM_OF_TPS238x];
extern uint8_t IntFlag;
extern uint8_t PM_powerMonitor;
extern uint8_t PM_restartDectectionClassification;
extern uint8_t sysPortNum, sysPortNum1, sysPortNum2, sysPortNum3, sysPortNum4,sysPortNum5, sysPortNum6, sysPortNum7, sysPortNum8;
extern uint8_t sysPortNum9, sysPortNum10, sysPortNum11, sysPortNum12,sysPortNum13, sysPortNum14, sysPortNum15, sysPortNum16;
extern uint8_t PrintSyspower;



#if (PRINT_STATUS == 1)
extern uint8_t PrintPower;
extern uint32_t actPower;
#endif


//void init_MSP430(void);





#endif /* _CONFIG_H_ */
