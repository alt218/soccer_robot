/*""FILE COMMENT""*************************************************************
* System Name	: 12-bit ADC API for RX220xx
* File Name		: r_pdl_adc_12_RX220xx.h
* Version		: 1.11
* Contents		: ADC_12 header
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

#ifndef R_PDL_ADC_12_RX220xx_H
#define R_PDL_ADC_12_RX220xx_H

extern VoidCallBackFunc rpdl_ADC_12_callback_func[];
extern VoidCallBackFunc rpdl_ADC_12_gb_callback_func[];

#define ADC_12_UNITS 1
#define ADC_12_GROUPS_PER_UNIT 2
#define ADC_12_CHANNELS_PER_UNIT 16

/* Library prototypes */
bool R_ADC_12_SetAll(
	const uint32_t
);
bool R_ADC_12_CreateChannelAll(
	const uint8_t,
	const uint8_t,
	const uint16_t,
	const double
);
bool R_ADC_12_CreateUnitAll(
	const uint8_t,
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const double,
	const double,
	VoidCallBackFunc const,
	const uint8_t,
	VoidCallBackFunc const,
	const uint8_t
);
bool R_ADC_12_CreateGroupAll(
	const uint8_t,
	const uint8_t,
	const uint32_t,
	const bool,
	VoidCallBackFunc const,
	const uint8_t
);
bool R_ADC_12_ControlAll(
	const uint8_t
);
bool R_ADC_12_ReadAll(
	const uint8_t,
	volatile uint16_t * const,
	volatile uint16_t * const
);
bool R_ADC_12_DestroyAll(
	const uint8_t
);
bool ReturnFalse(void);

/* Macro definitions */

#define R_ADC_12_Set(a) \
( \
	R_ADC_12_SetAll((a)) \
)

#define R_ADC_12_CreateChannel(a, b, c, d) \
( \
( ((a) < ADC_12_UNITS) && ((b) < ADC_12_CHANNELS_PER_UNIT) ) ? \
R_ADC_12_CreateChannelAll( (a), (b), (c), (d) ): \
ReturnFalse() \
)

#define R_ADC_12_CreateUnit(a, b, c, d, e, f, g, h, i, j) \
( \
( ((a) < ADC_12_UNITS) && ((h) <= IPL_MAX) && ((j) <= IPL_MAX) ) ? \
R_ADC_12_CreateUnitAll( (a), (b), (c), (d), (e), (f), (g), (h), (i), (j) ): \
ReturnFalse() \
)

#define R_ADC_12_Control(a) \
( \
R_ADC_12_ControlAll( (a) ) \
)

#define R_ADC_12_Read(a, b, c) \
( \
( (a) < ADC_12_UNITS ) ? \
R_ADC_12_ReadAll( (a), (b), (c) ): \
ReturnFalse() \
)

#define R_ADC_12_Destroy(a) \
( \
( (a) < ADC_12_UNITS ) ? \
R_ADC_12_DestroyAll((a)): \
ReturnFalse() \
)

#endif
/* End of file */
