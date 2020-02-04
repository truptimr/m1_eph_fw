/*
 * system_init.c
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




#include "config.h"
#include "common.h"
#include "power_manage.h"

//User configurable variables
//uint8_t i2cAddList[NUM_OF_TPS238x] = {0x20, 0x21};
uint8_t i2cAddList[NUM_OF_TPS238x] = {0x20, 0x21, 0x22, 0x23};
//uint8_t PM_setPriority[NUM_OF_TPS238x * PM_NUM_OF_PORT] = {High, Normal, High, Low, High, High, Normal, Normal};
uint8_t PM_setPriority[NUM_OF_TPS238x * PM_NUM_OF_PORT] = {High, Normal, High, Low, High, High, Normal, Normal, High, Normal, High, Low, High, High, Normal, Normal};
uint8_t PM_restartDectectionClassification = 0;



uint8_t PM_powerMonitor = 1;
uint8_t IntFlag = 0;
uint8_t sysPortNum, sysPortNum1, sysPortNum2, sysPortNum3, sysPortNum4,sysPortNum5, sysPortNum6, sysPortNum7, sysPortNum8;
uint8_t sysPortNum9, sysPortNum10, sysPortNum11, sysPortNum12,sysPortNum13, sysPortNum14, sysPortNum15, sysPortNum16;
uint8_t PrintSyspower;

#if (PRINT_STATUS == 1)
uint8_t PrintPower = 5;
#endif


/*************************************************************************************************************************************************
*  init_MSP430
**************************************************************************************************************************************************/
/*!
* @brief Initialize MSP430
*
* This function will initialize clock,watchdog, I/O of MSP430
*
* @param[in]   none
*
* @return  none
*
**************************************************************************************************************************************************/

//
//void init_MSP430(void)
//{
//    WDTCTL = WDTPW | WDTHOLD;   // Stop watchdog timer
//
//    // Configure processor and SMCLK for 8MHz Clock.
//    BCSCTL1 = CALBC1_8MHZ;              // BCSCTL1 Calibration Data for 8MHz
//    DCOCTL = CALDCO_8MHZ;               // DCOCTL Calibration Data for 8MHz
//    BCSCTL2 &= ~SELS;                   // Select DCOCLK as SMCLK source
//
//    // Set the nReset pin P2.0 High to keep TPS out of reset.
//    P2OUT |=  BIT0;
//    P2DIR |=  BIT0;
//
//    // Set the nShutdown pin P2.2 High to prevent shutdown
//    P2OUT |=  BIT2;
//    P2DIR |=  BIT2;
//
//    // TODO: P2.3 is the nINT input pin - Configure as interrupt pin. It is INPUT at default.
//    P2DIR &= ~BIT3;
//    P2IFG &= ~BIT3;
//    P2IES |=  BIT3;     // Falling edge
//    P2IE  |=  BIT3;
//}




