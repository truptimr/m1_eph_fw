/*************************************************************************************************************************************************/
/*!     \file main_semi-auto.c
*
*       \brief File containing the example of Power Over Ethernet using the TPS2388 in semi-automatic mode
*
*       \date September 2017
*
*       This file contains an example software that performs semi-automatic detection and classification using the TPS2388
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
*                                                                                                                                                 *
**************************************************************************************************************************************************/
//#include "msp430.h"
#include "common.h"
#include "I2C_Functions.h"
#include "TPS238x.h"
//#include "usci_uart.h"
#include "power_manage.h"
#include "system_init.h"
#include "console.h"
#include "ti_wdt.h"




//// MSP430 Launchpad has P2.0 connected to nReset
//void tpsReset (void)
//{
//    // Toggle nReset Pin
//    P2OUT &= ~BIT0;
//    __delay_cycles(1000);
//    P2OUT |=  BIT0;
//}
//
//void Setup_Timer()
//{
//    /***************************************************
//    * Timer Configuration
//    ***************************************************/
//    TA0CCR0 = 50000;                                    // 50 ms
//    TA0CTL = ((TASSEL_2) | (ID_3) | (MC_1) | (TAIE));   // /8
//}




TPS238X_Interrupt_Register_t intStatus;
TPS238X_Interrupt_Mask_Register_t intMask;
//extern uint8_t sysPortNum, sysPortNum1, sysPortNum2, sysPortNum3, sysPortNum4,sysPortNum5, sysPortNum6, sysPortNum7, sysPortNum8;
TPS238x_Ports_t powerEnablePortEvents, powerGoodPortEvents, detectionPortEvents, classificationPortEvents, icutPortEvents, disconnectPortEvents, inrushPortEvents, ilimPortEvents;
TPS238X_Supply_Event_Register_t supplyEvents;
volatile uint8_t rtn;
TPS238x_Detection_Status_t detectStatus;
TPS238x_Classification_Status_t classStatus;
uint8_t powerEnable;
uint8_t  devNum;
TPS238x_General_Mask_1_Register_t genMask;
TPS238x_Remapping_Register_t remapping;
uint32_t actsyspower;


void main_tpse(void)
{
pet_the_dog();
#if (PRINT_STATUS == 1)
uint16_t current, voltage;
uint8_t  temperature;
unsigned long outNum;
#endif

#if (DETAILED_STATUS == 1)
TPS238x_Ports_t  powerEnablePorts;
TPS238x_Ports_t  powerGoodPorts;
#endif


//    init_MSP430();           //initialize MSP430
//    init_I2C_Functions();    //initialize I2C
//    Setup_UART (PORT_1, BIT2, BIT1, SECONDARY_PERIPHERAL, SMCLK_8_MHZ, UART_9600_BAUD);  //initialize uart
//    Setup_Timer ();
//
//    __enable_interrupt();
//
//    __delay_cycles(184000);   //Wait TPS2388 I2C to be operational


    //Mapping system port for each port
    sysPortNum1 = tps_RegisterPort (i2cAddList[0], TPS238X_PORT_1);
    sysPortNum2 = tps_RegisterPort (i2cAddList[0], TPS238X_PORT_2);
    sysPortNum3 = tps_RegisterPort (i2cAddList[0], TPS238X_PORT_3);
    sysPortNum4 = tps_RegisterPort (i2cAddList[0], TPS238X_PORT_4);

    sysPortNum5 = tps_RegisterPort (i2cAddList[1], TPS238X_PORT_1);
    sysPortNum6 = tps_RegisterPort (i2cAddList[1], TPS238X_PORT_2);
    sysPortNum7 = tps_RegisterPort (i2cAddList[1], TPS238X_PORT_3);
    sysPortNum8 = tps_RegisterPort (i2cAddList[1], TPS238X_PORT_4);
    
    sysPortNum9 = tps_RegisterPort (i2cAddList[2], TPS238X_PORT_1);
    sysPortNum10 = tps_RegisterPort (i2cAddList[2], TPS238X_PORT_2);
    sysPortNum11 = tps_RegisterPort (i2cAddList[2], TPS238X_PORT_3);
    sysPortNum12 = tps_RegisterPort (i2cAddList[2], TPS238X_PORT_4);

    sysPortNum13 = tps_RegisterPort (i2cAddList[3], TPS238X_PORT_1);
    sysPortNum14 = tps_RegisterPort (i2cAddList[3], TPS238X_PORT_2);
    sysPortNum15 = tps_RegisterPort (i2cAddList[3], TPS238X_PORT_3);
    sysPortNum16 = tps_RegisterPort (i2cAddList[3], TPS238X_PORT_4);

    // Get the interrupt status
    rtn =  tps_GetDeviceInterruptStatus (i2cAddList[0], &intStatus);
    rtn =  tps_GetDeviceInterruptStatus (i2cAddList[1], &intStatus);
    rtn =  tps_GetDeviceInterruptStatus (i2cAddList[2], &intStatus);
    rtn =  tps_GetDeviceInterruptStatus (i2cAddList[3], &intStatus);

    // Read and Clear all Events
    rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[0], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
                                            &classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
                                            &inrushPortEvents, &ilimPortEvents, &supplyEvents);

    rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[1], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
                                            &classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
                                            &inrushPortEvents, &ilimPortEvents, &supplyEvents);
    
    rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[2], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
                                            &classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
                                            &inrushPortEvents, &ilimPortEvents, &supplyEvents);
    
    rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[3], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
                                            &classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
                                            &inrushPortEvents, &ilimPortEvents, &supplyEvents);

    intMask.CLMSK_Classificiation_Cycle_Unmask = 1;
    intMask.DEMSK_Detection_Cycle_Unmask = 1;
    intMask.DIMSK_Disconnect_Unmask = 1;
    intMask.PGMSK_Power_Good_Unmask = 1;
    intMask.PEMSK_Power_Enable_Unmask = 1;
    intMask.IFMSK_IFAULT_Unmask = 1;
    intMask.INMSK_Inrush_Fault_Unmask = 1;
    intMask.SUMSK_Supply_Event_Fault_Unmask = 1;


    //Configure interrupt mask of the device
    tps_SetDeviceInterruptMask (i2cAddList[0], intMask);
    tps_SetDeviceInterruptMask (i2cAddList[1], intMask);
    tps_SetDeviceInterruptMask (i2cAddList[2], intMask);
    tps_SetDeviceInterruptMask (i2cAddList[3], intMask);

    genMask.Detec_Change_Enable = 0;
    genMask.Class_Change_Enable = 0;
    genMask.Multi_Bit_Priority = 1;
    genMask.Register_Access_Configuration = 0;
    genMask.INTEN_INT_Pin_Mask = 1;
    genMask.Reserved_5 = 0;
    genMask.Reserved_6 = 0;

    tps_SetDeviceGeneralMask(i2cAddList[0], genMask);
    tps_SetDeviceGeneralMask(i2cAddList[1], genMask);
    tps_SetDeviceGeneralMask(i2cAddList[2], genMask);
    tps_SetDeviceGeneralMask(i2cAddList[3], genMask);

    //Remapping ports in virtual quad 1. Just for example purpose.Use this function when needed
    remapping.Physical_Remap_Logical_Port_1 = 0x00;
    remapping.Physical_Remap_Logical_Port_2 = 0x01;
    remapping.Physical_Remap_Logical_Port_3 = 0x02;
    remapping.Physical_Remap_Logical_Port_4 = 0x03;

    tps_SetDeviceReMapping(i2cAddList[0], remapping);

    //Configure 3 bit OSS priority of port 1 and port 4. Just for example purpose. Use this function when needed
    tps_SetPortMultiBitPriority(sysPortNum1, PRIORITY_2);
    tps_SetPortMultiBitPriority(sysPortNum4, PRIORITY_7);

    tps_SetDeviceOpMode (i2cAddList[0], OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO);
    tps_SetDeviceOpMode (i2cAddList[1], OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO);
    tps_SetDeviceOpMode (i2cAddList[2], OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO);
    tps_SetDeviceOpMode (i2cAddList[3], OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO, OPERATING_MODE_SEMI_AUTO);

    //Enable DC disconnect for all ports
    tps_SetDeviceDisconnectEnable(i2cAddList[0],TPS238X_ALL_PORTS);
    tps_SetDeviceDisconnectEnable(i2cAddList[1],TPS238X_ALL_PORTS);
    tps_SetDeviceDisconnectEnable(i2cAddList[2],TPS238X_ALL_PORTS);
    tps_SetDeviceDisconnectEnable(i2cAddList[3],TPS238X_ALL_PORTS);

    // Power off all ports in case we are re-running this application without physically shutting down ports from previous run
    tps_SetDevicePowerOff (i2cAddList[0], TPS238X_ALL_PORTS);
    tps_SetDevicePowerOff (i2cAddList[1], TPS238X_ALL_PORTS);
    tps_SetDevicePowerOff (i2cAddList[2], TPS238X_ALL_PORTS);
    tps_SetDevicePowerOff (i2cAddList[3], TPS238X_ALL_PORTS);


    // Wait for input from user to start printing to the UART Terminal
    printk ("\r\n");
//    while ((UCA0RXBUF != 'S') && (UCA0RXBUF != 's'))
//    {
        printk ("\r POE 2388 - Hit 'S' to start \r\n");
//        printk("%x",keypress());
//    	usleep (60000);
//    }

    printk ("\r\n");
    printk ("Welcome to the POE 2388 - Semi-Auto Mode for Port Power Management Application\r\n\n\n");

//    IE2 &= ~(UCA0RXIE);

    IntFlag = 1;    // Set IntFlag to clear SUPF Fault at POR

    tps_SetDeviceDetectClassEnable (i2cAddList[0], TPS238X_ALL_PORTS, TPS238X_ALL_PORTS);   // Start Semi-Auto Detection and Classification for all ports
    tps_SetDeviceDetectClassEnable (i2cAddList[1], TPS238X_ALL_PORTS, TPS238X_ALL_PORTS); 
//    tps_SetDeviceDetectClassEnable (i2cAddList[1], TPS238X_ODD_PORTS_HIGH_POWER, TPS238X_ODD_PORTS_HIGH_POWER);   // Start Semi-Auto Detection and Classification for all ports
    tps_SetDeviceDetectClassEnable (i2cAddList[2], TPS238X_ALL_PORTS, TPS238X_ALL_PORTS);   // Start Semi-Auto Detection and Classification for all ports
    tps_SetDeviceDetectClassEnable (i2cAddList[3], TPS238X_ALL_PORTS, TPS238X_ALL_PORTS);   // Start Semi-Auto Detection and Classification for all ports


    while (1)
    {
//        pet_the_dog();
        if (!IntFlag)
        {
          IntFlag = 1;  
//            __enable_interrupt();
//            LPM0;
//            __no_operation();
        }
        else
        {
//            printk("intflag is 1 \r\n");
            IntFlag = 0;

            for (devNum = 0; devNum < NUM_OF_TPS238x; devNum++)
            {
                pet_the_dog();

            	// Get the interrupt and event statuses. Clear the event statuses while reading
				rtn =  tps_GetDeviceInterruptStatus (i2cAddList[devNum], &intStatus);
				rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[devNum], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
														&classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
														&inrushPortEvents, &ilimPortEvents, &supplyEvents);


				// Did we have a new Detection Event?
				if (intStatus.DETC_Detection_Cycle)
				{
                     
					uint8_t target = detectionPortEvents;
					uint8_t i;

					for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        pet_the_dog();
						if (target & 0x1)
						{
							sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], (TPS238x_PortNum_t)i);

							rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
							if (detectStatus == DETECT_RESIST_VALID)          // Valid
							{

							}
						}

						target >>= 1;
					}

				}

				// Did we have a new Classification Event?
				if (intStatus.CLASC_Classification_Cycle)
				{
					uint8_t target = classificationPortEvents;
					uint8_t i;

					for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        pet_the_dog();
						if (target & 0x1)
						{
							sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], (TPS238x_PortNum_t)i);

							if((tps_GetPortPowerEnableStatus(sysPortNum) == TPS_OFF))        // Bypass second class interrupt to turn on the same port twice
							{
								rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);

								actsyspower = PM_calSysPower();
								printk ("\r\n\n");
								printk ("\nClassification Event Port: %lu \n\r",(unsigned long)(i + (4 * devNum) -1));
	
								printk (" - Classification Status: %lu \n\r", (unsigned long)(classStatus));
		                        //Debug
								printk ("\n System Power %lu \n\r", (unsigned long)(actsyspower));


								if ((classStatus != CLASS_OVERCURRENT) &&
									(classStatus != CLASS_UNKNOWN) &&
									(classStatus != CLASS_MISMATCH))
								{

									if(PM_EN)
									{
										PM_powerManagement(sysPortNum);
									}
									else
									{
                                        tps_SetPortIEEEPowerEnable_Type2(sysPortNum);
										//If power management is disabled, turn on the port directly with correct settings of current protection
//										if((sysPortNum !=sysPortNum5)&&(sysPortNum !=sysPortNum7))
//										{
//
//#if(TYPE1_TURN_ON == 1)
//											tps_SetPortIEEEPowerEnable_Type1(sysPortNum);
//#endif
//
//#if(TYPE2_TURN_ON == 1)
//											tps_SetPortIEEEPowerEnable_Type2(sysPortNum);
//#endif
//										}
//
//										else
//										{
//											tps_SetPortIEEEPowerEnable_Type2(sysPortNum);
//
//										}

									}

								}

							}
						}
						target >>= 1;
					}
				}

				// Did we have a new Disconnection Event?
				if (intStatus.DISF_Disconnect_Event)
				{
					printk("new Disconnect event \r\n");
                    uint8_t target = disconnectPortEvents;


				}

				// Did we have a new Power Enable Event?
				if (intStatus.PEC_Power_Enable_Change)
				{
					uint8_t target = powerEnablePortEvents;
					uint8_t i;

					for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        pet_the_dog();
						if (target & 0x1)
						{
							sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], (TPS238x_PortNum_t)i);

							powerEnable = tps_GetPortPowerEnableStatus (sysPortNum);
							if (powerEnable == TPS_ON)          // Valid
							{

							}
						}

						target >>= 1;
					}

				}

				// Did we have a new Power Good Event?
				if (intStatus.PGC_Power_Good_Change)
				{
					uint8_t target = powerGoodPortEvents;
					uint8_t i;

					for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        pet_the_dog();
						if (target & 0x1)
						{
							sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], (TPS238x_PortNum_t)i);

							if(tps_GetPortPowerGoodStatus (sysPortNum) == TPS_ON)
							{
//								if((sysPortNum == sysPortNum5) || ((sysPortNum == sysPortNum7)))
//								{
//									tps_SetPortIEEEPowerEnable_Type2(sysPortNum +1);
//
//								}


							}

						}

						target >>= 1;
					}

				}


				// Fault condition
				if(intStatus.SUPF_Supply_Event_Fault)
				{
					uint8_t *temp = (uint8_t *)&supplyEvents;
					uint8_t target = *temp;

					if(target & 0x10)
					{
						printk("VPWR undervlotage occurred \r\n");
					}
					else if(target & 0x20)
					{
						printk("VDD undervlotage occurred \r\n");
					}

					else if(target & 0x80)
					{
						printk("Thermal shutdown occurred \r\n");
					}

				}

				if(intStatus.INRF_Inrush_Fault)
				{
					uint8_t target = inrushPortEvents;
					uint8_t i;

//					*(uint8_t *)&inactivePorts[devNum] |= target;

					for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        pet_the_dog();
						if (target & 0x1)
						{
							sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], (TPS238x_PortNum_t)i);

//							if((sysPortNum == sysPortNum6) || (sysPortNum == sysPortNum8))
//							{
//
//								tps_SetDeviceDetectClassEnable (i2cAddList[devNum], TPS238X_ODD_PORTS_HIGH_POWER, TPS238X_ODD_PORTS_HIGH_POWER);
//
//							}
							printk ("Start Fault Port %lu \n\r",(unsigned long)(i + (4 * devNum) - 1));
						}
						target >>= 1;
					}
				}

				if(intStatus.IFAULT_ICUT_ILIM_Fault)
				{
					uint8_t targetIcut = icutPortEvents;
					uint8_t targetIlim = ilimPortEvents;
					uint8_t i;


					for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        pet_the_dog();
						if (targetIcut & 0x01)
						{
							printk("ICUT Fault Port %lu\n\r", (unsigned long)(i + (4 * devNum) - 1));

						}

						if(targetIlim & 0x01)
						{
							printk("ILIM Fault Port %lu \n\r", (unsigned long)(i + (4 * devNum) - 1));
						}

						targetIcut >>= 1;
						targetIlim >>= 1;

					}

				}

            }
        }  // if !(IntFlag)




#ifdef PRINT_STATUS
        if (PrintPower>=1)
        {
            pet_the_dog();
            PrintPower--;

#ifdef PM_EN
        	printk ("\r\n\n");
    		printk ("\n System Power %lu mW \r\n", (unsigned long)(actsyspower));
#endif

            printk("---chip 1--- \r\n");
            tps_GetDeviceInputVoltage (i2cAddList[0], &voltage);
            outNum = ((unsigned long)voltage * 3662) / 1000;
            printk ("Input Voltage: %lu mV \r\n ", outNum);

            tps_GetDeviceTemperature (i2cAddList[0], &temperature);
            outNum = CONVERT_TEMP((unsigned long)temperature);
            printk ("Device Temperature: %lu degrees C\r\n\n",outNum);

            printk("---chip 2--- \r\n");
            tps_GetDeviceInputVoltage (i2cAddList[2], &voltage);
            outNum = ((unsigned long)voltage * 3662) / 1000;
            printk ("Input Voltage: %lu mV \r\n ", outNum);

            tps_GetDeviceTemperature (i2cAddList[2], &temperature);
            outNum = CONVERT_TEMP((unsigned long)temperature);
            printk ("Device Temperature: %lu degrees C\r\n\n",outNum);



            if (tps_GetPortPowerGoodStatus(sysPortNum1) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum1, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 0 Voltage: %lu mV  \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 0 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum2) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum2, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 1 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 1 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum3) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum3, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 2 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 2 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum4) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum4, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 3 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 3 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum5) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum5, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 4 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 4 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum6) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum6, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 5 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 5 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum7) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum7, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 6 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 6 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum8) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum8, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 7 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 7 Current: %lu mA \r\n  ",outNum);
            }
            pet_the_dog();
            if (tps_GetPortPowerGoodStatus(sysPortNum9) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum9, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 8 Voltage: %lu mV  \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 8 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum10) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum10, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 9 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 9 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum11) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum11, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 10 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 10 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum12) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum12, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 11 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 11 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum13) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum13, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 12 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 12 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum14) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum14, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 13 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 13 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum15) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum15, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 14 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 14 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum16) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum16, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                printk ("Port 15 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                printk ("Port 15 Current: %lu mA \r\n  ",outNum);
            }

#if (DETAILED_STATUS == 1)
            for (devNum = 0; devNum < NUM_OF_TPS238x; devNum++)
            {
                pet_the_dog();
				// read current value of all event registers (Do not clear)
				rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[devNum], TPS_OFF, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
														&classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
														&inrushPortEvents, &ilimPortEvents, &supplyEvents);

				printk ("\n---- Event Registers -----Dev : 0x%x \r\n ", devNum);

				printk (" Power Good and Power Enable 0x%x \r\n", (powerGoodPortEvents<<4) | powerEnablePortEvents);
				printk (" Classification and Detection 0x%x \r\n", (classificationPortEvents << 4) | detectionPortEvents);
				printk (" Disconnect and ICUT Events 0x%x \r\n", (disconnectPortEvents << 4) | icutPortEvents);
				printk (" ilim and Inrush events 0x%x \r\n", (ilimPortEvents << 4) | inrushPortEvents);
				printk (" Supply Events 0x%x \r\n\n", (*(unsigned char*)&supplyEvents << 4));

				printk ("---- Port Status -----\r\n");
				sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], TPS238X_PORT_1);
				rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
                printk ("  0x%x \r\n",(classStatus<<4) | detectStatus);
				
				sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], TPS238X_PORT_2);
				rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
                printk ("   0x%x \r\n",(classStatus<<4) | detectStatus);
				sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], TPS238X_PORT_3);
				rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
                printk ("   0x%x \r\n", (classStatus<<4) | detectStatus);
				
				sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], TPS238X_PORT_4);
				rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
                printk ("   0x%x \r\n",(classStatus<<4) | detectStatus );
				printk ("\r\n\n");
				
                printk ("---- Power Status -----\r\n");
				rtn = tps_GetDevicePowerStatus (i2cAddList[devNum], &powerEnablePorts, &powerGoodPorts);
                printk (" 0x%x",(powerGoodPorts<<4) | powerEnablePorts);
				printk ("\r\n\n");


				printk ("------------------------------------------\r\n");
            }
#endif
        }

#endif

#if(PM_EN)
        //Realtime monitor the system power
        if(PM_powerMonitor)
        {
        	PM_powerMonitor = 0;
         	PM_monitorSysPower();
        }


        if(PM_restartDectectionClassification)
        {
        	PM_restartDectectionClassification = 0;
        	PM_restartOffPortDetectionClassification();
        }

        if(PrintSyspower)
        {
        	PrintSyspower = 0;
        	actsyspower = PM_calSysPower();
        	printk ("\n System Power %lu \n\r", (unsigned long)(actsyspower));
        }
#endif

    }
}

//#pragma vector = PORT2_VECTOR
//__interrupt void PORT2_ISR (void)
//{
//
//    if (P2IFG & BIT3)
//    {
//        IntFlag = 1;
//    }
//
//    // Clear interrupt flags
//    P2IFG = 0;
//
//    LPM0_EXIT;
//}


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
//#pragma vector = TIMER0_A1_VECTOR
//__interrupt void TIMER0_A1_ISR (void)
//{
//static unsigned long counter=0;
//
//    TA0CTL &= ~TAIFG;
//
//    if (++counter == 200)       // Every 10 seconds
//    {
//        counter = 0;
//        PrintSyspower = 1;
//
//#if (PRINT_STATUS == 1)
//        PrintPower = 1;
//#endif
//    }
//
//    // Monitor total power every 1s
//    if (!(counter % PM_POWER_MONITOR_TIMER))
//    {
//       //PerformDetection = 1;
//       PM_powerMonitor = 1;
//    }
//
//    if (!(counter % PM_DETECT_CLASS_RESTART_TIMER))
//        {
//
//          PM_restartDectectionClassification = 1;
//        }
//
//
//    // Double check interrupt - Is P2.3 Low and P2.3 IFG not present?
//    if ((!(P2IFG & BIT3)) && (!(P2IN & BIT3)))
//    {
//        IntFlag = 1;
//    }
//
//    LPM0_EXIT;
//}



