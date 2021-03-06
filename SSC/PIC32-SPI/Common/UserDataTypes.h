/* 
 * File:   UserDataTypes.h
 * Author: kthiagarajan
 *
 * Created on May 21, 2013, 4:59 PM
 */

#ifndef USERDATATYPES_H
#define	USERDATATYPES_H

#include <GenericTypeDefs.h>
#include "../MemoryManager/MemoryManager.h"

#ifdef	__cplusplus
extern "C" {
#endif

    /*
     * Macros
     */

#define ETH_HEADER_LEN  (14) // Destination MAC (6 bytes), Source MAC (6 bytes), Length (2 bytes)
#define MAC_ADDR_LEN    (6)
#define ETH_PAYLOAD_START (ETH_HEADER_LEN + 0)
    
    typedef enum {BYTE_4, BYTE_16, BYTE_32} Host_Cache_Alignment;

    /* 
     * FIFO_CONFIG_TxDataSize_TxStatusSize_RxDataSize_RxStatusSize
     */
    typedef enum
    {
        FIFO_CONFIG_1536_512_13440_896 = 2,
        FIFO_CONFIG_2560_512_12480_832,
        FIFO_CONFIG_3584_512_11520_768,
        FIFO_CONFIG_4608_512_10560_704,
        FIFO_CONFIG_5632_512_9600_640,
        FIFO_CONFIG_6656_512_8640_576,
        FIFO_CONFIG_7680_512_7680_512,
        FIFO_CONFIG_8704_512_6720_832,
        FIFO_CONFIG_9728_512_5760_832,
        FIFO_CONFIG_10752_512_4800_320,
        FIFO_CONFIG_11776_512_3840_256,
        FIFO_CONFIG_12800_512_2880_192,
        FIFO_CONFIG_13824_512_1920_128
                
    } FIFO_Size_Config;

    typedef union
    {
        BYTE byte[MAC_ADDR_LEN];

    } Mac_Address;

    typedef struct
    {
        Mac_Address DestMacAddress;
        Mac_Address SrcMacAddress;
        UINT16_VAL Type;
        
    } Ether_Header;

    typedef union
    {
        UINT32_VAL dword;
        struct
        {
            UINT32 BufferSize:11;
            UINT32 Reserved4:1;
            UINT32 LastSegment:1;
            UINT32 FirstSegment:1;
            UINT32 Reserved3:2;
            UINT32 DataStartOffset:5;
            UINT32 Reserved2:3;
            UINT32 BufferEndAlignment:2;
            UINT32 Reserved1:5;
            UINT32 InterruptOnCompletion:1;

        } fields;

    } CMD_A;

    typedef union
    {
        UINT32_VAL dword;
        struct
        {
            UINT32 PacketLen:11;
            UINT32 Reserved2:1;
            UINT32 DisableFramePadding:1;
            UINT32 AddCRCDisable:1;
            UINT32 Reserved1:2;
            UINT32 PacketTag:16;
        } fields;

    } CMD_B;

    typedef struct
    {
        Memory_Header *mh;
        UINT8  *buffer;     /* buffer ptr */
        UINT32 *wPtr;       /* WORD pointer to same buffer */
        UINT16  length;     /* length in bytes - only buffer payload */
        UINT16  BufferSize; /* Actual buffer size */
        UINT8   DSO:5;      /* data start offset */
        UINT8   BEA:2;      /* buffer end alignment */
        UINT8   IOC:1;      /* interrupt on completion */
        
    } Buffer_Descriptor;
    
    typedef struct
    {
        UINT16 PacketTag;
        UINT16 PacketLen;

    } Buffer_Command_Params;

#ifdef	__cplusplus
}
#endif

#endif	/* USERDATATYPES_H */

