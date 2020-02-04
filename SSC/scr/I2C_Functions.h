#ifndef __I2C_FUNCTIONS_H
#define __I2C_FUNCTIONS_H
/**************************************************************************************************************************************************
*       I2C_Functions.h   Register File to set up I2C functions                                                                                   *
*                                                                                                                                                 *
*                                                                                                                                                 *
*       Revision Date:      May 2010                                                                                                              *
*                                                                                                                                                 *
*       Revision Level:     1st Pass                                                                                                              *
*                                                                                                                                                 *
*       For Support:        https://e2e.ti.com/support/development_tools/mavrk/default.aspx                                                       *
*                                                                                                                                                 *
***************************************************************************************************************************************************
*       Copyright � 2009-2016 Texas Instruments Incorporated - http://www.ti.com/                                                                 *
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
/**************************************************************************************************************************************************
*               Defines                                                                                                                           *
**************************************************************************************************************************************************/
 
#define I2C_1_BYTE     1
#define I2C_2_BYTES    2
#define I2C_3_BYTES    3
#define I2C_4_BYTES    4
#define I2C_5_BYTES    5
#define I2C_6_BYTES    6
#define I2C_7_BYTES    7
#define I2C_8_BYTES    8
#define I2C_9_BYTES    9
#define I2C_10_BYTES  10
#define I2C_11_BYTES  11
#define I2C_12_BYTES  12
#define I2C_13_BYTES  13
#define I2C_14_BYTES  14
#define I2C_15_BYTES  15 
#define I2C_16_BYTES  16

#define I2C_SUCCESSFUL         0

/********************************************************************************************************************
*  I2C Device Parameters Structure Definition                                                                       *
********************************************************************************************************************/

typedef struct 
{
    unsigned char Address_Mode;            ///< 7 bit or 10 bit address mode 
    unsigned char Clock_Rate;              ///< 100 KHz, 400 KHz 
    unsigned char Initialized;
}I2C_Device_Parameter_type;

/**************************************************************************************************/

extern unsigned char I2C_RX_Data;


/**************************************************************************************************************************************************
*               Prototypes                                                                                                                        *
**************************************************************************************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
  
void init_I2C_Functions (void);
unsigned char tps_WriteI2CReg (unsigned int i2cAddress, unsigned char registerAddress, unsigned char writeValue);
unsigned char tps_WriteI2CMultiple (unsigned int i2cAddress, unsigned char registerAddress, unsigned char *writeValues, unsigned char numWriteBytes);
unsigned char tps_ReadI2CReg (unsigned int i2cAddress, unsigned char registerAddress, unsigned char *readValue);
unsigned char tps_ReadI2CMultiple (unsigned int i2cAddress, unsigned char registerAddress, unsigned char *readValue, unsigned char numReadBytes);

#ifdef __cplusplus
}
#endif
             

#endif  // #ifndef __I2C_FUNCTIONS_H
