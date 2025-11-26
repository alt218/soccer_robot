/*""FILE COMMENT""*************************************************************
* System Name	: MPC API for RX220xx
* File Name		: r_pdl_mpc_RX220xx.h
* Version		: 1.11
* Contents		: MPC API header
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

#ifndef R_PDL_MPC_RX220xx_H
#define R_PDL_MPC_RX220xx_H

/* Library prototypes */
bool R_MPC_ReadRegisterAll(
	volatile const uint8_t __evenaccess * const,
	volatile uint8_t * const
);
bool R_MPC_WriteRegisterAll(
	volatile uint8_t __evenaccess * const,
	const uint8_t
);
bool R_MPC_ModifyRegisterAll(
	volatile uint8_t __evenaccess * const,
	const uint8_t,
	const uint8_t
);
bool ReturnFalse(void);

/* Macro definitions */

/* R_MPC_Read */
#define R_MPC_Read(a, b) \
( \
( ( ((a) >= (volatile uint8_t *)&MPC.P07PFS) && ((a) <= (volatile uint8_t *)&MPC.PJ3PFS) ) ) ? \
R_MPC_ReadRegisterAll( (a), (b) ) : \
ReturnFalse() \
)

/* R_MPC_Write */
#define R_MPC_Write(a, b) \
( \
( ( ((a) >= (volatile uint8_t *)&MPC.P07PFS) && ((a) <= (volatile uint8_t *)&MPC.PJ3PFS) ) ) ? \
R_MPC_WriteRegisterAll( (a), (b) ) : \
ReturnFalse() \
)

/* R_MPC_Modify */
#define R_MPC_Modify(a, b, c) \
( \
( ( ((a) >= (volatile uint8_t *)&MPC.P07PFS) && ((a) <= (volatile uint8_t *)&MPC.PJ3PFS) ) ) ? \
R_MPC_ModifyRegisterAll( (a), (b), (c) ) : \
ReturnFalse() \
)

#endif
/* End of file */
