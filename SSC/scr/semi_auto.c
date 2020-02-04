/* ************************************************************************** */
#include<stdio.h>
#include<stdint.h>
#include"I2C_Functions.h"
#include"TPS238x.h"
#include"power_manage.h"
#include"config.h"
#include"console.h"
#include "common.h"
#include "m1eph.h"
BOOL disable[16], enable[16], port_status[16];

void semi_auto_init(){
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
    DevNum10x8001.InitStatus = *(uint8_t*)&intStatus;
    rtn =  tps_GetDeviceInterruptStatus (i2cAddList[1], &intStatus);
    DevNum20x8002.InitStatus = *(uint8_t*)&intStatus;
    rtn =  tps_GetDeviceInterruptStatus (i2cAddList[2], &intStatus);
    DevNum30x8003.InitStatus = *(uint8_t*)&intStatus;
    rtn =  tps_GetDeviceInterruptStatus (i2cAddList[3], &intStatus);
    DevNum40x8004.InitStatus = *(uint8_t*)&intStatus;

    // Read and Clear all Events
    rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[0], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
                                            &classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
                                            &inrushPortEvents, &ilimPortEvents, &supplyEvents);
    
    DevNum10x8001.PowerEnablePortEvents  = *(uint8_t*)&powerEnablePortEvents;
    DevNum10x8001.PowerGoodPortEvents =  *(uint8_t*)&powerGoodPortEvents;
    DevNum10x8001.DetectionPortEvents = *(uint8_t*)&detectionPortEvents;
    DevNum10x8001.ClassificationPortEvents = *(uint8_t*)&classificationPortEvents;
    DevNum10x8001.IcutPortEvents = *(uint8_t*)&icutPortEvents;
    DevNum10x8001.DisconnectPortEvents = *(uint8_t*)&disconnectPortEvents;
    DevNum10x8001.InrushPortEvents = *(uint8_t*)&inrushPortEvents;
    DevNum10x8001.IlimPortEvents = *(uint8_t*)&ilimPortEvents;
    DevNum10x8001.SupplyEvents = *(uint8_t*)&supplyEvents;
    
    
    rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[1], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
                                            &classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
                                            &inrushPortEvents, &ilimPortEvents, &supplyEvents);
    
    DevNum20x8002.PowerEnablePortEvents  = *(uint8_t*)&powerEnablePortEvents;
    DevNum20x8002.PowerGoodPortEvents =  *(uint8_t*)&powerGoodPortEvents;
    DevNum20x8002.DetectionPortEvents = *(uint8_t*)&detectionPortEvents;
    DevNum20x8002.ClassificationPortEvents = *(uint8_t*)&classificationPortEvents;
    DevNum20x8002.IcutPortEvents = *(uint8_t*)&icutPortEvents;
    DevNum20x8002.DisconnectPortEvents = *(uint8_t*)&disconnectPortEvents;
    DevNum20x8002.InrushPortEvents = *(uint8_t*)&inrushPortEvents;
    DevNum20x8002.IlimPortEvents = *(uint8_t*)&ilimPortEvents;
    DevNum20x8002.SupplyEvents = *(uint8_t*)&supplyEvents;
    
    rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[2], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
                                            &classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
                                            &inrushPortEvents, &ilimPortEvents, &supplyEvents);
    
    DevNum30x8003.PowerEnablePortEvents  = *(uint8_t*)&powerEnablePortEvents;
    DevNum30x8003.PowerGoodPortEvents =  *(uint8_t*)&powerGoodPortEvents;
    DevNum30x8003.DetectionPortEvents = *(uint8_t*)&detectionPortEvents;
    DevNum30x8003.ClassificationPortEvents = *(uint8_t*)&classificationPortEvents;
    DevNum30x8003.IcutPortEvents = *(uint8_t*)&icutPortEvents;
    DevNum30x8003.DisconnectPortEvents = *(uint8_t*)&disconnectPortEvents;
    DevNum30x8003.InrushPortEvents = *(uint8_t*)&inrushPortEvents;
    DevNum30x8003.IlimPortEvents = *(uint8_t*)&ilimPortEvents;
    DevNum30x8003.SupplyEvents = *(uint8_t*)&supplyEvents;
    
    rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[3], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
                                            &classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
                                            &inrushPortEvents, &ilimPortEvents, &supplyEvents);
    
    DevNum40x8004.PowerEnablePortEvents  = *(uint8_t*)&powerEnablePortEvents;
    DevNum40x8004.PowerGoodPortEvents =  *(uint8_t*)&powerGoodPortEvents;
    DevNum40x8004.DetectionPortEvents = *(uint8_t*)&detectionPortEvents;
    DevNum40x8004.ClassificationPortEvents = *(uint8_t*)&classificationPortEvents;
    DevNum40x8004.IcutPortEvents = *(uint8_t*)&icutPortEvents;
    DevNum40x8004.DisconnectPortEvents = *(uint8_t*)&disconnectPortEvents;
    DevNum40x8004.InrushPortEvents = *(uint8_t*)&inrushPortEvents;
    DevNum40x8004.IlimPortEvents = *(uint8_t*)&ilimPortEvents;
    DevNum40x8004.SupplyEvents = *(uint8_t*)&supplyEvents;

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
    // printk ("\r\n");
//    while ((UCA0RXBUF != 'S') && (UCA0RXBUF != 's'))
//    {
        // printk ("\r POE 2388 - Hit 'S' to start \r\n");
//        // printk("%x",keypress());
//    	usleep (60000);
//    }

    // printk ("\r\n");
    // printk ("Welcome to the POE 2388 - Semi-Auto Mode for Port Power Management Application\r\n\n\n");
    
    tps_SetDeviceDetectClassEnable (i2cAddList[0], TPS238X_ALL_PORTS, TPS238X_ALL_PORTS);   // Start Semi-Auto Detection and Classification for all ports
    tps_SetDeviceDetectClassEnable (i2cAddList[1], TPS238X_ALL_PORTS, TPS238X_ALL_PORTS); 
//    tps_SetDeviceDetectClassEnable (i2cAddList[1], TPS238X_ODD_PORTS_HIGH_POWER, TPS238X_ODD_PORTS_HIGH_POWER);   // Start Semi-Auto Detection and Classification for all ports
    tps_SetDeviceDetectClassEnable (i2cAddList[2], TPS238X_ALL_PORTS, TPS238X_ALL_PORTS);   // Start Semi-Auto Detection and Classification for all ports
    tps_SetDeviceDetectClassEnable (i2cAddList[3], TPS238X_ALL_PORTS, TPS238X_ALL_PORTS);   // Start Semi-Auto Detection and Classification for all ports
    
    IntFlag = 1;    // Set IntFlag to clear SUPF Fault at POR
    
}

void semi_auto(){
    //        // pet_the_dog();
    
        if (!IntFlag)
        {
          IntFlag = 1;  
//            __enable_interrupt();
//            LPM0;
//            __no_operation();
        }
        else
        {
//            // printk("intflag is 1 \r\n");
            IntFlag = 0;

            for (devNum = 0; devNum < NUM_OF_TPS238x; devNum++)
            {
                // pet_the_dog();

            	// Get the interrupt and event statuses. Clear the event statuses while reading
				rtn =  tps_GetDeviceInterruptStatus (i2cAddList[devNum], &intStatus);
                
//                InitStatus0x8001.aEntries[devNum] = *(uint8_t*)&intStatus;
                
				rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[devNum], TPS_ON, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
														&classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
														&inrushPortEvents, &ilimPortEvents, &supplyEvents);
                rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
                
                switch(devNum) {
                    case 0:
                        DevNum10x8001.InitStatus = *(uint8_t*)&intStatus;
                        DevNum10x8001.PowerEnablePortEvents  = *(uint8_t*)&powerEnablePortEvents;
                        DevNum10x8001.PowerGoodPortEvents =  *(uint8_t*)&powerGoodPortEvents;
                        DevNum10x8001.DetectionPortEvents = *(uint8_t*)&detectionPortEvents;
                        DevNum10x8001.ClassificationPortEvents = *(uint8_t*)&classificationPortEvents;
                        DevNum10x8001.IcutPortEvents = *(uint8_t*)&icutPortEvents;
                        DevNum10x8001.DisconnectPortEvents = *(uint8_t*)&disconnectPortEvents;
                        DevNum10x8001.InrushPortEvents = *(uint8_t*)&inrushPortEvents;
                        DevNum10x8001.IlimPortEvents = *(uint8_t*)&ilimPortEvents;
                        DevNum10x8001.SupplyEvents = *(uint8_t*)&supplyEvents;
                        DevNum10x8001.ClassStatus = *(uint8_t*)&classStatus;
                        DevNum10x8001.DetectStatus = *(uint8_t*)&detectStatus;
                        break;
                    
                    case 1:
                        DevNum20x8002.InitStatus = *(uint8_t*)&intStatus;
                        DevNum20x8002.PowerEnablePortEvents  = *(uint8_t*)&powerEnablePortEvents;
                        DevNum20x8002.PowerGoodPortEvents =  *(uint8_t*)&powerGoodPortEvents;
                        DevNum20x8002.DetectionPortEvents = *(uint8_t*)&detectionPortEvents;
                        DevNum20x8002.ClassificationPortEvents = *(uint8_t*)&classificationPortEvents;
                        DevNum20x8002.IcutPortEvents = *(uint8_t*)&icutPortEvents;
                        DevNum20x8002.DisconnectPortEvents = *(uint8_t*)&disconnectPortEvents;
                        DevNum20x8002.InrushPortEvents = *(uint8_t*)&inrushPortEvents;
                        DevNum20x8002.IlimPortEvents = *(uint8_t*)&ilimPortEvents;
                        DevNum20x8002.SupplyEvents = *(uint8_t*)&supplyEvents;
                        DevNum20x8002.ClassStatus = *(uint8_t*)&classStatus;
                        DevNum20x8002.DetectStatus = *(uint8_t*)&detectStatus;
                        break;
                        
                    case 2:
                        DevNum30x8003.InitStatus = *(uint8_t*)&intStatus;
                        DevNum30x8003.PowerEnablePortEvents  = *(uint8_t*)&powerEnablePortEvents;
                        DevNum30x8003.PowerGoodPortEvents =  *(uint8_t*)&powerGoodPortEvents;
                        DevNum30x8003.DetectionPortEvents = *(uint8_t*)&detectionPortEvents;
                        DevNum30x8003.ClassificationPortEvents = *(uint8_t*)&classificationPortEvents;
                        DevNum30x8003.IcutPortEvents = *(uint8_t*)&icutPortEvents;
                        DevNum30x8003.DisconnectPortEvents = *(uint8_t*)&disconnectPortEvents;
                        DevNum30x8003.InrushPortEvents = *(uint8_t*)&inrushPortEvents;
                        DevNum30x8003.IlimPortEvents = *(uint8_t*)&ilimPortEvents;
                        DevNum30x8003.SupplyEvents = *(uint8_t*)&supplyEvents;
                        DevNum30x8003.ClassStatus = *(uint8_t*)&classStatus;
                        DevNum30x8003.DetectStatus = *(uint8_t*)&detectStatus;
                        break;
                        
                    case 3:
                        DevNum40x8004.InitStatus = *(uint8_t*)&intStatus;
                        DevNum40x8004.PowerEnablePortEvents  = *(uint8_t*)&powerEnablePortEvents;
                        DevNum40x8004.PowerGoodPortEvents =  *(uint8_t*)&powerGoodPortEvents;
                        DevNum40x8004.DetectionPortEvents = *(uint8_t*)&detectionPortEvents;
                        DevNum40x8004.ClassificationPortEvents = *(uint8_t*)&classificationPortEvents;
                        DevNum40x8004.IcutPortEvents = *(uint8_t*)&icutPortEvents;
                        DevNum40x8004.DisconnectPortEvents = *(uint8_t*)&disconnectPortEvents;
                        DevNum40x8004.InrushPortEvents = *(uint8_t*)&inrushPortEvents;
                        DevNum40x8004.IlimPortEvents = *(uint8_t*)&ilimPortEvents;
                        DevNum40x8004.SupplyEvents = *(uint8_t*)&supplyEvents;
                        DevNum40x8004.ClassStatus = *(uint8_t*)&classStatus;
                        DevNum40x8004.DetectStatus = *(uint8_t*)&detectStatus;
                        break;
                        
                    default:
                        break;
 
                }

                // is there a user port enable/disable command
                uint8_t i;
                for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        // pet_the_dog();
						
							sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], (TPS238x_PortNum_t)i);                           
                            
                            if(disable[sysPortNum]){
                                tps_SetPortPower (sysPortNum, TPS_OFF);
                            }
                            if(enable[sysPortNum] && !disable[sysPortNum]){
                                tps_SetPortPower (sysPortNum, TPS_ON);
                            }
                        
                }

				// Did we have a new Detection Event?
				if (intStatus.DETC_Detection_Cycle)
				{
                     
					uint8_t target = detectionPortEvents;
					uint8_t i;

					for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        // pet_the_dog();
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
                        // pet_the_dog();
						if (target & 0x1)
						{
							sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], (TPS238x_PortNum_t)i);


							if((tps_GetPortPowerEnableStatus(sysPortNum) == TPS_OFF) && !disable[sysPortNum])        // Bypass second class interrupt to turn on the same port twice
							{
								rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);

								actsyspower = PM_calSysPower();
								// printk ("\r\n\n");
								// printk ("\nClassification Event Port: %lu \n\r",(unsigned long)(i + (4 * devNum) -1));
	
								// printk (" - Classification Status: %lu \n\r", (unsigned long)(classStatus));
		                        //Debug
								// printk ("\n System Power %lu \n\r", (unsigned long)(actsyspower));


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
                                    port_status[sysPortNum] = 1;

								}
                                port_status[sysPortNum] = 0;

							}
						}
						target >>= 1;
					}
				}

				// Did we have a new Disconnection Event?
				if (intStatus.DISF_Disconnect_Event)
				{
					// printk("new Disconnect event \r\n");
                    uint8_t target = disconnectPortEvents;


				}

				// Did we have a new Power Enable Event?
				if (intStatus.PEC_Power_Enable_Change)
				{
					uint8_t target = powerEnablePortEvents;
					uint8_t i;

					for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        // pet_the_dog();
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
                        // pet_the_dog();
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
                                port_status[sysPortNum] = 1;

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
						// printk("VPWR undervlotage occurred \r\n");
					}
					else if(target & 0x20)
					{
						// printk("VDD undervlotage occurred \r\n");
					}

					else if(target & 0x80)
					{
						// printk("Thermal shutdown occurred \r\n");
					}

				}

				if(intStatus.INRF_Inrush_Fault)
				{
					uint8_t target = inrushPortEvents;
					uint8_t i;
                    
                    

//					*(uint8_t *)&inactivePorts[devNum] |= target;

					for (i = TPS238X_PORT_1; i <= TPS238X_PORT_4; i++)
					{
                        // pet_the_dog();
						if (target & 0x1)
						{
							sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], (TPS238x_PortNum_t)i);
                            port_status[sysPortNum] = 0;

//							if((sysPortNum == sysPortNum6) || (sysPortNum == sysPortNum8))
//							{
//
//								tps_SetDeviceDetectClassEnable (i2cAddList[devNum], TPS238X_ODD_PORTS_HIGH_POWER, TPS238X_ODD_PORTS_HIGH_POWER);
//
//							}
							// printk ("Start Fault Port %lu \n\r",(unsigned long)(i + (4 * devNum) - 1));
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
                        sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], (TPS238x_PortNum_t)i);
                        port_status[sysPortNum] = 0;
                        // pet_the_dog();
						if (targetIcut & 0x01)
						{
							// printk("ICUT Fault Port %lu\n\r", (unsigned long)(i + (4 * devNum) - 1));

						}

						if(targetIlim & 0x01)
						{
							// printk("ILIM Fault Port %lu \n\r", (unsigned long)(i + (4 * devNum) - 1));
						}

						targetIcut >>= 1;
						targetIlim >>= 1;

					}

				}                

            }
        }  // if !(IntFlag)




//#ifdef PRINT_STATUS
//        if (PrintPower>=1)
//        {
            // pet_the_dog();
            PrintPower--;

//#ifdef PM_EN
        	// printk ("\r\n\n");
    		// printk ("\n System Power %lu mW \r\n", (unsigned long)(actsyspower));
            Status0x6000.SystemPower = (unsigned long)(actsyspower);
//#endif

            // printk("---chip 1--- \r\n");
            tps_GetDeviceInputVoltage (i2cAddList[0], &voltage);
            outNum = ((unsigned long)voltage * 3662) / 1000;
            Status0x6000.Chip1Voltage = outNum;
            // printk ("Input Voltage: %lu mV \r\n ", outNum);
            
            tps_GetDeviceTemperature (i2cAddList[0], &temperature);
            outNum = CONVERT_TEMP((unsigned long)temperature);
            Status0x6000.Chip1Temp= outNum;
            // printk ("Device Temperature: %lu degrees C\r\n\n",outNum);

            // printk("---chip 2--- \r\n");
            tps_GetDeviceInputVoltage (i2cAddList[2], &voltage);
            outNum = ((unsigned long)voltage * 3662) / 1000;
            Status0x6000.Chip2Voltage = outNum;
            // printk ("Input Voltage: %lu mV \r\n ", outNum);

            tps_GetDeviceTemperature (i2cAddList[2], &temperature);
            outNum = CONVERT_TEMP((unsigned long)temperature);
            Status0x6000.Chip2Temp = outNum;
            // printk ("Device Temperature: %lu degrees C\r\n\n",outNum);



            if (tps_GetPortPowerGoodStatus(sysPortNum1) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum1, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port1Voltage = outNum;
                // printk ("Port 0 Voltage: %lu mV  \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port1Current = outNum;
                // printk ("Port 0 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum2) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum2, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port2Voltage = outNum;
                // printk ("Port 1 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port2Current = outNum;
                // printk ("Port 1 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum3) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum3, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port3Voltage = outNum;
                // printk ("Port 2 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port3Current = outNum;
                // printk ("Port 2 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum4) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum4, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port4Voltage = outNum;
                // printk ("Port 3 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port4Current = outNum;
                // printk ("Port 3 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum5) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum5, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port5Voltage = outNum;
                // printk ("Port 4 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port5Current = outNum;
                // printk ("Port 4 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum6) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum6, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port6Voltage = outNum;
                // printk ("Port 5 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port6Current = outNum;
                // printk ("Port 5 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum7) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum7, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port7Voltage = outNum;
                // printk ("Port 6 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port7Current = outNum;
                // printk ("Port 6 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum8) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum8, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port8Voltage = outNum;
                // printk ("Port 7 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port8Current = outNum;
                // printk ("Port 7 Current: %lu mA \r\n  ",outNum);
            }
            // pet_the_dog();
            if (tps_GetPortPowerGoodStatus(sysPortNum9) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum9, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port9Voltage = outNum;
                // printk ("Port 8 Voltage: %lu mV  \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port9Current = outNum;
                // printk ("Port 8 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum10) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum10, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port10Voltage = outNum;
                // printk ("Port 9 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port10Current = outNum;
                // printk ("Port 9 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum11) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum11, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port11Voltage = outNum;
                // printk ("Port 10 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port11Current = outNum;
                // printk ("Port 10 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum12) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum12, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port12Voltage = outNum;
                // printk ("Port 11 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port12Current = outNum;
                // printk ("Port 11 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum13) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum13, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port13Voltage = outNum;
                // printk ("Port 12 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port13Current = outNum;
                // printk ("Port 12 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum14) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum14, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port14Voltage = outNum;
                // printk ("Port 13 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port14Current = outNum;
                // printk ("Port 13 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum15) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum15, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port15Voltage = outNum;
                // printk ("Port 14 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port15Current = outNum;
                // printk ("Port 14 Current: %lu mA \r\n  ",outNum);
            }

            if (tps_GetPortPowerGoodStatus(sysPortNum16) == TPS_ON)
            {
                tps_GetPortMeasurements (sysPortNum16, &voltage, &current);
                outNum = ((unsigned long)voltage * 3662) / 1000;
                Status0x6000.Port16Voltage = outNum;
                // printk ("Port 15 Voltage: %lu mV \r\n",outNum);
                outNum = ((unsigned long)current * 61035) / 1000000;
                Status0x6000.Port16Current = outNum;
                // printk ("Port 15 Current: %lu mA \r\n  ",outNum);
            }

////#if (DETAILED_STATUS == 1)
//            for (devNum = 0; devNum < NUM_OF_TPS238x; devNum++)
//            {
//                // pet_the_dog();
//				// read current value of all event registers (Do not clear)
//				rtn =  tps_GetDeviceAllInterruptEvents (i2cAddList[devNum], TPS_OFF, &powerEnablePortEvents, &powerGoodPortEvents, &detectionPortEvents,
//														&classificationPortEvents, &icutPortEvents, &disconnectPortEvents,
//														&inrushPortEvents, &ilimPortEvents, &supplyEvents);
//
//				// printk ("\n---- Event Registers -----Dev : 0x%x \r\n ", devNum);
//
//				// printk (" Power Good and Power Enable 0x%x \r\n", (powerGoodPortEvents<<4) | powerEnablePortEvents);
//				// printk (" Classification and Detection 0x%x \r\n", (classificationPortEvents << 4) | detectionPortEvents);
//				// printk (" Disconnect and ICUT Events 0x%x \r\n", (disconnectPortEvents << 4) | icutPortEvents);
//				// printk (" ilim and Inrush events 0x%x \r\n", (ilimPortEvents << 4) | inrushPortEvents);
//				// printk (" Supply Events 0x%x \r\n\n", (*(unsigned char*)&supplyEvents << 4));
//
//				// printk ("---- Port Status -----\r\n");
//				sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], TPS238X_PORT_1);
//				rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
//                // printk ("  0x%x \r\n",(classStatus<<4) | detectStatus);
//				
//				sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], TPS238X_PORT_2);
//				rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
//                // printk ("   0x%x \r\n",(classStatus<<4) | detectStatus);
//				sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], TPS238X_PORT_3);
//				rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
//                // printk ("   0x%x \r\n", (classStatus<<4) | detectStatus);
//				
//				sysPortNum = tps_GetSystemPortNumber (i2cAddList[devNum], TPS238X_PORT_4);
//				rtn = tps_GetPortDetectClassStatus (sysPortNum, &detectStatus, &classStatus);
//                // printk ("   0x%x \r\n",(classStatus<<4) | detectStatus );
//				// printk ("\r\n\n");
//				
//                // printk ("---- Power Status -----\r\n");
//				rtn = tps_GetDevicePowerStatus (i2cAddList[devNum], &powerEnablePorts, &powerGoodPorts);
//                // printk (" 0x%x",(powerGoodPorts<<4) | powerEnablePorts);
//				// printk ("\r\n\n");
//
//
//				// printk ("------------------------------------------\r\n");
//            }
////#endif
////        }
//
////#endif
//
////#if(PM_EN)
//        //Realtime monitor the system power
//        if(PM_powerMonitor)
//        {
//        	PM_powerMonitor = 0;
//         	PM_monitorSysPower();
//        }
//
//
//        if(PM_restartDectectionClassification)
//        {
//        	PM_restartDectectionClassification = 0;
//        	PM_restartOffPortDetectionClassification();
//        }
//
//        if(PrintSyspower)
//        {
//        	PrintSyspower = 0;
//        	actsyspower = PM_calSysPower();
//        	// printk ("\n System Power %lu \n\r", (unsigned long)(actsyspower));
//        }
////#endif
}



void update_port_status(){
memcpy((UINT8*)&port_status, (UINT8*)(&Status0x6000)+sizeof(Status0x6000.u16SubIndex0), sizeof(Status0x6000)-sizeof(Status0x6000.u16SubIndex0));   
   
}

void update_port_control(){
    disable[0] = (BOOL)Control0x7000.UsrDisPort1;

    disable[1] = (BOOL)Control0x7000.UsrDisPort2;

    disable[2] = (BOOL)Control0x7000.UsrDisPort3;

    disable[3] = (BOOL)Control0x7000.UsrDisPort4;

    disable[4] = (BOOL)Control0x7000.UsrDisPort5;

    disable[5] = (BOOL)Control0x7000.UsrDisPort6;

    disable[6] = (BOOL)Control0x7000.UsrDisPort7;

    disable[7] = (BOOL)Control0x7000.UsrDisPort8;

    disable[8] = (BOOL)Control0x7000.UsrDisPort9;

    disable[9] = (BOOL)Control0x7000.UsrDisPort10;

    disable[10] = (BOOL)Control0x7000.UsrDisPort11;

    disable[11] = (BOOL)Control0x7000.UsrDisPort12;

    disable[12] = (BOOL)Control0x7000.UsrDisPort13;

    disable[13] = (BOOL)Control0x7000.UsrDisPort14;

    disable[14] = (BOOL)Control0x7000.UsrDisPort15;

    disable[15] = (BOOL)Control0x7000.UsrDisPort16;
    
    enable[0] = (BOOL)Control0x7000.UsrEnPort1;

    enable[1] = (BOOL)Control0x7000.UsrEnPort2;

    enable[2] = (BOOL)Control0x7000.UsrEnPort3;

    enable[3] = (BOOL)Control0x7000.UsrEnPort4;

    enable[4] = (BOOL)Control0x7000.UsrEnPort5;

    enable[5] = (BOOL)Control0x7000.UsrEnPort6;

    enable[6] = (BOOL)Control0x7000.UsrEnPort7;

    enable[7] = (BOOL)Control0x7000.UsrEnPort8;

    enable[8] = (BOOL)Control0x7000.UsrEnPort9;

    enable[9] = (BOOL)Control0x7000.UsrEnPort10;

    enable[10] = (BOOL)Control0x7000.UsrEnPort11;

    enable[11] = (BOOL)Control0x7000.UsrEnPort12;

    enable[12] = (BOOL)Control0x7000.UsrEnPort13;

    enable[13] = (BOOL)Control0x7000.UsrEnPort14;

    enable[14] = (BOOL)Control0x7000.UsrEnPort15;

    enable[15] = (BOOL)Control0x7000.UsrEnPort16;
}

/* *****************************************************************************
 End of File
 */
