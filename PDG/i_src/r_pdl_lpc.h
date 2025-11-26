/*""FILE COMMENT""*************************************************************
* System Name	: LPC API for RX220xx
* File Name		: r_pdl_lpc.h
* Version		: 1.11
* Contents		: LPC API header
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

#ifndef R_PDL_LPC_H
#define R_PDL_LPC_H

#include "r_pdl_common_defs_RX220xx.h"

/* Function prototypes */
bool R_LPC_Create(
	uint32_t,
	uint16_t,
	uint16_t,
	uint32_t
);
bool R_LPC_Control(
	uint16_t
);
bool R_LPC_GetStatus(
	uint16_t *
);

/* Normal operating power consumption control */
#define PDL_LPC_MIDDLE_SPEED_MODE_A			0x00000001ul
#define PDL_LPC_MIDDLE_SPEED_MODE_B			0x00000002ul
#define PDL_LPC_LOW_SPEED_MODE_1			0x00000004ul
#define PDL_LPC_LOW_SPEED_MODE_2			0x00000008ul

/* Sleep mode return clock source switching */
#define PDL_LPC_SLEEP_RETURN_SWITCH_DISABLE	0x00000010ul
#define PDL_LPC_SLEEP_RETURN_SWITCH_HOCO	0x00000020ul
#define PDL_LPC_SLEEP_RETURN_SWITCH_MAIN	0x00000040ul

/*Flash HOCO software standby control */
#define PDL_LPC_SOFTCUT_POR					0x00000080ul
#define PDL_LPC_SOFTCUT_HOCO_POR			0x00000100ul
#define PDL_LPC_SOFTCUT_LVD					0x00000200ul
#define PDL_LPC_SOFTCUT_HOCO_LVD			0x00000400ul

/* Main clock oscillator waiting time */
#define PDL_LPC_MAIN_2					0x0001ul
#define PDL_LPC_MAIN_4					0x0002ul
#define PDL_LPC_MAIN_8					0x0004ul
#define PDL_LPC_MAIN_16					0x0008ul
#define PDL_LPC_MAIN_32					0x0010ul
#define PDL_LPC_MAIN_256				0x0020ul
#define PDL_LPC_MAIN_512				0x0040ul
#define PDL_LPC_MAIN_1024				0x0080ul
#define PDL_LPC_MAIN_2048				0x0100ul
#define PDL_LPC_MAIN_4096				0x0200ul
#define PDL_LPC_MAIN_16384				0x0400ul
#define PDL_LPC_MAIN_32768				0x0800ul
#define PDL_LPC_MAIN_65536				0x1000ul
#define PDL_LPC_MAIN_131072				0x2000ul
#define PDL_LPC_MAIN_262144				0x4000ul
#define PDL_LPC_MAIN_524288				0x8000ul

/* Sub-clock oscillator waiting time */
#define PDL_LPC_SUB_2					0x0001ul
#define PDL_LPC_SUB_4					0x0002ul
#define PDL_LPC_SUB_8					0x0004ul
#define PDL_LPC_SUB_16					0x0008ul
#define PDL_LPC_SUB_32					0x0010ul
#define PDL_LPC_SUB_64					0x0020ul
#define PDL_LPC_SUB_512					0x0040ul
#define PDL_LPC_SUB_1024				0x0080ul
#define PDL_LPC_SUB_2048				0x0100ul
#define PDL_LPC_SUB_4096				0x0200ul
#define PDL_LPC_SUB_16384				0x0400ul
#define PDL_LPC_SUB_32768				0x0800ul
#define PDL_LPC_SUB_65536				0x1000ul
#define PDL_LPC_SUB_131072				0x2000ul
#define PDL_LPC_SUB_262144				0x4000ul
#define PDL_LPC_SUB_524288				0x8000ul

/* HOCO clock waiting time */
#define PDL_LPC_HOCO_40					0x00000001ul
#define PDL_LPC_HOCO_72					0x00000002ul
#define PDL_LPC_HOCO_104				0x00000004ul
#define PDL_LPC_HOCO_136				0x00000008ul
#define PDL_LPC_HOCO_180				0x00000010ul
#define PDL_LPC_HOCO_200				0x00000020ul
#define PDL_LPC_HOCO_232				0x00000040ul
#define PDL_LPC_HOCO_264				0x00000080ul
#define PDL_LPC_HOCO_296				0x00000100ul
#define PDL_LPC_HOCO_328				0x00000200ul
#define PDL_LPC_HOCO_360				0x00000400ul
#define PDL_LPC_HOCO_392				0x00000800ul
#define PDL_LPC_HOCO_424				0x00001000ul
#define PDL_LPC_HOCO_456				0x00002000ul
#define PDL_LPC_HOCO_488				0x00004000ul
#define PDL_LPC_HOCO_520				0x00008000ul
#define PDL_LPC_HOCO_3072				0x00010000ul
#define PDL_LPC_HOCO_5120				0x00020000ul
#define PDL_LPC_HOCO_7168				0x00040000ul
#define PDL_LPC_HOCO_9216				0x00080000ul
#define PDL_LPC_HOCO_11264				0x00100000ul
#define PDL_LPC_HOCO_13312				0x00200000ul
#define PDL_LPC_HOCO_15360				0x00400000ul
#define PDL_LPC_HOCO_17408				0x00800000ul
#define PDL_LPC_HOCO_19456				0x01000000ul
#define PDL_LPC_HOCO_21504				0x02000000ul
#define PDL_LPC_HOCO_23552				0x04000000ul
#define PDL_LPC_HOCO_25600				0x08000000ul
#define PDL_LPC_HOCO_27648				0x10000000ul
#define PDL_LPC_HOCO_29696				0x20000000ul
#define PDL_LPC_HOCO_31744				0x40000000ul
#define PDL_LPC_HOCO_33792				0x80000000ul

/* Error monitoring */
#define PDL_LPC_MODE_SLEEP					0x0001u
#define PDL_LPC_MODE_ALL_MODULE_CLOCK_STOP	0x0002u
#define PDL_LPC_MODE_SOFTWARE_STANDBY		0x0004u

/* All-module clock stop cancellation modification */
#define PDL_LPC_TMR_OFF						0x0008u
#define PDL_LPC_TMR_UNIT_0					0x0010u
#define PDL_LPC_TMR_UNIT_1					0x0020u
#define PDL_LPC_TMR_BOTH					0x0040u

/* Normal operating power consumption control */
#define PDL_LPC_CHANGE_MIDDLE_SPEED_A		0x0080ul
#define PDL_LPC_CHANGE_MIDDLE_SPEED_B		0x0100ul
#define PDL_LPC_CHANGE_LOW_SPEED_1			0x0200ul
#define PDL_LPC_CHANGE_LOW_SPEED_2			0x0400ul

/* Sleep mode return clock source switching */
#define PDL_LPC_SLEEP_RETURN_CHANGE_DISABLE	0x0800ul
#define PDL_LPC_SLEEP_RETURN_CHANGE_HOCO	0x1000ul
#define PDL_LPC_SLEEP_RETURN_CHANGE_MAIN	0x2000ul

#endif
/* End of file */
