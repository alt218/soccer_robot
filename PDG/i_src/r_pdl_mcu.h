/*""FILE COMMENT""*************************************************************
* System Name	: MCU API for RX220
* File Name		: r_pdl_mcu.h
* Version		: 1.11
* Contents		: MCU API header
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

#ifndef R_PDL_MCU_H
#define R_PDL_MCU_H

#include "r_pdl_common_defs_RX220xx.h"

/* Function prototypes */
bool R_MCU_Control(
	uint8_t
);
bool R_MCU_GetStatus(
	uint16_t *,
	uint16_t *,
	uint32_t *,
	uint32_t *
);


/* Software reset control */
#define PDL_MCU_RESET_START	0x01u

/* Start type flag control */
#define PDL_MCU_WARM_START	0x02u

#endif
/* End of file */
