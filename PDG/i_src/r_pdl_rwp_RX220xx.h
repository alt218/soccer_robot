/*""FILE COMMENT""*************************************************************
* System Name	: Register Write Protection (RWP) API for RX220xx
* File Name		: r_pdl_rwp_RX220xx.h
* Version		: 1.11
* Contents		: RWP header
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

#ifndef R_PDL_RWP_RX200xx_H
#define R_PDL_RWP_RX200xx_H

/* Library prototypes */

bool R_RWP_ControlAll(
	const uint8_t
);
bool R_RWP_GetStatusAll(
	volatile uint8_t * const,
	volatile uint8_t * const
);

/* Macro definitions */

#define R_RWP_Control(a) \
( \
R_RWP_ControlAll( (a) ) \
)

#define R_RWP_GetStatus(a, b) \
( \
R_RWP_GetStatusAll( (a), (b) ) \
)

#endif
/* End of file */
