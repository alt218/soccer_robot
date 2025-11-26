/*""FILE COMMENT""*************************************************************
* System Name	: OFS API for RX220
* File Name		: r_pdl_mcu_ofs.h
* Version		: 1.11
* Contents		: OFS API header
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			: Nothing
* Programmer	: 
* Note			: 
*******************************************************************************
* Copyright, 2014. Renesas Electronics Corporation and Renesas Solutions Corp.
*******************************************************************************
* History		: 2014.04.09
*				: Ver 1.11
*				: CS release
*""FILE COMMENT END""*********************************************************/

#ifndef R_PDL_MCU_OFS_H
#define R_PDL_MCU_OFS_H

#include "r_pdl_common_defs_RX220xx.h"

/* Set the register locations */
#pragma address OFS0_location = 0xFFFFFF8Cul
#pragma address OFS1_location = 0xFFFFFF88ul

/* Store the OFS values */
#define R_MCU_OFS(iwdt, lvd, cgc) \
 volatile const uint32_t OFS0_location = 0xFFFFA001ul | iwdt; \
 volatile const uint32_t OFS1_location = 0xFFFFFEF8ul | lvd | cgc

/* IWDT auto-start control */
#define PDL_MCU_OFS_IWDT_HALTED 		BIT_1
#define PDL_MCU_OFS_IWDT_AUTOSTART		0

/* IWDT timeout */
#define PDL_MCU_OFS_IWDT_TIMEOUT_1024	0
#define PDL_MCU_OFS_IWDT_TIMEOUT_4096	BIT_2
#define PDL_MCU_OFS_IWDT_TIMEOUT_8192	BIT_3
#define PDL_MCU_OFS_IWDT_TIMEOUT_16384	(BIT_3 | BIT_2)

/* IWDT clock division */
#define PDL_MCU_OFS_IWDT_CLOCK_LOCO_1	0
#define PDL_MCU_OFS_IWDT_CLOCK_LOCO_16	BIT_5
#define PDL_MCU_OFS_IWDT_CLOCK_LOCO_32	(BIT_5 | BIT_4)
#define PDL_MCU_OFS_IWDT_CLOCK_LOCO_64	BIT_6
#define PDL_MCU_OFS_IWDT_CLOCK_LOCO_128	(BIT_7 | BIT_6 | BIT_5 | BIT_4)
#define PDL_MCU_OFS_IWDT_CLOCK_LOCO_256	(BIT_6 | BIT_4)

/* IWDT window end position */
#define PDL_MCU_OFS_IWDT_WIN_END_75		0
#define PDL_MCU_OFS_IWDT_WIN_END_50		BIT_8
#define PDL_MCU_OFS_IWDT_WIN_END_25		BIT_9
#define PDL_MCU_OFS_IWDT_WIN_END_0		(BIT_9 | BIT_8)

/* IWDT window start position */
#define PDL_MCU_OFS_IWDT_WIN_START_25	0
#define PDL_MCU_OFS_IWDT_WIN_START_50	BIT_10
#define PDL_MCU_OFS_IWDT_WIN_START_75	BIT_11
#define PDL_MCU_OFS_IWDT_WIN_START_100	(BIT_11 | BIT_10)

/* IWDT reset type */
#define PDL_MCU_OFS_IWDT_NMI			0
#define PDL_MCU_OFS_IWDT_RESET			BIT_12

/* IWDT count control */
#define PDL_MCU_OFS_IWDT_STOP_DISABLE	0
#define PDL_MCU_OFS_IWDT_STOP_ENABLE	BIT_14

/* LVD monitor 0 control */
#define PDL_MCU_OFS_LVD_0_DISABLE	BIT_2
#define PDL_MCU_OFS_LVD_0_ENABLE	0

/* LVD monitor 0 voltage levels */
#define PDL_MCU_OFS_LVD_0_380		0
#define PDL_MCU_OFS_LVD_0_280		BIT_0
#define PDL_MCU_OFS_LVD_0_190		BIT_1
#define PDL_MCU_OFS_LVD_0_172		(BIT_1 | BIT_0)

/* CGC HOCO control */
#define PDL_MCU_OFS_CGC_HOCO_DISABLE	BIT_8
#define PDL_MCU_OFS_CGC_HOCO_ENABLE		0

#endif
/* End of file */
