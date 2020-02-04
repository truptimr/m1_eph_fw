/*************************************************************************************************************************************************/
/*!     \file main_virtual_auto.c
*
*       \brief File containing the example of Power Over Ethernet using the TPS2388 in automatic mode
*
*       \date September 2017
*
*       This file contains an example software that performs automatic detection and classification using the TPS2388
*/
/**************************************************************************************************************************************************
*       Copyright © 2013-2014 Texas Instruments Incorporated - http://www.ti.com/                                                                      *
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
*                                                                                                                                                 *
**************************************************************************************************************************************************/
#include "msp430.h"
#include "common.h"
#include "I2C_Functions.h"
#include "TPS238x.h"
#include "usci_uart.h"
#include "system_init.h"




// MSP430 Launchpad has P2.0 connected to nReset
void tpsReset (void)
{
    // Toggle nReset Pin
    P2OUT &= ~BIT0;
    __delay_cycles(1000);
    P2OUT |=  BIT0;
}

void Setup_Timer()
{
    /***************************************************
    * Timer Configuration
    ***************************************************/
    TA0CCR0 = 50000;                                    // 50 ms
    TA0CTL = ((TASSEL_2) | (ID_3) | (MC_1) | (TAIE));   // /8
}


TPS238X_Interrupt_Mask_Register_t intMask;
uint8_t intDelayTime = 0;
TPS238x_Ports_t powerEnablePortEvents, powerGoodPortEvents, detectionPortEvents, classificationPortEvents, icutPortEvents, disconnectPortEvents, inrushPortEvents, ilimPortEvents;
TPS238X_Interrupt_Register_t intStatus;
TPS238X_Supply_Event_Register_t supplyEvents;
volatile uint8_t rtn;
uint8_t powerGood;
uint8_t T2PON;

uint8_t OperatingMode;
uint8_t  devNum;


void main(void)
{

    init_MSP430();           //initialize MSP430
    init_I2C_Functions();
    Setup_UART (PORT_1, BIT2, BIT1, SECONDARY_PERIPHERAL, SMCLK_8_MHZ, UART_9600_BAUD);
    Setup_Timer ();

    __enable_interrupt();

    rtn =  tps_GetDeviceInterruptStatus (i2cAddList[0], &intStatus);

    // Read and clear any existing events
    rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[0], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
                                            &classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
                                            &inrushPortEvents, &ilimPortEvents, &supplyEvents);


    intMask.CLMSK_Classificiation_Cycle_Unmask = 1;
    intMask.DEMSK_Detection_Cycle_Unmask = 0;
    intMask.DIMSK_Disconnect_Unmask = 1;
    intMask.PGMSK_Power_Good_Unmask = 1;
    intMask.PEMSK_Power_Enable_Unmask = 1;
    intMask.IFMSK_IFAULT_Unmask = 1;
    intMask.INMSK_Inrush_Fault_Unmask = 1;
    intMask.SUMSK_Supply_Event_Fault_Unmask = 1;

    tps_SetDeviceInterruptMask (i2cAddList[0], intMask);

    tps_SetDeviceOpMode (i2cAddList[0], OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO);

    tps_SetDeviceDisconnectEnable(i2cAddList[0],TPS238X_ALL_PORTS);

    // Power off all ports in case we are re-running this application without physically shutting down ports from previous run
    tps_SetDevicePowerOff (i2cAddList[0], TPS238X_ALL_PORTS);


    // Wait for input from user to start printing to the UART Terminal
    uart_puts ("\r\n");
    while ((UCA0RXBUF != 'S') && (UCA0RXBUF != 's'))
    {
        uart_puts ("\r POE 2388 - Hit 'S' to start");
    	__delay_cycles (60000);
    }

    uart_puts ("\r                                           \r");
    uart_puts ("Welcome to the POE 2388 - Virtual Auto Mode\r\n\n\n");

    IntFlag = 1;    // Set IntFlag to clear SUPF Fault at POR

    tps_SetDeviceDetectClassEnable (i2cAddList[0], TPS238X_ALL_PORTS, TPS238X_ALL_PORTS);   // Start Semi-Auto Detection and Classification for channel 1-4


    while (1)
    {

		OperatingMode = tps_GetDeviceOperatingMode(i2cAddList[0]);

		if(OperatingMode!=0xAA)
		{

			tps_SetDeviceOpMode(i2cAddList[0], OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO);

		}

		tps_ReadI2CReg (i2cAddList[0], TPS238X_POWER_STATUS_COMMAND, &powerGood);

		if((powerGood&0xF0) != 0xF0)

		{
			T2PON = (~powerGood)&0xF0;
			tps_WriteI2CReg (i2cAddList[0], 0x23, T2PON);
			__delay_cycles (3200000); // 400ms delay
		}
     }

}


#pragma vector = PORT2_VECTOR
__interrupt void PORT2_ISR (void)
{

    if (P2IFG & BIT3)
    {
        IntFlag = 1;
    }

    // Clear interrupt flags
    P2IFG = 0;

    LPM0_EXIT;
}


/**************************************************************************************************************************************************
* TIMER0_A1
**************************************************************************************************************************************************/
/*!
*  Blink the Heartbeat LED
*
* @brief Timer Interrupt Routine
*
* @return None
**************************************************************************************************************************************************/


#pragma vector = TIMER0_A1_VECTOR
__interrupt void TIMER0_A1_ISR (void)
{
static unsigned long counter=0;

    TA0CTL &= ~TAIFG;

    if (++counter == 200)       // Every 10 seconds
    {
        counter = 0;
        PrintPower = 1;
    }


    // Double check interrupt - Is P2.3 Low and P2.3 IFG not present?
    if ((!(P2IFG & BIT3)) && (!(P2IN & BIT3)))
    {
        IntFlag = 1;
    }

    LPM0_EXIT;
}



