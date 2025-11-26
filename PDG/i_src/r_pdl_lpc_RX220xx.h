/*""FILE COMMENT""*************************************************************
* System Name	: LPC API for RX220xx
* File Name		: r_pdl_lpc_RX220xx.h
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

#ifndef R_PDL_LPC_RX220xx_H
#define R_PDL_LPC_RX220xx_H

/* Library prototypes */
bool R_LPC_CreateAll(
	const uint32_t,
	const uint16_t,
	const uint16_t,
	const uint32_t
);
bool R_LPC_ControlAll(
	const uint16_t
);
bool R_LPC_GetStatusAll(
	volatile uint16_t * const
);
bool ReturnFalse(void);

/* Macro definitions */

#define R_LPC_Create(a, b, c, d) \
( \
R_LPC_CreateAll( (a), (b), (c), (d) ) \
)

#define R_LPC_Control(a) \
( \
R_LPC_ControlAll( (a) ) \
)

#define R_LPC_GetStatus(a) \
( \
R_LPC_GetStatusAll( (a) ) \
)

#endif
/* End of file */
