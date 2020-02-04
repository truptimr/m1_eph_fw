#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-SPI_XC32_PIC32MX795F512L.mk)" "nbproject/Makefile-local-SPI_XC32_PIC32MX795F512L.mk"
include nbproject/Makefile-local-SPI_XC32_PIC32MX795F512L.mk
endif
endif

# Environment
MKDIR=mkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=SPI_XC32_PIC32MX795F512L
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/PIC32-SPI.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/PIC32-SPI.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../Common/9252_HW.c ../Common/coeappl.c ../Common/ecatappl.c ../Common/ecatcoe.c ../Common/ecateoe.c ../Common/ecatfoe.c ../Common/ecatslv.c ../Common/emcy.c ../Common/eoeappl.c ../Common/foeappl.c ../Common/mailbox.c ../Common/objdef.c ../Common/sdoserv.c MemoryManager/MemoryManager.c SPIDriver/SPIDriver.c configuration_bits.c exceptions.c interrupts.c main.c system.c user.c Scheduler.c ../scr/Common.c ../scr/I2C_Functions.c ../scr/ti_wdt.c ../scr/TPS238x.c ../scr/i2c.c ../scr/console.c ../scr/config.c ../scr/power_manage.c ../scr/semi_auto.c ../Common/m1eph.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/2108356922/9252_HW.o ${OBJECTDIR}/_ext/2108356922/coeappl.o ${OBJECTDIR}/_ext/2108356922/ecatappl.o ${OBJECTDIR}/_ext/2108356922/ecatcoe.o ${OBJECTDIR}/_ext/2108356922/ecateoe.o ${OBJECTDIR}/_ext/2108356922/ecatfoe.o ${OBJECTDIR}/_ext/2108356922/ecatslv.o ${OBJECTDIR}/_ext/2108356922/emcy.o ${OBJECTDIR}/_ext/2108356922/eoeappl.o ${OBJECTDIR}/_ext/2108356922/foeappl.o ${OBJECTDIR}/_ext/2108356922/mailbox.o ${OBJECTDIR}/_ext/2108356922/objdef.o ${OBJECTDIR}/_ext/2108356922/sdoserv.o ${OBJECTDIR}/MemoryManager/MemoryManager.o ${OBJECTDIR}/SPIDriver/SPIDriver.o ${OBJECTDIR}/configuration_bits.o ${OBJECTDIR}/exceptions.o ${OBJECTDIR}/interrupts.o ${OBJECTDIR}/main.o ${OBJECTDIR}/system.o ${OBJECTDIR}/user.o ${OBJECTDIR}/Scheduler.o ${OBJECTDIR}/_ext/1360936787/Common.o ${OBJECTDIR}/_ext/1360936787/I2C_Functions.o ${OBJECTDIR}/_ext/1360936787/ti_wdt.o ${OBJECTDIR}/_ext/1360936787/TPS238x.o ${OBJECTDIR}/_ext/1360936787/i2c.o ${OBJECTDIR}/_ext/1360936787/console.o ${OBJECTDIR}/_ext/1360936787/config.o ${OBJECTDIR}/_ext/1360936787/power_manage.o ${OBJECTDIR}/_ext/1360936787/semi_auto.o ${OBJECTDIR}/_ext/2108356922/m1eph.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/2108356922/9252_HW.o.d ${OBJECTDIR}/_ext/2108356922/coeappl.o.d ${OBJECTDIR}/_ext/2108356922/ecatappl.o.d ${OBJECTDIR}/_ext/2108356922/ecatcoe.o.d ${OBJECTDIR}/_ext/2108356922/ecateoe.o.d ${OBJECTDIR}/_ext/2108356922/ecatfoe.o.d ${OBJECTDIR}/_ext/2108356922/ecatslv.o.d ${OBJECTDIR}/_ext/2108356922/emcy.o.d ${OBJECTDIR}/_ext/2108356922/eoeappl.o.d ${OBJECTDIR}/_ext/2108356922/foeappl.o.d ${OBJECTDIR}/_ext/2108356922/mailbox.o.d ${OBJECTDIR}/_ext/2108356922/objdef.o.d ${OBJECTDIR}/_ext/2108356922/sdoserv.o.d ${OBJECTDIR}/MemoryManager/MemoryManager.o.d ${OBJECTDIR}/SPIDriver/SPIDriver.o.d ${OBJECTDIR}/configuration_bits.o.d ${OBJECTDIR}/exceptions.o.d ${OBJECTDIR}/interrupts.o.d ${OBJECTDIR}/main.o.d ${OBJECTDIR}/system.o.d ${OBJECTDIR}/user.o.d ${OBJECTDIR}/Scheduler.o.d ${OBJECTDIR}/_ext/1360936787/Common.o.d ${OBJECTDIR}/_ext/1360936787/I2C_Functions.o.d ${OBJECTDIR}/_ext/1360936787/ti_wdt.o.d ${OBJECTDIR}/_ext/1360936787/TPS238x.o.d ${OBJECTDIR}/_ext/1360936787/i2c.o.d ${OBJECTDIR}/_ext/1360936787/console.o.d ${OBJECTDIR}/_ext/1360936787/config.o.d ${OBJECTDIR}/_ext/1360936787/power_manage.o.d ${OBJECTDIR}/_ext/1360936787/semi_auto.o.d ${OBJECTDIR}/_ext/2108356922/m1eph.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/2108356922/9252_HW.o ${OBJECTDIR}/_ext/2108356922/coeappl.o ${OBJECTDIR}/_ext/2108356922/ecatappl.o ${OBJECTDIR}/_ext/2108356922/ecatcoe.o ${OBJECTDIR}/_ext/2108356922/ecateoe.o ${OBJECTDIR}/_ext/2108356922/ecatfoe.o ${OBJECTDIR}/_ext/2108356922/ecatslv.o ${OBJECTDIR}/_ext/2108356922/emcy.o ${OBJECTDIR}/_ext/2108356922/eoeappl.o ${OBJECTDIR}/_ext/2108356922/foeappl.o ${OBJECTDIR}/_ext/2108356922/mailbox.o ${OBJECTDIR}/_ext/2108356922/objdef.o ${OBJECTDIR}/_ext/2108356922/sdoserv.o ${OBJECTDIR}/MemoryManager/MemoryManager.o ${OBJECTDIR}/SPIDriver/SPIDriver.o ${OBJECTDIR}/configuration_bits.o ${OBJECTDIR}/exceptions.o ${OBJECTDIR}/interrupts.o ${OBJECTDIR}/main.o ${OBJECTDIR}/system.o ${OBJECTDIR}/user.o ${OBJECTDIR}/Scheduler.o ${OBJECTDIR}/_ext/1360936787/Common.o ${OBJECTDIR}/_ext/1360936787/I2C_Functions.o ${OBJECTDIR}/_ext/1360936787/ti_wdt.o ${OBJECTDIR}/_ext/1360936787/TPS238x.o ${OBJECTDIR}/_ext/1360936787/i2c.o ${OBJECTDIR}/_ext/1360936787/console.o ${OBJECTDIR}/_ext/1360936787/config.o ${OBJECTDIR}/_ext/1360936787/power_manage.o ${OBJECTDIR}/_ext/1360936787/semi_auto.o ${OBJECTDIR}/_ext/2108356922/m1eph.o

# Source Files
SOURCEFILES=../Common/9252_HW.c ../Common/coeappl.c ../Common/ecatappl.c ../Common/ecatcoe.c ../Common/ecateoe.c ../Common/ecatfoe.c ../Common/ecatslv.c ../Common/emcy.c ../Common/eoeappl.c ../Common/foeappl.c ../Common/mailbox.c ../Common/objdef.c ../Common/sdoserv.c MemoryManager/MemoryManager.c SPIDriver/SPIDriver.c configuration_bits.c exceptions.c interrupts.c main.c system.c user.c Scheduler.c ../scr/Common.c ../scr/I2C_Functions.c ../scr/ti_wdt.c ../scr/TPS238x.c ../scr/i2c.c ../scr/console.c ../scr/config.c ../scr/power_manage.c ../scr/semi_auto.c ../Common/m1eph.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-SPI_XC32_PIC32MX795F512L.mk dist/${CND_CONF}/${IMAGE_TYPE}/PIC32-SPI.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MX795F512L
MP_LINKER_FILE_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/2108356922/9252_HW.o: ../Common/9252_HW.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/9252_HW.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/9252_HW.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/9252_HW.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/9252_HW.o.d" -o ${OBJECTDIR}/_ext/2108356922/9252_HW.o ../Common/9252_HW.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/coeappl.o: ../Common/coeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/coeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/coeappl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/coeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/coeappl.o.d" -o ${OBJECTDIR}/_ext/2108356922/coeappl.o ../Common/coeappl.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecatappl.o: ../Common/ecatappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatappl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecatappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecatappl.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecatappl.o ../Common/ecatappl.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecatcoe.o: ../Common/ecatcoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatcoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatcoe.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecatcoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecatcoe.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecatcoe.o ../Common/ecatcoe.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecateoe.o: ../Common/ecateoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecateoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecateoe.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecateoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecateoe.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecateoe.o ../Common/ecateoe.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecatfoe.o: ../Common/ecatfoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatfoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatfoe.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecatfoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecatfoe.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecatfoe.o ../Common/ecatfoe.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecatslv.o: ../Common/ecatslv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatslv.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatslv.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecatslv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecatslv.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecatslv.o ../Common/ecatslv.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/emcy.o: ../Common/emcy.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/emcy.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/emcy.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/emcy.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/emcy.o.d" -o ${OBJECTDIR}/_ext/2108356922/emcy.o ../Common/emcy.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/eoeappl.o: ../Common/eoeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/eoeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/eoeappl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/eoeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/eoeappl.o.d" -o ${OBJECTDIR}/_ext/2108356922/eoeappl.o ../Common/eoeappl.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/foeappl.o: ../Common/foeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/foeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/foeappl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/foeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/foeappl.o.d" -o ${OBJECTDIR}/_ext/2108356922/foeappl.o ../Common/foeappl.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/mailbox.o: ../Common/mailbox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/mailbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/mailbox.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/mailbox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/mailbox.o.d" -o ${OBJECTDIR}/_ext/2108356922/mailbox.o ../Common/mailbox.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/objdef.o: ../Common/objdef.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/objdef.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/objdef.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/objdef.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/objdef.o.d" -o ${OBJECTDIR}/_ext/2108356922/objdef.o ../Common/objdef.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/sdoserv.o: ../Common/sdoserv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/sdoserv.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/sdoserv.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/sdoserv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/sdoserv.o.d" -o ${OBJECTDIR}/_ext/2108356922/sdoserv.o ../Common/sdoserv.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/MemoryManager/MemoryManager.o: MemoryManager/MemoryManager.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/MemoryManager" 
	@${RM} ${OBJECTDIR}/MemoryManager/MemoryManager.o.d 
	@${RM} ${OBJECTDIR}/MemoryManager/MemoryManager.o 
	@${FIXDEPS} "${OBJECTDIR}/MemoryManager/MemoryManager.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/MemoryManager/MemoryManager.o.d" -o ${OBJECTDIR}/MemoryManager/MemoryManager.o MemoryManager/MemoryManager.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/SPIDriver/SPIDriver.o: SPIDriver/SPIDriver.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/SPIDriver" 
	@${RM} ${OBJECTDIR}/SPIDriver/SPIDriver.o.d 
	@${RM} ${OBJECTDIR}/SPIDriver/SPIDriver.o 
	@${FIXDEPS} "${OBJECTDIR}/SPIDriver/SPIDriver.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/SPIDriver/SPIDriver.o.d" -o ${OBJECTDIR}/SPIDriver/SPIDriver.o SPIDriver/SPIDriver.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/configuration_bits.o: configuration_bits.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/configuration_bits.o.d 
	@${RM} ${OBJECTDIR}/configuration_bits.o 
	@${FIXDEPS} "${OBJECTDIR}/configuration_bits.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/configuration_bits.o.d" -o ${OBJECTDIR}/configuration_bits.o configuration_bits.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/exceptions.o: exceptions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/exceptions.o.d 
	@${RM} ${OBJECTDIR}/exceptions.o 
	@${FIXDEPS} "${OBJECTDIR}/exceptions.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/exceptions.o.d" -o ${OBJECTDIR}/exceptions.o exceptions.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/interrupts.o: interrupts.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/interrupts.o.d 
	@${RM} ${OBJECTDIR}/interrupts.o 
	@${FIXDEPS} "${OBJECTDIR}/interrupts.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/interrupts.o.d" -o ${OBJECTDIR}/interrupts.o interrupts.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/system.o: system.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/system.o.d 
	@${RM} ${OBJECTDIR}/system.o 
	@${FIXDEPS} "${OBJECTDIR}/system.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/system.o.d" -o ${OBJECTDIR}/system.o system.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/user.o: user.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/user.o.d 
	@${RM} ${OBJECTDIR}/user.o 
	@${FIXDEPS} "${OBJECTDIR}/user.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/user.o.d" -o ${OBJECTDIR}/user.o user.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/Scheduler.o: Scheduler.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/Scheduler.o.d 
	@${RM} ${OBJECTDIR}/Scheduler.o 
	@${FIXDEPS} "${OBJECTDIR}/Scheduler.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/Scheduler.o.d" -o ${OBJECTDIR}/Scheduler.o Scheduler.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/Common.o: ../scr/Common.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/Common.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/Common.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/Common.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/Common.o.d" -o ${OBJECTDIR}/_ext/1360936787/Common.o ../scr/Common.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/I2C_Functions.o: ../scr/I2C_Functions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/I2C_Functions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/I2C_Functions.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/I2C_Functions.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/I2C_Functions.o.d" -o ${OBJECTDIR}/_ext/1360936787/I2C_Functions.o ../scr/I2C_Functions.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/ti_wdt.o: ../scr/ti_wdt.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/ti_wdt.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/ti_wdt.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/ti_wdt.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/ti_wdt.o.d" -o ${OBJECTDIR}/_ext/1360936787/ti_wdt.o ../scr/ti_wdt.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/TPS238x.o: ../scr/TPS238x.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/TPS238x.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/TPS238x.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/TPS238x.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/TPS238x.o.d" -o ${OBJECTDIR}/_ext/1360936787/TPS238x.o ../scr/TPS238x.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/i2c.o: ../scr/i2c.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/i2c.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/i2c.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/i2c.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/i2c.o.d" -o ${OBJECTDIR}/_ext/1360936787/i2c.o ../scr/i2c.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/console.o: ../scr/console.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/console.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/console.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/console.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/console.o.d" -o ${OBJECTDIR}/_ext/1360936787/console.o ../scr/console.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/config.o: ../scr/config.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/config.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/config.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/config.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/config.o.d" -o ${OBJECTDIR}/_ext/1360936787/config.o ../scr/config.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/power_manage.o: ../scr/power_manage.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/power_manage.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/power_manage.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/power_manage.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/power_manage.o.d" -o ${OBJECTDIR}/_ext/1360936787/power_manage.o ../scr/power_manage.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/semi_auto.o: ../scr/semi_auto.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/semi_auto.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/semi_auto.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/semi_auto.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/semi_auto.o.d" -o ${OBJECTDIR}/_ext/1360936787/semi_auto.o ../scr/semi_auto.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/m1eph.o: ../Common/m1eph.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/m1eph.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/m1eph.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/m1eph.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/m1eph.o.d" -o ${OBJECTDIR}/_ext/2108356922/m1eph.o ../Common/m1eph.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
else
${OBJECTDIR}/_ext/2108356922/9252_HW.o: ../Common/9252_HW.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/9252_HW.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/9252_HW.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/9252_HW.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/9252_HW.o.d" -o ${OBJECTDIR}/_ext/2108356922/9252_HW.o ../Common/9252_HW.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/coeappl.o: ../Common/coeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/coeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/coeappl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/coeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/coeappl.o.d" -o ${OBJECTDIR}/_ext/2108356922/coeappl.o ../Common/coeappl.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecatappl.o: ../Common/ecatappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatappl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecatappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecatappl.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecatappl.o ../Common/ecatappl.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecatcoe.o: ../Common/ecatcoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatcoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatcoe.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecatcoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecatcoe.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecatcoe.o ../Common/ecatcoe.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecateoe.o: ../Common/ecateoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecateoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecateoe.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecateoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecateoe.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecateoe.o ../Common/ecateoe.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecatfoe.o: ../Common/ecatfoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatfoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatfoe.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecatfoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecatfoe.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecatfoe.o ../Common/ecatfoe.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/ecatslv.o: ../Common/ecatslv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatslv.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/ecatslv.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/ecatslv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/ecatslv.o.d" -o ${OBJECTDIR}/_ext/2108356922/ecatslv.o ../Common/ecatslv.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/emcy.o: ../Common/emcy.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/emcy.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/emcy.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/emcy.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/emcy.o.d" -o ${OBJECTDIR}/_ext/2108356922/emcy.o ../Common/emcy.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/eoeappl.o: ../Common/eoeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/eoeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/eoeappl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/eoeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/eoeappl.o.d" -o ${OBJECTDIR}/_ext/2108356922/eoeappl.o ../Common/eoeappl.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/foeappl.o: ../Common/foeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/foeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/foeappl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/foeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/foeappl.o.d" -o ${OBJECTDIR}/_ext/2108356922/foeappl.o ../Common/foeappl.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/mailbox.o: ../Common/mailbox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/mailbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/mailbox.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/mailbox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/mailbox.o.d" -o ${OBJECTDIR}/_ext/2108356922/mailbox.o ../Common/mailbox.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/objdef.o: ../Common/objdef.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/objdef.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/objdef.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/objdef.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/objdef.o.d" -o ${OBJECTDIR}/_ext/2108356922/objdef.o ../Common/objdef.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/sdoserv.o: ../Common/sdoserv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/sdoserv.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/sdoserv.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/sdoserv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/sdoserv.o.d" -o ${OBJECTDIR}/_ext/2108356922/sdoserv.o ../Common/sdoserv.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/MemoryManager/MemoryManager.o: MemoryManager/MemoryManager.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/MemoryManager" 
	@${RM} ${OBJECTDIR}/MemoryManager/MemoryManager.o.d 
	@${RM} ${OBJECTDIR}/MemoryManager/MemoryManager.o 
	@${FIXDEPS} "${OBJECTDIR}/MemoryManager/MemoryManager.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/MemoryManager/MemoryManager.o.d" -o ${OBJECTDIR}/MemoryManager/MemoryManager.o MemoryManager/MemoryManager.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/SPIDriver/SPIDriver.o: SPIDriver/SPIDriver.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/SPIDriver" 
	@${RM} ${OBJECTDIR}/SPIDriver/SPIDriver.o.d 
	@${RM} ${OBJECTDIR}/SPIDriver/SPIDriver.o 
	@${FIXDEPS} "${OBJECTDIR}/SPIDriver/SPIDriver.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/SPIDriver/SPIDriver.o.d" -o ${OBJECTDIR}/SPIDriver/SPIDriver.o SPIDriver/SPIDriver.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/configuration_bits.o: configuration_bits.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/configuration_bits.o.d 
	@${RM} ${OBJECTDIR}/configuration_bits.o 
	@${FIXDEPS} "${OBJECTDIR}/configuration_bits.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/configuration_bits.o.d" -o ${OBJECTDIR}/configuration_bits.o configuration_bits.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/exceptions.o: exceptions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/exceptions.o.d 
	@${RM} ${OBJECTDIR}/exceptions.o 
	@${FIXDEPS} "${OBJECTDIR}/exceptions.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/exceptions.o.d" -o ${OBJECTDIR}/exceptions.o exceptions.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/interrupts.o: interrupts.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/interrupts.o.d 
	@${RM} ${OBJECTDIR}/interrupts.o 
	@${FIXDEPS} "${OBJECTDIR}/interrupts.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/interrupts.o.d" -o ${OBJECTDIR}/interrupts.o interrupts.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/system.o: system.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/system.o.d 
	@${RM} ${OBJECTDIR}/system.o 
	@${FIXDEPS} "${OBJECTDIR}/system.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/system.o.d" -o ${OBJECTDIR}/system.o system.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/user.o: user.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/user.o.d 
	@${RM} ${OBJECTDIR}/user.o 
	@${FIXDEPS} "${OBJECTDIR}/user.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/user.o.d" -o ${OBJECTDIR}/user.o user.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/Scheduler.o: Scheduler.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/Scheduler.o.d 
	@${RM} ${OBJECTDIR}/Scheduler.o 
	@${FIXDEPS} "${OBJECTDIR}/Scheduler.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/Scheduler.o.d" -o ${OBJECTDIR}/Scheduler.o Scheduler.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/Common.o: ../scr/Common.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/Common.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/Common.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/Common.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/Common.o.d" -o ${OBJECTDIR}/_ext/1360936787/Common.o ../scr/Common.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/I2C_Functions.o: ../scr/I2C_Functions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/I2C_Functions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/I2C_Functions.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/I2C_Functions.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/I2C_Functions.o.d" -o ${OBJECTDIR}/_ext/1360936787/I2C_Functions.o ../scr/I2C_Functions.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/ti_wdt.o: ../scr/ti_wdt.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/ti_wdt.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/ti_wdt.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/ti_wdt.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/ti_wdt.o.d" -o ${OBJECTDIR}/_ext/1360936787/ti_wdt.o ../scr/ti_wdt.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/TPS238x.o: ../scr/TPS238x.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/TPS238x.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/TPS238x.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/TPS238x.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/TPS238x.o.d" -o ${OBJECTDIR}/_ext/1360936787/TPS238x.o ../scr/TPS238x.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/i2c.o: ../scr/i2c.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/i2c.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/i2c.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/i2c.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/i2c.o.d" -o ${OBJECTDIR}/_ext/1360936787/i2c.o ../scr/i2c.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/console.o: ../scr/console.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/console.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/console.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/console.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/console.o.d" -o ${OBJECTDIR}/_ext/1360936787/console.o ../scr/console.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/config.o: ../scr/config.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/config.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/config.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/config.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/config.o.d" -o ${OBJECTDIR}/_ext/1360936787/config.o ../scr/config.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/power_manage.o: ../scr/power_manage.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/power_manage.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/power_manage.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/power_manage.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/power_manage.o.d" -o ${OBJECTDIR}/_ext/1360936787/power_manage.o ../scr/power_manage.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/1360936787/semi_auto.o: ../scr/semi_auto.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360936787" 
	@${RM} ${OBJECTDIR}/_ext/1360936787/semi_auto.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360936787/semi_auto.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360936787/semi_auto.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/1360936787/semi_auto.o.d" -o ${OBJECTDIR}/_ext/1360936787/semi_auto.o ../scr/semi_auto.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
${OBJECTDIR}/_ext/2108356922/m1eph.o: ../Common/m1eph.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2108356922" 
	@${RM} ${OBJECTDIR}/_ext/2108356922/m1eph.o.d 
	@${RM} ${OBJECTDIR}/_ext/2108356922/m1eph.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2108356922/m1eph.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DPIC32_STARTER_KIT -DPIC32_HW -DUSE_SPI -I"../Common" -I"../scr" -MMD -MF "${OBJECTDIR}/_ext/2108356922/m1eph.o.d" -o ${OBJECTDIR}/_ext/2108356922/m1eph.o ../Common/m1eph.c    -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ -mdfp=${DFP_DIR}
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/PIC32-SPI.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk  /Applications/microchip/xc32/v1.40/pic32mx/lib/libmchp_peripheral_32MX795F512L.a  
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g -mdebugger -D__MPLAB_DEBUGGER_PK3=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/PIC32-SPI.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}    /Applications/microchip/xc32/v1.40/pic32mx/lib/libmchp_peripheral_32MX795F512L.a      -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ $(COMPARISON_BUILD)   -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC02000:0x1FC02FEF -mreserve=boot@0x1FC02000:0x1FC024FF  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=__MPLAB_DEBUGGER_PK3=1,--defsym=_min_heap_size=4096,--no-code-in-dinit,--no-dinit-in-serial-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp=${DFP_DIR}
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/PIC32-SPI.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk  /Applications/microchip/xc32/v1.40/pic32mx/lib/libmchp_peripheral_32MX795F512L.a 
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/PIC32-SPI.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}    /Applications/microchip/xc32/v1.40/pic32mx/lib/libmchp_peripheral_32MX795F512L.a      -DXPRJ_SPI_XC32_PIC32MX795F512L=$(CND_CONF)  -no-legacy-libc  -I /Applications/microchip/xc32/v1.40/pic32mx/include/ $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=4096,--no-code-in-dinit,--no-dinit-in-serial-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp=${DFP_DIR}
	${MP_CC_DIR}/xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/PIC32-SPI.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/SPI_XC32_PIC32MX795F512L
	${RM} -r dist/SPI_XC32_PIC32MX795F512L

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell "${PATH_TO_IDE_BIN}"mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
