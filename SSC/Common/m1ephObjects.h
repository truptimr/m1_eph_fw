/*
* This source file is part of the EtherCAT Slave Stack Code licensed by Beckhoff Automation GmbH & Co KG, 33415 Verl, Germany.
* The corresponding license agreement applies. This hint shall not be removed.
*/

/**
* \addtogroup m1eph m1eph
* @{
*/

/**
\file m1ephObjects
\author ET9300Utilities.ApplicationHandler (Version 1.5.0.0) | EthercatSSC@beckhoff.com

\brief m1eph specific objects<br>
\brief NOTE : This file will be overwritten if a new object dictionary is generated!<br>
*/

#if defined(_M1EPH_) && (_M1EPH_ == 1)
#define PROTO
#else
#define PROTO extern
#endif
/******************************************************************************
*                    Object 0x1600 : Control process data mapping
******************************************************************************/
/**
* \addtogroup 0x1600 0x1600 | Control process data mapping
* @{
* \brief Object 0x1600 (Control process data mapping) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Reference to 0x7000.1<br>
* SubIndex 2 - Reference to 0x7000.2<br>
* SubIndex 3 - Reference to 0x7000.3<br>
* SubIndex 4 - Reference to 0x7000.4<br>
* SubIndex 5 - Reference to 0x7000.5<br>
* SubIndex 6 - Reference to 0x7000.6<br>
* SubIndex 7 - Reference to 0x7000.7<br>
* SubIndex 8 - Reference to 0x7000.8<br>
* SubIndex 9 - Reference to 0x7000.9<br>
* SubIndex 10 - Reference to 0x7000.10<br>
* SubIndex 11 - Reference to 0x7000.11<br>
* SubIndex 12 - Reference to 0x7000.12<br>
* SubIndex 13 - Reference to 0x7000.13<br>
* SubIndex 14 - Reference to 0x7000.14<br>
* SubIndex 15 - Reference to 0x7000.15<br>
* SubIndex 16 - Reference to 0x7000.16<br>
* SubIndex 17 - Reference to 0x7000.17<br>
* SubIndex 18 - Reference to 0x7000.18<br>
* SubIndex 19 - Reference to 0x7000.19<br>
* SubIndex 20 - Reference to 0x7000.20<br>
* SubIndex 21 - Reference to 0x7000.21<br>
* SubIndex 22 - Reference to 0x7000.22<br>
* SubIndex 23 - Reference to 0x7000.23<br>
* SubIndex 24 - Reference to 0x7000.24<br>
* SubIndex 25 - Reference to 0x7000.25<br>
* SubIndex 26 - Reference to 0x7000.26<br>
* SubIndex 27 - Reference to 0x7000.27<br>
* SubIndex 28 - Reference to 0x7000.28<br>
* SubIndex 29 - Reference to 0x7000.29<br>
* SubIndex 30 - Reference to 0x7000.30<br>
* SubIndex 31 - Reference to 0x7000.31<br>
* SubIndex 32 - Reference to 0x7000.32<br>
* SubIndex 33 - Padding entry (15Bit)<br>
* SubIndex 34 - Reference to 0x7000.34<br>
* SubIndex 35 - Reference to 0x7000.35<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1600[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Reference to 0x7000.1 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Reference to 0x7000.2 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Reference to 0x7000.3 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Reference to 0x7000.4 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Reference to 0x7000.5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Reference to 0x7000.6 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Reference to 0x7000.7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - Reference to 0x7000.8 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex9 - Reference to 0x7000.9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex10 - Reference to 0x7000.10 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex11 - Reference to 0x7000.11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex12 - Reference to 0x7000.12 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex13 - Reference to 0x7000.13 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex14 - Reference to 0x7000.14 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex15 - Reference to 0x7000.15 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex16 - Reference to 0x7000.16 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex17 - Reference to 0x7000.17 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex18 - Reference to 0x7000.18 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex19 - Reference to 0x7000.19 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex20 - Reference to 0x7000.20 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex21 - Reference to 0x7000.21 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex22 - Reference to 0x7000.22 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex23 - Reference to 0x7000.23 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex24 - Reference to 0x7000.24 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex25 - Reference to 0x7000.25 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex26 - Reference to 0x7000.26 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex27 - Reference to 0x7000.27 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex28 - Reference to 0x7000.28 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex29 - Reference to 0x7000.29 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex30 - Reference to 0x7000.30 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex31 - Reference to 0x7000.31 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex32 - Reference to 0x7000.32 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex33 - Padding entry (15Bit) */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex34 - Reference to 0x7000.34 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex35 - Reference to 0x7000.35 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1600[] = "Control process data mapping\000"
"SubIndex 001\000"
"SubIndex 002\000"
"SubIndex 003\000"
"SubIndex 004\000"
"SubIndex 005\000"
"SubIndex 006\000"
"SubIndex 007\000"
"SubIndex 008\000"
"SubIndex 009\000"
"SubIndex 010\000"
"SubIndex 011\000"
"SubIndex 012\000"
"SubIndex 013\000"
"SubIndex 014\000"
"SubIndex 015\000"
"SubIndex 016\000"
"SubIndex 017\000"
"SubIndex 018\000"
"SubIndex 019\000"
"SubIndex 020\000"
"SubIndex 021\000"
"SubIndex 022\000"
"SubIndex 023\000"
"SubIndex 024\000"
"SubIndex 025\000"
"SubIndex 026\000"
"SubIndex 027\000"
"SubIndex 028\000"
"SubIndex 029\000"
"SubIndex 030\000"
"SubIndex 031\000"
"SubIndex 032\000"
"SubIndex 033\000"
"SubIndex 034\000"
"SubIndex 035\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 - Reference to 0x7000.1 */
UINT32 SI2; /* Subindex2 - Reference to 0x7000.2 */
UINT32 SI3; /* Subindex3 - Reference to 0x7000.3 */
UINT32 SI4; /* Subindex4 - Reference to 0x7000.4 */
UINT32 SI5; /* Subindex5 - Reference to 0x7000.5 */
UINT32 SI6; /* Subindex6 - Reference to 0x7000.6 */
UINT32 SI7; /* Subindex7 - Reference to 0x7000.7 */
UINT32 SI8; /* Subindex8 - Reference to 0x7000.8 */
UINT32 SI9; /* Subindex9 - Reference to 0x7000.9 */
UINT32 SI10; /* Subindex10 - Reference to 0x7000.10 */
UINT32 SI11; /* Subindex11 - Reference to 0x7000.11 */
UINT32 SI12; /* Subindex12 - Reference to 0x7000.12 */
UINT32 SI13; /* Subindex13 - Reference to 0x7000.13 */
UINT32 SI14; /* Subindex14 - Reference to 0x7000.14 */
UINT32 SI15; /* Subindex15 - Reference to 0x7000.15 */
UINT32 SI16; /* Subindex16 - Reference to 0x7000.16 */
UINT32 SI17; /* Subindex17 - Reference to 0x7000.17 */
UINT32 SI18; /* Subindex18 - Reference to 0x7000.18 */
UINT32 SI19; /* Subindex19 - Reference to 0x7000.19 */
UINT32 SI20; /* Subindex20 - Reference to 0x7000.20 */
UINT32 SI21; /* Subindex21 - Reference to 0x7000.21 */
UINT32 SI22; /* Subindex22 - Reference to 0x7000.22 */
UINT32 SI23; /* Subindex23 - Reference to 0x7000.23 */
UINT32 SI24; /* Subindex24 - Reference to 0x7000.24 */
UINT32 SI25; /* Subindex25 - Reference to 0x7000.25 */
UINT32 SI26; /* Subindex26 - Reference to 0x7000.26 */
UINT32 SI27; /* Subindex27 - Reference to 0x7000.27 */
UINT32 SI28; /* Subindex28 - Reference to 0x7000.28 */
UINT32 SI29; /* Subindex29 - Reference to 0x7000.29 */
UINT32 SI30; /* Subindex30 - Reference to 0x7000.30 */
UINT32 SI31; /* Subindex31 - Reference to 0x7000.31 */
UINT32 SI32; /* Subindex32 - Reference to 0x7000.32 */
UINT32 SI33; /* Subindex33 - Padding entry (15Bit) */
UINT32 SI34; /* Subindex34 - Reference to 0x7000.34 */
UINT32 SI35; /* Subindex35 - Reference to 0x7000.35 */
} OBJ_STRUCT_PACKED_END
TOBJ1600;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1600 ControlProcessDataMapping0x1600
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={35,0x70000101,0x70000201,0x70000301,0x70000401,0x70000501,0x70000601,0x70000701,0x70000801,0x70000901,0x70000A01,0x70000B01,0x70000C01,0x70000D01,0x70000E01,0x70000F01,0x70001001,0x70001101,0x70001201,0x70001301,0x70001401,0x70001501,0x70001601,0x70001701,0x70001801,0x70001901,0x70001A01,0x70001B01,0x70001C01,0x70001D01,0x70001E01,0x70001F01,0x70002001,0x0000000F,0x70002201,0x70002320}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A00 : Status process data mapping
******************************************************************************/
/**
* \addtogroup 0x1A00 0x1A00 | Status process data mapping
* @{
* \brief Object 0x1A00 (Status process data mapping) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Reference to 0x6000.1<br>
* SubIndex 2 - Reference to 0x6000.2<br>
* SubIndex 3 - Padding entry (15Bit)<br>
* SubIndex 4 - Reference to 0x6000.4<br>
* SubIndex 5 - Reference to 0x6000.5<br>
* SubIndex 6 - Reference to 0x6000.6<br>
* SubIndex 7 - Reference to 0x6000.7<br>
* SubIndex 8 - Reference to 0x6000.8<br>
* SubIndex 9 - Reference to 0x6000.9<br>
* SubIndex 10 - Reference to 0x6000.10<br>
* SubIndex 11 - Reference to 0x6000.11<br>
* SubIndex 12 - Reference to 0x6000.12<br>
* SubIndex 13 - Reference to 0x6000.13<br>
* SubIndex 14 - Reference to 0x6000.14<br>
* SubIndex 15 - Reference to 0x6000.15<br>
* SubIndex 16 - Reference to 0x6000.16<br>
* SubIndex 17 - Reference to 0x6000.17<br>
* SubIndex 18 - Reference to 0x6000.18<br>
* SubIndex 19 - Reference to 0x6000.19<br>
* SubIndex 20 - Reference to 0x6000.20<br>
* SubIndex 21 - Reference to 0x6000.21<br>
* SubIndex 22 - Reference to 0x6000.22<br>
* SubIndex 23 - Reference to 0x6000.23<br>
* SubIndex 24 - Reference to 0x6000.24<br>
* SubIndex 25 - Reference to 0x6000.25<br>
* SubIndex 26 - Reference to 0x6000.26<br>
* SubIndex 27 - Reference to 0x6000.27<br>
* SubIndex 28 - Reference to 0x6000.28<br>
* SubIndex 29 - Reference to 0x6000.29<br>
* SubIndex 30 - Reference to 0x6000.30<br>
* SubIndex 31 - Reference to 0x6000.31<br>
* SubIndex 32 - Reference to 0x6000.32<br>
* SubIndex 33 - Reference to 0x6000.33<br>
* SubIndex 34 - Reference to 0x6000.34<br>
* SubIndex 35 - Reference to 0x6000.35<br>
* SubIndex 36 - Reference to 0x6000.36<br>
* SubIndex 37 - Reference to 0x6000.37<br>
* SubIndex 38 - Reference to 0x6000.38<br>
* SubIndex 39 - Reference to 0x6000.39<br>
* SubIndex 40 - Reference to 0x6000.40<br>
* SubIndex 41 - Reference to 0x6000.41<br>
* SubIndex 42 - Reference to 0x6000.42<br>
* SubIndex 43 - Reference to 0x6000.43<br>
* SubIndex 44 - Reference to 0x6000.44<br>
* SubIndex 45 - Reference to 0x6000.45<br>
* SubIndex 46 - Reference to 0x6000.46<br>
* SubIndex 47 - Reference to 0x6000.47<br>
* SubIndex 48 - Reference to 0x6000.48<br>
* SubIndex 49 - Reference to 0x6000.49<br>
* SubIndex 50 - Reference to 0x6000.50<br>
* SubIndex 51 - Reference to 0x6000.51<br>
* SubIndex 52 - Reference to 0x6000.52<br>
* SubIndex 53 - Reference to 0x6000.53<br>
* SubIndex 54 - Reference to 0x6000.54<br>
* SubIndex 55 - Reference to 0x6000.55<br>
* SubIndex 56 - Reference to 0x6000.56<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A00[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Reference to 0x6000.1 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Reference to 0x6000.2 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Padding entry (15Bit) */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Reference to 0x6000.4 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Reference to 0x6000.5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Reference to 0x6000.6 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Reference to 0x6000.7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - Reference to 0x6000.8 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex9 - Reference to 0x6000.9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex10 - Reference to 0x6000.10 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex11 - Reference to 0x6000.11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex12 - Reference to 0x6000.12 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex13 - Reference to 0x6000.13 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex14 - Reference to 0x6000.14 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex15 - Reference to 0x6000.15 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex16 - Reference to 0x6000.16 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex17 - Reference to 0x6000.17 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex18 - Reference to 0x6000.18 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex19 - Reference to 0x6000.19 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex20 - Reference to 0x6000.20 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex21 - Reference to 0x6000.21 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex22 - Reference to 0x6000.22 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex23 - Reference to 0x6000.23 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex24 - Reference to 0x6000.24 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex25 - Reference to 0x6000.25 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex26 - Reference to 0x6000.26 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex27 - Reference to 0x6000.27 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex28 - Reference to 0x6000.28 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex29 - Reference to 0x6000.29 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex30 - Reference to 0x6000.30 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex31 - Reference to 0x6000.31 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex32 - Reference to 0x6000.32 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex33 - Reference to 0x6000.33 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex34 - Reference to 0x6000.34 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex35 - Reference to 0x6000.35 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex36 - Reference to 0x6000.36 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex37 - Reference to 0x6000.37 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex38 - Reference to 0x6000.38 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex39 - Reference to 0x6000.39 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex40 - Reference to 0x6000.40 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex41 - Reference to 0x6000.41 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex42 - Reference to 0x6000.42 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex43 - Reference to 0x6000.43 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex44 - Reference to 0x6000.44 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex45 - Reference to 0x6000.45 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex46 - Reference to 0x6000.46 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex47 - Reference to 0x6000.47 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex48 - Reference to 0x6000.48 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex49 - Reference to 0x6000.49 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex50 - Reference to 0x6000.50 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex51 - Reference to 0x6000.51 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex52 - Reference to 0x6000.52 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex53 - Reference to 0x6000.53 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex54 - Reference to 0x6000.54 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex55 - Reference to 0x6000.55 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex56 - Reference to 0x6000.56 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A00[] = "Status process data mapping\000"
"SubIndex 001\000"
"SubIndex 002\000"
"SubIndex 003\000"
"SubIndex 004\000"
"SubIndex 005\000"
"SubIndex 006\000"
"SubIndex 007\000"
"SubIndex 008\000"
"SubIndex 009\000"
"SubIndex 010\000"
"SubIndex 011\000"
"SubIndex 012\000"
"SubIndex 013\000"
"SubIndex 014\000"
"SubIndex 015\000"
"SubIndex 016\000"
"SubIndex 017\000"
"SubIndex 018\000"
"SubIndex 019\000"
"SubIndex 020\000"
"SubIndex 021\000"
"SubIndex 022\000"
"SubIndex 023\000"
"SubIndex 024\000"
"SubIndex 025\000"
"SubIndex 026\000"
"SubIndex 027\000"
"SubIndex 028\000"
"SubIndex 029\000"
"SubIndex 030\000"
"SubIndex 031\000"
"SubIndex 032\000"
"SubIndex 033\000"
"SubIndex 034\000"
"SubIndex 035\000"
"SubIndex 036\000"
"SubIndex 037\000"
"SubIndex 038\000"
"SubIndex 039\000"
"SubIndex 040\000"
"SubIndex 041\000"
"SubIndex 042\000"
"SubIndex 043\000"
"SubIndex 044\000"
"SubIndex 045\000"
"SubIndex 046\000"
"SubIndex 047\000"
"SubIndex 048\000"
"SubIndex 049\000"
"SubIndex 050\000"
"SubIndex 051\000"
"SubIndex 052\000"
"SubIndex 053\000"
"SubIndex 054\000"
"SubIndex 055\000"
"SubIndex 056\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 - Reference to 0x6000.1 */
UINT32 SI2; /* Subindex2 - Reference to 0x6000.2 */
UINT32 SI3; /* Subindex3 - Padding entry (15Bit) */
UINT32 SI4; /* Subindex4 - Reference to 0x6000.4 */
UINT32 SI5; /* Subindex5 - Reference to 0x6000.5 */
UINT32 SI6; /* Subindex6 - Reference to 0x6000.6 */
UINT32 SI7; /* Subindex7 - Reference to 0x6000.7 */
UINT32 SI8; /* Subindex8 - Reference to 0x6000.8 */
UINT32 SI9; /* Subindex9 - Reference to 0x6000.9 */
UINT32 SI10; /* Subindex10 - Reference to 0x6000.10 */
UINT32 SI11; /* Subindex11 - Reference to 0x6000.11 */
UINT32 SI12; /* Subindex12 - Reference to 0x6000.12 */
UINT32 SI13; /* Subindex13 - Reference to 0x6000.13 */
UINT32 SI14; /* Subindex14 - Reference to 0x6000.14 */
UINT32 SI15; /* Subindex15 - Reference to 0x6000.15 */
UINT32 SI16; /* Subindex16 - Reference to 0x6000.16 */
UINT32 SI17; /* Subindex17 - Reference to 0x6000.17 */
UINT32 SI18; /* Subindex18 - Reference to 0x6000.18 */
UINT32 SI19; /* Subindex19 - Reference to 0x6000.19 */
UINT32 SI20; /* Subindex20 - Reference to 0x6000.20 */
UINT32 SI21; /* Subindex21 - Reference to 0x6000.21 */
UINT32 SI22; /* Subindex22 - Reference to 0x6000.22 */
UINT32 SI23; /* Subindex23 - Reference to 0x6000.23 */
UINT32 SI24; /* Subindex24 - Reference to 0x6000.24 */
UINT32 SI25; /* Subindex25 - Reference to 0x6000.25 */
UINT32 SI26; /* Subindex26 - Reference to 0x6000.26 */
UINT32 SI27; /* Subindex27 - Reference to 0x6000.27 */
UINT32 SI28; /* Subindex28 - Reference to 0x6000.28 */
UINT32 SI29; /* Subindex29 - Reference to 0x6000.29 */
UINT32 SI30; /* Subindex30 - Reference to 0x6000.30 */
UINT32 SI31; /* Subindex31 - Reference to 0x6000.31 */
UINT32 SI32; /* Subindex32 - Reference to 0x6000.32 */
UINT32 SI33; /* Subindex33 - Reference to 0x6000.33 */
UINT32 SI34; /* Subindex34 - Reference to 0x6000.34 */
UINT32 SI35; /* Subindex35 - Reference to 0x6000.35 */
UINT32 SI36; /* Subindex36 - Reference to 0x6000.36 */
UINT32 SI37; /* Subindex37 - Reference to 0x6000.37 */
UINT32 SI38; /* Subindex38 - Reference to 0x6000.38 */
UINT32 SI39; /* Subindex39 - Reference to 0x6000.39 */
UINT32 SI40; /* Subindex40 - Reference to 0x6000.40 */
UINT32 SI41; /* Subindex41 - Reference to 0x6000.41 */
UINT32 SI42; /* Subindex42 - Reference to 0x6000.42 */
UINT32 SI43; /* Subindex43 - Reference to 0x6000.43 */
UINT32 SI44; /* Subindex44 - Reference to 0x6000.44 */
UINT32 SI45; /* Subindex45 - Reference to 0x6000.45 */
UINT32 SI46; /* Subindex46 - Reference to 0x6000.46 */
UINT32 SI47; /* Subindex47 - Reference to 0x6000.47 */
UINT32 SI48; /* Subindex48 - Reference to 0x6000.48 */
UINT32 SI49; /* Subindex49 - Reference to 0x6000.49 */
UINT32 SI50; /* Subindex50 - Reference to 0x6000.50 */
UINT32 SI51; /* Subindex51 - Reference to 0x6000.51 */
UINT32 SI52; /* Subindex52 - Reference to 0x6000.52 */
UINT32 SI53; /* Subindex53 - Reference to 0x6000.53 */
UINT32 SI54; /* Subindex54 - Reference to 0x6000.54 */
UINT32 SI55; /* Subindex55 - Reference to 0x6000.55 */
UINT32 SI56; /* Subindex56 - Reference to 0x6000.56 */
} OBJ_STRUCT_PACKED_END
TOBJ1A00;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A00 StatusProcessDataMapping0x1A00
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={56,0x60000110,0x60000201,0x0000000F,0x60000410,0x60000510,0x60000610,0x60000710,0x60000810,0x60000910,0x60000A10,0x60000B10,0x60000C10,0x60000D10,0x60000E10,0x60000F10,0x60001010,0x60001110,0x60001210,0x60001310,0x60001410,0x60001510,0x60001610,0x60001710,0x60001810,0x60001910,0x60001A10,0x60001B10,0x60001C10,0x60001D10,0x60001E10,0x60001F10,0x60002010,0x60002110,0x60002210,0x60002310,0x60002410,0x60002510,0x60002610,0x60002710,0x60002810,0x60002901,0x60002A01,0x60002B01,0x60002C01,0x60002D01,0x60002E01,0x60002F01,0x60003001,0x60003101,0x60003201,0x60003301,0x60003401,0x60003501,0x60003601,0x60003701,0x60003801}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C12 : SyncManager 2 assignment
******************************************************************************/
/**
* \addtogroup 0x1C12 0x1C12 | SyncManager 2 assignment
* @{
* \brief Object 0x1C12 (SyncManager 2 assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C12[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C12[] = "SyncManager 2 assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C12;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C12 sRxPDOassign
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={1,{0x1600}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C13 : SyncManager 3 assignment
******************************************************************************/
/**
* \addtogroup 0x1C13 0x1C13 | SyncManager 3 assignment
* @{
* \brief Object 0x1C13 (SyncManager 3 assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C13[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C13[] = "SyncManager 3 assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C13;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C13 sTxPDOassign
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={1,{0x1A00}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6000 : Status
******************************************************************************/
/**
* \addtogroup 0x6000 0x6000 | Status
* @{
* \brief Object 0x6000 (Status) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - slvhb<br>
* SubIndex 2 - loc_led<br>
* SubIndex 3<br>
* SubIndex 4 - systemPower<br>
* SubIndex 5 - Chip1Voltage<br>
* SubIndex 6 - Chip1Temp<br>
* SubIndex 7 - Chip2Voltage<br>
* SubIndex 8 - Chip2Temp<br>
* SubIndex 9 - Port1Voltage<br>
* SubIndex 10 - Port2Voltage<br>
* SubIndex 11 - Port3Voltage<br>
* SubIndex 12 - Port4Voltage<br>
* SubIndex 13 - Port5Voltage<br>
* SubIndex 14 - Port6Voltage<br>
* SubIndex 15 - Port7Voltage<br>
* SubIndex 16 - Port8Voltage<br>
* SubIndex 17 - Port9Voltage<br>
* SubIndex 18 - Port10Voltage<br>
* SubIndex 19 - Port11Voltage<br>
* SubIndex 20 - Port12Voltage<br>
* SubIndex 21 - Port13Voltage<br>
* SubIndex 22 - Port14Voltage<br>
* SubIndex 23 - Port15Voltage<br>
* SubIndex 24 - Port16Voltage<br>
* SubIndex 25 - Port1Current<br>
* SubIndex 26 - Port2Current<br>
* SubIndex 27 - Port3Current<br>
* SubIndex 28 - Port4Current<br>
* SubIndex 29 - Port5Current<br>
* SubIndex 30 - Port6Current<br>
* SubIndex 31 - Port7Current<br>
* SubIndex 32 - Port8Current<br>
* SubIndex 33 - Port9Current<br>
* SubIndex 34 - Port10Current<br>
* SubIndex 35 - Port11Current<br>
* SubIndex 36 - Port12Current<br>
* SubIndex 37 - Port13Current<br>
* SubIndex 38 - Port14Current<br>
* SubIndex 39 - Port15Current<br>
* SubIndex 40 - Port16Current<br>
* SubIndex 41 - Port1Status<br>
* SubIndex 42 - Port2Status<br>
* SubIndex 43 - Port3Status<br>
* SubIndex 44 - Port4Status<br>
* SubIndex 45 - Port5Status<br>
* SubIndex 46 - Port6Status<br>
* SubIndex 47 - Port7Status<br>
* SubIndex 48 - Port8Status<br>
* SubIndex 49 - Port9Status<br>
* SubIndex 50 - Port10Status<br>
* SubIndex 51 - Port11Status<br>
* SubIndex 52 - Port12Status<br>
* SubIndex 53 - Port13Status<br>
* SubIndex 54 - Port14Status<br>
* SubIndex 55 - Port15Status<br>
* SubIndex 56 - Port16Status<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex1 - slvhb */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex2 - loc_led */
{ DEFTYPE_NULL , 0x0F , 0x0000 }, /* Subindex3 */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex4 - systemPower */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex5 - Chip1Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex6 - Chip1Temp */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex7 - Chip2Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex8 - Chip2Temp */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex9 - Port1Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex10 - Port2Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex11 - Port3Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex12 - Port4Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex13 - Port5Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex14 - Port6Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex15 - Port7Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex16 - Port8Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex17 - Port9Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex18 - Port10Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex19 - Port11Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex20 - Port12Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex21 - Port13Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex22 - Port14Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex23 - Port15Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex24 - Port16Voltage */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex25 - Port1Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex26 - Port2Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex27 - Port3Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex28 - Port4Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex29 - Port5Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex30 - Port6Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex31 - Port7Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex32 - Port8Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex33 - Port9Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex34 - Port10Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex35 - Port11Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex36 - Port12Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex37 - Port13Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex38 - Port14Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex39 - Port15Current */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex40 - Port16Current */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex41 - Port1Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex42 - Port2Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex43 - Port3Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex44 - Port4Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex45 - Port5Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex46 - Port6Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex47 - Port7Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex48 - Port8Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex49 - Port9Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex50 - Port10Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex51 - Port11Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex52 - Port12Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex53 - Port13Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex54 - Port14Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }, /* Subindex55 - Port15Status */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_TXPDOMAPPING }}; /* Subindex56 - Port16Status */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x6000[] = "Status\000"
"slvhb\000"
"loc_led\000"
"\000"
"systemPower\000"
"Chip1Voltage\000"
"Chip1Temp\000"
"Chip2Voltage\000"
"Chip2Temp\000"
"Port1Voltage\000"
"Port2Voltage\000"
"Port3Voltage\000"
"Port4Voltage\000"
"Port5Voltage\000"
"Port6Voltage\000"
"Port7Voltage\000"
"Port8Voltage\000"
"Port9Voltage\000"
"Port10Voltage\000"
"Port11Voltage\000"
"Port12Voltage\000"
"Port13Voltage\000"
"Port14Voltage\000"
"Port15Voltage\000"
"Port16Voltage\000"
"Port1Current\000"
"Port2Current\000"
"Port3Current\000"
"Port4Current\000"
"Port5Current\000"
"Port6Current\000"
"Port7Current\000"
"Port8Current\000"
"Port9Current\000"
"Port10Current\000"
"Port11Current\000"
"Port12Current\000"
"Port13Current\000"
"Port14Current\000"
"Port15Current\000"
"Port16Current\000"
"Port1Status\000"
"Port2Status\000"
"Port3Status\000"
"Port4Status\000"
"Port5Status\000"
"Port6Status\000"
"Port7Status\000"
"Port8Status\000"
"Port9Status\000"
"Port10Status\000"
"Port11Status\000"
"Port12Status\000"
"Port13Status\000"
"Port14Status\000"
"Port15Status\000"
"Port16Status\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT16 Slvhb; /* Subindex1 - slvhb */
BOOLEAN(Loc_led); /* Subindex2 - loc_led */
ALIGN15(SI3) /* Subindex3 */
UINT16 SystemPower; /* Subindex4 - systemPower */
UINT16 Chip1Voltage; /* Subindex5 - Chip1Voltage */
UINT16 Chip1Temp; /* Subindex6 - Chip1Temp */
UINT16 Chip2Voltage; /* Subindex7 - Chip2Voltage */
UINT16 Chip2Temp; /* Subindex8 - Chip2Temp */
UINT16 Port1Voltage; /* Subindex9 - Port1Voltage */
UINT16 Port2Voltage; /* Subindex10 - Port2Voltage */
UINT16 Port3Voltage; /* Subindex11 - Port3Voltage */
UINT16 Port4Voltage; /* Subindex12 - Port4Voltage */
UINT16 Port5Voltage; /* Subindex13 - Port5Voltage */
UINT16 Port6Voltage; /* Subindex14 - Port6Voltage */
UINT16 Port7Voltage; /* Subindex15 - Port7Voltage */
UINT16 Port8Voltage; /* Subindex16 - Port8Voltage */
UINT16 Port9Voltage; /* Subindex17 - Port9Voltage */
UINT16 Port10Voltage; /* Subindex18 - Port10Voltage */
UINT16 Port11Voltage; /* Subindex19 - Port11Voltage */
UINT16 Port12Voltage; /* Subindex20 - Port12Voltage */
UINT16 Port13Voltage; /* Subindex21 - Port13Voltage */
UINT16 Port14Voltage; /* Subindex22 - Port14Voltage */
UINT16 Port15Voltage; /* Subindex23 - Port15Voltage */
UINT16 Port16Voltage; /* Subindex24 - Port16Voltage */
UINT16 Port1Current; /* Subindex25 - Port1Current */
UINT16 Port2Current; /* Subindex26 - Port2Current */
UINT16 Port3Current; /* Subindex27 - Port3Current */
UINT16 Port4Current; /* Subindex28 - Port4Current */
UINT16 Port5Current; /* Subindex29 - Port5Current */
UINT16 Port6Current; /* Subindex30 - Port6Current */
UINT16 Port7Current; /* Subindex31 - Port7Current */
UINT16 Port8Current; /* Subindex32 - Port8Current */
UINT16 Port9Current; /* Subindex33 - Port9Current */
UINT16 Port10Current; /* Subindex34 - Port10Current */
UINT16 Port11Current; /* Subindex35 - Port11Current */
UINT16 Port12Current; /* Subindex36 - Port12Current */
UINT16 Port13Current; /* Subindex37 - Port13Current */
UINT16 Port14Current; /* Subindex38 - Port14Current */
UINT16 Port15Current; /* Subindex39 - Port15Current */
UINT16 Port16Current; /* Subindex40 - Port16Current */
BOOLEAN(Port1Status); /* Subindex41 - Port1Status */
BOOLEAN(Port2Status); /* Subindex42 - Port2Status */
BOOLEAN(Port3Status); /* Subindex43 - Port3Status */
BOOLEAN(Port4Status); /* Subindex44 - Port4Status */
BOOLEAN(Port5Status); /* Subindex45 - Port5Status */
BOOLEAN(Port6Status); /* Subindex46 - Port6Status */
BOOLEAN(Port7Status); /* Subindex47 - Port7Status */
BOOLEAN(Port8Status); /* Subindex48 - Port8Status */
BOOLEAN(Port9Status); /* Subindex49 - Port9Status */
BOOLEAN(Port10Status); /* Subindex50 - Port10Status */
BOOLEAN(Port11Status); /* Subindex51 - Port11Status */
BOOLEAN(Port12Status); /* Subindex52 - Port12Status */
BOOLEAN(Port13Status); /* Subindex53 - Port13Status */
BOOLEAN(Port14Status); /* Subindex54 - Port14Status */
BOOLEAN(Port15Status); /* Subindex55 - Port15Status */
BOOLEAN(Port16Status); /* Subindex56 - Port16Status */
} OBJ_STRUCT_PACKED_END
TOBJ6000;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6000 Status0x6000
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={56,0x0000,0x00,0,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x7000 : Control
******************************************************************************/
/**
* \addtogroup 0x7000 0x7000 | Control
* @{
* \brief Object 0x7000 (Control) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - UsrDisPort1<br>
* SubIndex 2 - UsrDisPort2<br>
* SubIndex 3 - UsrDisPort3<br>
* SubIndex 4 - UsrDisPort4<br>
* SubIndex 5 - UsrDisPort5<br>
* SubIndex 6 - UsrDisPort6<br>
* SubIndex 7 - UsrDisPort7<br>
* SubIndex 8 - UsrDisPort8<br>
* SubIndex 9 - UsrDisPort9<br>
* SubIndex 10 - UsrDisPort10<br>
* SubIndex 11 - UsrDisPort11<br>
* SubIndex 12 - UsrDisPort12<br>
* SubIndex 13 - UsrDisPort13<br>
* SubIndex 14 - UsrDisPort14<br>
* SubIndex 15 - UsrDisPort15<br>
* SubIndex 16 - UsrDisPort16<br>
* SubIndex 17 - UsrEnPort1<br>
* SubIndex 18 - UsrEnPort2<br>
* SubIndex 19 - UsrEnPort3<br>
* SubIndex 20 - UsrEnPort4<br>
* SubIndex 21 - UsrEnPort5<br>
* SubIndex 22 - UsrEnPort6<br>
* SubIndex 23 - UsrEnPort7<br>
* SubIndex 24 - UsrEnPort8<br>
* SubIndex 25 - UsrEnPort9<br>
* SubIndex 26 - UsrEnPort10<br>
* SubIndex 27 - UsrEnPort11<br>
* SubIndex 28 - UsrEnPort12<br>
* SubIndex 29 - UsrEnPort13<br>
* SubIndex 30 - UsrEnPort14<br>
* SubIndex 31 - UsrEnPort15<br>
* SubIndex 32 - UsrEnPort16<br>
* SubIndex 33<br>
* SubIndex 34 - loc_led<br>
* SubIndex 35 - msthb<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x7000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex1 - UsrDisPort1 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex2 - UsrDisPort2 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex3 - UsrDisPort3 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex4 - UsrDisPort4 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex5 - UsrDisPort5 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex6 - UsrDisPort6 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex7 - UsrDisPort7 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex8 - UsrDisPort8 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex9 - UsrDisPort9 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex10 - UsrDisPort10 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex11 - UsrDisPort11 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex12 - UsrDisPort12 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex13 - UsrDisPort13 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex14 - UsrDisPort14 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex15 - UsrDisPort15 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex16 - UsrDisPort16 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex17 - UsrEnPort1 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex18 - UsrEnPort2 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex19 - UsrEnPort3 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex20 - UsrEnPort4 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex21 - UsrEnPort5 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex22 - UsrEnPort6 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex23 - UsrEnPort7 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex24 - UsrEnPort8 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex25 - UsrEnPort9 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex26 - UsrEnPort10 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex27 - UsrEnPort11 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex28 - UsrEnPort12 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex29 - UsrEnPort13 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex30 - UsrEnPort14 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex31 - UsrEnPort15 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex32 - UsrEnPort16 */
{ DEFTYPE_NULL , 0x0F , 0x0000 }, /* Subindex33 */
{ DEFTYPE_BOOLEAN , 0x01 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex34 - loc_led */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }}; /* Subindex35 - msthb */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x7000[] = "Control\000"
"UsrDisPort1\000"
"UsrDisPort2\000"
"UsrDisPort3\000"
"UsrDisPort4\000"
"UsrDisPort5\000"
"UsrDisPort6\000"
"UsrDisPort7\000"
"UsrDisPort8\000"
"UsrDisPort9\000"
"UsrDisPort10\000"
"UsrDisPort11\000"
"UsrDisPort12\000"
"UsrDisPort13\000"
"UsrDisPort14\000"
"UsrDisPort15\000"
"UsrDisPort16\000"
"UsrEnPort1\000"
"UsrEnPort2\000"
"UsrEnPort3\000"
"UsrEnPort4\000"
"UsrEnPort5\000"
"UsrEnPort6\000"
"UsrEnPort7\000"
"UsrEnPort8\000"
"UsrEnPort9\000"
"UsrEnPort10\000"
"UsrEnPort11\000"
"UsrEnPort12\000"
"UsrEnPort13\000"
"UsrEnPort14\000"
"UsrEnPort15\000"
"UsrEnPort16\000"
"\000"
"loc_led\000"
"msthb\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
BOOLEAN(UsrDisPort1); /* Subindex1 - UsrDisPort1 */
BOOLEAN(UsrDisPort2); /* Subindex2 - UsrDisPort2 */
BOOLEAN(UsrDisPort3); /* Subindex3 - UsrDisPort3 */
BOOLEAN(UsrDisPort4); /* Subindex4 - UsrDisPort4 */
BOOLEAN(UsrDisPort5); /* Subindex5 - UsrDisPort5 */
BOOLEAN(UsrDisPort6); /* Subindex6 - UsrDisPort6 */
BOOLEAN(UsrDisPort7); /* Subindex7 - UsrDisPort7 */
BOOLEAN(UsrDisPort8); /* Subindex8 - UsrDisPort8 */
BOOLEAN(UsrDisPort9); /* Subindex9 - UsrDisPort9 */
BOOLEAN(UsrDisPort10); /* Subindex10 - UsrDisPort10 */
BOOLEAN(UsrDisPort11); /* Subindex11 - UsrDisPort11 */
BOOLEAN(UsrDisPort12); /* Subindex12 - UsrDisPort12 */
BOOLEAN(UsrDisPort13); /* Subindex13 - UsrDisPort13 */
BOOLEAN(UsrDisPort14); /* Subindex14 - UsrDisPort14 */
BOOLEAN(UsrDisPort15); /* Subindex15 - UsrDisPort15 */
BOOLEAN(UsrDisPort16); /* Subindex16 - UsrDisPort16 */
BOOLEAN(UsrEnPort1); /* Subindex17 - UsrEnPort1 */
BOOLEAN(UsrEnPort2); /* Subindex18 - UsrEnPort2 */
BOOLEAN(UsrEnPort3); /* Subindex19 - UsrEnPort3 */
BOOLEAN(UsrEnPort4); /* Subindex20 - UsrEnPort4 */
BOOLEAN(UsrEnPort5); /* Subindex21 - UsrEnPort5 */
BOOLEAN(UsrEnPort6); /* Subindex22 - UsrEnPort6 */
BOOLEAN(UsrEnPort7); /* Subindex23 - UsrEnPort7 */
BOOLEAN(UsrEnPort8); /* Subindex24 - UsrEnPort8 */
BOOLEAN(UsrEnPort9); /* Subindex25 - UsrEnPort9 */
BOOLEAN(UsrEnPort10); /* Subindex26 - UsrEnPort10 */
BOOLEAN(UsrEnPort11); /* Subindex27 - UsrEnPort11 */
BOOLEAN(UsrEnPort12); /* Subindex28 - UsrEnPort12 */
BOOLEAN(UsrEnPort13); /* Subindex29 - UsrEnPort13 */
BOOLEAN(UsrEnPort14); /* Subindex30 - UsrEnPort14 */
BOOLEAN(UsrEnPort15); /* Subindex31 - UsrEnPort15 */
BOOLEAN(UsrEnPort16); /* Subindex32 - UsrEnPort16 */
ALIGN15(SI33) /* Subindex33 */
BOOLEAN(Loc_led); /* Subindex34 - loc_led */
UINT32 Msthb; /* Subindex35 - msthb */
} OBJ_STRUCT_PACKED_END
TOBJ7000;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7000 Control0x7000
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={35,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0,0x00,0x00000000}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8001 : DevNum1
******************************************************************************/
/**
* \addtogroup 0x8001 0x8001 | DevNum1
* @{
* \brief Object 0x8001 (DevNum1) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - initStatus<br>
* SubIndex 2 - initMask<br>
* SubIndex 3 - powerEnablePortEvents<br>
* SubIndex 4 - powerGoodPortEvents<br>
* SubIndex 5 - detectionPortEvents<br>
* SubIndex 6 - classificationPortEvents<br>
* SubIndex 7 - icutPortEvents<br>
* SubIndex 8 - disconnectPortEvents<br>
* SubIndex 9 - inrushPortEvents<br>
* SubIndex 10 - ilimPortEvents<br>
* SubIndex 11 - supplyEvents<br>
* SubIndex 12 - detectStatus<br>
* SubIndex 13 - classStatus<br>
* SubIndex 14 - powerEnable<br>
* SubIndex 15 - genMask<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8001[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex1 - initStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex2 - initMask */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex3 - powerEnablePortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex4 - powerGoodPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex5 - detectionPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex6 - classificationPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex7 - icutPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex8 - disconnectPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex9 - inrushPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex10 - ilimPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex11 - supplyEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex12 - detectStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex13 - classStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex14 - powerEnable */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }}; /* Subindex15 - genMask */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x8001[] = "DevNum1\000"
"initStatus\000"
"initMask\000"
"powerEnablePortEvents\000"
"powerGoodPortEvents\000"
"detectionPortEvents\000"
"classificationPortEvents\000"
"icutPortEvents\000"
"disconnectPortEvents\000"
"inrushPortEvents\000"
"ilimPortEvents\000"
"supplyEvents\000"
"detectStatus\000"
"classStatus\000"
"powerEnable\000"
"genMask\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT8 InitStatus; /* Subindex1 - initStatus */
UINT8 InitMask; /* Subindex2 - initMask */
UINT8 PowerEnablePortEvents; /* Subindex3 - powerEnablePortEvents */
UINT8 PowerGoodPortEvents; /* Subindex4 - powerGoodPortEvents */
UINT8 DetectionPortEvents; /* Subindex5 - detectionPortEvents */
UINT8 ClassificationPortEvents; /* Subindex6 - classificationPortEvents */
UINT8 IcutPortEvents; /* Subindex7 - icutPortEvents */
UINT8 DisconnectPortEvents; /* Subindex8 - disconnectPortEvents */
UINT8 InrushPortEvents; /* Subindex9 - inrushPortEvents */
UINT8 IlimPortEvents; /* Subindex10 - ilimPortEvents */
UINT8 SupplyEvents; /* Subindex11 - supplyEvents */
UINT8 DetectStatus; /* Subindex12 - detectStatus */
UINT8 ClassStatus; /* Subindex13 - classStatus */
UINT8 PowerEnable; /* Subindex14 - powerEnable */
UINT8 GenMask; /* Subindex15 - genMask */
} OBJ_STRUCT_PACKED_END
TOBJ8001;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8001 DevNum10x8001
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8002 : DevNum2
******************************************************************************/
/**
* \addtogroup 0x8002 0x8002 | DevNum2
* @{
* \brief Object 0x8002 (DevNum2) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - initStatus<br>
* SubIndex 2 - initMask<br>
* SubIndex 3 - powerEnablePortEvents<br>
* SubIndex 4 - powerGoodPortEvents<br>
* SubIndex 5 - detectionPortEvents<br>
* SubIndex 6 - classificationPortEvents<br>
* SubIndex 7 - icutPortEvents<br>
* SubIndex 8 - disconnectPortEvents<br>
* SubIndex 9 - inrushPortEvents<br>
* SubIndex 10 - ilimPortEvents<br>
* SubIndex 11 - supplyEvents<br>
* SubIndex 12 - detectStatus<br>
* SubIndex 13 - classStatus<br>
* SubIndex 14 - powerEnable<br>
* SubIndex 15 - genMask<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8002[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex1 - initStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex2 - initMask */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex3 - powerEnablePortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex4 - powerGoodPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex5 - detectionPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex6 - classificationPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex7 - icutPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex8 - disconnectPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex9 - inrushPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex10 - ilimPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex11 - supplyEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex12 - detectStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex13 - classStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex14 - powerEnable */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }}; /* Subindex15 - genMask */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x8002[] = "DevNum2\000"
"initStatus\000"
"initMask\000"
"powerEnablePortEvents\000"
"powerGoodPortEvents\000"
"detectionPortEvents\000"
"classificationPortEvents\000"
"icutPortEvents\000"
"disconnectPortEvents\000"
"inrushPortEvents\000"
"ilimPortEvents\000"
"supplyEvents\000"
"detectStatus\000"
"classStatus\000"
"powerEnable\000"
"genMask\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT8 InitStatus; /* Subindex1 - initStatus */
UINT8 InitMask; /* Subindex2 - initMask */
UINT8 PowerEnablePortEvents; /* Subindex3 - powerEnablePortEvents */
UINT8 PowerGoodPortEvents; /* Subindex4 - powerGoodPortEvents */
UINT8 DetectionPortEvents; /* Subindex5 - detectionPortEvents */
UINT8 ClassificationPortEvents; /* Subindex6 - classificationPortEvents */
UINT8 IcutPortEvents; /* Subindex7 - icutPortEvents */
UINT8 DisconnectPortEvents; /* Subindex8 - disconnectPortEvents */
UINT8 InrushPortEvents; /* Subindex9 - inrushPortEvents */
UINT8 IlimPortEvents; /* Subindex10 - ilimPortEvents */
UINT8 SupplyEvents; /* Subindex11 - supplyEvents */
UINT8 DetectStatus; /* Subindex12 - detectStatus */
UINT8 ClassStatus; /* Subindex13 - classStatus */
UINT8 PowerEnable; /* Subindex14 - powerEnable */
UINT8 GenMask; /* Subindex15 - genMask */
} OBJ_STRUCT_PACKED_END
TOBJ8002;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8002 DevNum20x8002
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8003 : DevNum3
******************************************************************************/
/**
* \addtogroup 0x8003 0x8003 | DevNum3
* @{
* \brief Object 0x8003 (DevNum3) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - initStatus<br>
* SubIndex 2 - initMask<br>
* SubIndex 3 - powerEnablePortEvents<br>
* SubIndex 4 - powerGoodPortEvents<br>
* SubIndex 5 - detectionPortEvents<br>
* SubIndex 6 - classificationPortEvents<br>
* SubIndex 7 - icutPortEvents<br>
* SubIndex 8 - disconnectPortEvents<br>
* SubIndex 9 - inrushPortEvents<br>
* SubIndex 10 - ilimPortEvents<br>
* SubIndex 11 - supplyEvents<br>
* SubIndex 12 - detectStatus<br>
* SubIndex 13 - classStatus<br>
* SubIndex 14 - powerEnable<br>
* SubIndex 15 - genMask<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8003[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex1 - initStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex2 - initMask */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex3 - powerEnablePortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex4 - powerGoodPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex5 - detectionPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex6 - classificationPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex7 - icutPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex8 - disconnectPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex9 - inrushPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex10 - ilimPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex11 - supplyEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex12 - detectStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex13 - classStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex14 - powerEnable */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }}; /* Subindex15 - genMask */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x8003[] = "DevNum3\000"
"initStatus\000"
"initMask\000"
"powerEnablePortEvents\000"
"powerGoodPortEvents\000"
"detectionPortEvents\000"
"classificationPortEvents\000"
"icutPortEvents\000"
"disconnectPortEvents\000"
"inrushPortEvents\000"
"ilimPortEvents\000"
"supplyEvents\000"
"detectStatus\000"
"classStatus\000"
"powerEnable\000"
"genMask\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT8 InitStatus; /* Subindex1 - initStatus */
UINT8 InitMask; /* Subindex2 - initMask */
UINT8 PowerEnablePortEvents; /* Subindex3 - powerEnablePortEvents */
UINT8 PowerGoodPortEvents; /* Subindex4 - powerGoodPortEvents */
UINT8 DetectionPortEvents; /* Subindex5 - detectionPortEvents */
UINT8 ClassificationPortEvents; /* Subindex6 - classificationPortEvents */
UINT8 IcutPortEvents; /* Subindex7 - icutPortEvents */
UINT8 DisconnectPortEvents; /* Subindex8 - disconnectPortEvents */
UINT8 InrushPortEvents; /* Subindex9 - inrushPortEvents */
UINT8 IlimPortEvents; /* Subindex10 - ilimPortEvents */
UINT8 SupplyEvents; /* Subindex11 - supplyEvents */
UINT8 DetectStatus; /* Subindex12 - detectStatus */
UINT8 ClassStatus; /* Subindex13 - classStatus */
UINT8 PowerEnable; /* Subindex14 - powerEnable */
UINT8 GenMask; /* Subindex15 - genMask */
} OBJ_STRUCT_PACKED_END
TOBJ8003;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8003 DevNum30x8003
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x8004 : DevNum4
******************************************************************************/
/**
* \addtogroup 0x8004 0x8004 | DevNum4
* @{
* \brief Object 0x8004 (DevNum4) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - initStatus<br>
* SubIndex 2 - initMask<br>
* SubIndex 3 - powerEnablePortEvents<br>
* SubIndex 4 - powerGoodPortEvents<br>
* SubIndex 5 - detectionPortEvents<br>
* SubIndex 6 - classificationPortEvents<br>
* SubIndex 7 - icutPortEvents<br>
* SubIndex 8 - disconnectPortEvents<br>
* SubIndex 9 - inrushPortEvents<br>
* SubIndex 10 - ilimPortEvents<br>
* SubIndex 11 - supplyEvents<br>
* SubIndex 12 - detectStatus<br>
* SubIndex 13 - classStatus<br>
* SubIndex 14 - powerEnable<br>
* SubIndex 15 - genMask<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x8004[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex1 - initStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex2 - initMask */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex3 - powerEnablePortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex4 - powerGoodPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex5 - detectionPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex6 - classificationPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex7 - icutPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex8 - disconnectPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex9 - inrushPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex10 - ilimPortEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex11 - supplyEvents */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex12 - detectStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex13 - classStatus */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }, /* Subindex14 - powerEnable */
{ DEFTYPE_UNSIGNED8 , 0x08 , ACCESS_READ }}; /* Subindex15 - genMask */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x8004[] = "DevNum4\000"
"initStatus\000"
"initMask\000"
"powerEnablePortEvents\000"
"powerGoodPortEvents\000"
"detectionPortEvents\000"
"classificationPortEvents\000"
"icutPortEvents\000"
"disconnectPortEvents\000"
"inrushPortEvents\000"
"ilimPortEvents\000"
"supplyEvents\000"
"detectStatus\000"
"classStatus\000"
"powerEnable\000"
"genMask\000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT8 InitStatus; /* Subindex1 - initStatus */
UINT8 InitMask; /* Subindex2 - initMask */
UINT8 PowerEnablePortEvents; /* Subindex3 - powerEnablePortEvents */
UINT8 PowerGoodPortEvents; /* Subindex4 - powerGoodPortEvents */
UINT8 DetectionPortEvents; /* Subindex5 - detectionPortEvents */
UINT8 ClassificationPortEvents; /* Subindex6 - classificationPortEvents */
UINT8 IcutPortEvents; /* Subindex7 - icutPortEvents */
UINT8 DisconnectPortEvents; /* Subindex8 - disconnectPortEvents */
UINT8 InrushPortEvents; /* Subindex9 - inrushPortEvents */
UINT8 IlimPortEvents; /* Subindex10 - ilimPortEvents */
UINT8 SupplyEvents; /* Subindex11 - supplyEvents */
UINT8 DetectStatus; /* Subindex12 - detectStatus */
UINT8 ClassStatus; /* Subindex13 - classStatus */
UINT8 PowerEnable; /* Subindex14 - powerEnable */
UINT8 GenMask; /* Subindex15 - genMask */
} OBJ_STRUCT_PACKED_END
TOBJ8004;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ8004 DevNum40x8004
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0xF000 : Modular Device Profile
******************************************************************************/
/**
* \addtogroup 0xF000 0xF000 | Modular Device Profile
* @{
* \brief Object 0xF000 (Modular Device Profile) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Index distance <br>
* SubIndex 2 - Maximum number of modules <br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0xF000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }, /* Subindex1 - Index distance  */
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }}; /* Subindex2 - Maximum number of modules  */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0xF000[] = "Modular Device Profile\000"
"Index distance \000"
"Maximum number of modules \000\377";
#endif //#ifdef _OBJD_

#ifndef _M1EPH_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT16 IndexDistance; /* Subindex1 - Index distance  */
UINT16 MaximumNumberOfModules; /* Subindex2 - Maximum number of modules  */
} OBJ_STRUCT_PACKED_END
TOBJF000;
#endif //#ifndef _M1EPH_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJF000 ModularDeviceProfile0xF000
#if defined(_M1EPH_) && (_M1EPH_ == 1)
={2,0x0010,0}
#endif
;
/** @}*/







#ifdef _OBJD_
TOBJECT    OBJMEM ApplicationObjDic[] = {
/* Object 0x1600 */
{NULL , NULL ,  0x1600 , {DEFTYPE_PDOMAPPING , 35 | (OBJCODE_REC << 8)} , asEntryDesc0x1600 , aName0x1600 , &ControlProcessDataMapping0x1600 , NULL , NULL , 0x0000 },
/* Object 0x1A00 */
{NULL , NULL ,  0x1A00 , {DEFTYPE_PDOMAPPING , 56 | (OBJCODE_REC << 8)} , asEntryDesc0x1A00 , aName0x1A00 , &StatusProcessDataMapping0x1A00 , NULL , NULL , 0x0000 },
/* Object 0x1C12 */
{NULL , NULL ,  0x1C12 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C12 , aName0x1C12 , &sRxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x1C13 */
{NULL , NULL ,  0x1C13 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C13 , aName0x1C13 , &sTxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x6000 */
{NULL , NULL ,  0x6000 , {DEFTYPE_RECORD , 56 | (OBJCODE_REC << 8)} , asEntryDesc0x6000 , aName0x6000 , &Status0x6000 , NULL , NULL , 0x0000 },
/* Object 0x7000 */
{NULL , NULL ,  0x7000 , {DEFTYPE_RECORD , 35 | (OBJCODE_REC << 8)} , asEntryDesc0x7000 , aName0x7000 , &Control0x7000 , NULL , NULL , 0x0000 },
/* Object 0x8001 */
{NULL , NULL ,  0x8001 , {DEFTYPE_RECORD , 15 | (OBJCODE_REC << 8)} , asEntryDesc0x8001 , aName0x8001 , &DevNum10x8001 , NULL , NULL , 0x0000 },
/* Object 0x8002 */
{NULL , NULL ,  0x8002 , {DEFTYPE_RECORD , 15 | (OBJCODE_REC << 8)} , asEntryDesc0x8002 , aName0x8002 , &DevNum20x8002 , NULL , NULL , 0x0000 },
/* Object 0x8003 */
{NULL , NULL ,  0x8003 , {DEFTYPE_RECORD , 15 | (OBJCODE_REC << 8)} , asEntryDesc0x8003 , aName0x8003 , &DevNum30x8003 , NULL , NULL , 0x0000 },
/* Object 0x8004 */
{NULL , NULL ,  0x8004 , {DEFTYPE_RECORD , 15 | (OBJCODE_REC << 8)} , asEntryDesc0x8004 , aName0x8004 , &DevNum40x8004 , NULL , NULL , 0x0000 },
/* Object 0xF000 */
{NULL , NULL ,  0xF000 , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0xF000 , aName0xF000 , &ModularDeviceProfile0xF000 , NULL , NULL , 0x0000 },
{NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL}};
#endif    //#ifdef _OBJD_
#undef PROTO

/** @}*/
#define _M1EPH_OBJECTS_H_
