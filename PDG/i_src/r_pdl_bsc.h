/*""FILE COMMENT""*************************************************************
* System Name	: BSC API for RX220xx
* File Name		: r_pdl_bsc.h
* Version		: 1.11
* Contents		: BSC API header
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

#ifndef R_PDL_BSC_H
#define R_PDL_BSC_H

#include "r_pdl_common_defs_RX220xx.h"

/* Function prototypes */
bool R_BSC_Set(
	uint16_t
);
bool R_BSC_Create(
	uint8_t,
	void *,
	uint8_t
);
bool R_BSC_Control(
	uint8_t
);
bool R_BSC_GetStatus(
	uint8_t *,
	uint16_t *
);

/* R_BSC_Set parameter options*/
/* Bus priority selection */
#define PDL_BSC_PRIORITY_RAM_MB2	0x0001u
#define PDL_BSC_PRIORITY_RAM_CPU	0x0002u
#define PDL_BSC_PRIORITY_ROM_MB2	0x0004u
#define PDL_BSC_PRIORITY_ROM_CPU	0x0008u
#define PDL_BSC_PRIORITY_PB1_MB2	0x0010u
#define PDL_BSC_PRIORITY_PB1_MB1	0x0020u
#define PDL_BSC_PRIORITY_PB2_MB2	0x0040u
#define PDL_BSC_PRIORITY_PB2_MB1	0x0080u
#define PDL_BSC_PRIORITY_PB6_MB2	0x0100u
#define PDL_BSC_PRIORITY_PB6_MB1	0x0200u

/* R_BSC_Create parameter options*/
/* Error monitoring */
#define PDL_BSC_ERROR_ILLEGAL_ADDRESS_ENABLE	0x01u
#define PDL_BSC_ERROR_ILLEGAL_ADDRESS_DISABLE	0x02u

/* R_BSC_Control parameter options */
#define PDL_BSC_ERROR_CLEAR	 		0x01u
#define PDL_BSC_DISABLE_BUSERR_IRQ	0x02u

#endif
/* End of file */
