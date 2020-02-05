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

#include <GenericTypeDefs.h>
#include <sys/attribs.h>

#define PAGE_SIZE               1024        // # of 32-bit Instructions per Page
#define BYTE_PAGE_SIZE          (4 * PAGE_SIZE) // Page size in Bytes
#define ROW_SIZE                128         // # of 32-bit Instructions per Row
#define BYTE_ROW_SIZE           (4 * ROW_SIZE) // # Row size in Bytes
#define NUM_ROWS_PAGE           8              //Number of Rows per Page 

#define NVMOP_WORD_PGM          0x4001      // Word program operation
#define NVMOP_PAGE_ERASE        0x4004      // Page erase operation
#define NVMOP_ROW_PGM           0x4003      // Row program operation
#define NVMOP_NOP               0x4000      // NOP operation

void NVMemEnter();
void NVMemExit();
__longramfunc__ UINT NVMemErasePage(void * address);
__longramfunc__ UINT NVMemWriteWord(void * address, UINT data);
__longramfunc__ UINT NVMemWriteRow(void * address, void * data);
UINT NVMemClearError(void);

