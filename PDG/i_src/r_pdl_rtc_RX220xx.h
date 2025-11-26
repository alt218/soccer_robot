/*""FILE COMMENT""*************************************************************
* System Name	: Real-time clock API for RX220xx
* File Name		: r_pdl_rtc_RX220xx.h
* Version		: 1.11
* Contents		: RTC header
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

#ifndef R_PDL_RTC_RX220xx_H
#define R_PDL_RTC_RX220xx_H

extern VoidCallBackFunc rpdl_RTC_Periodic_callback_func;
extern VoidCallBackFunc rpdl_RTC_Alarm_callback_func;

/* Library prototypes */
/* function is called at cold startup */
bool R_RTC_CreateAll(
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint16_t,
	const uint32_t,
	const uint32_t,
	VoidCallBackFunc const,
	const uint8_t,
	VoidCallBackFunc const,
	const uint8_t
);
bool R_RTC_ControlAll(
	const uint32_t,
	const uint16_t,
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint16_t,
	const uint16_t
);
bool R_RTC_ReadAll(
	const uint8_t,
	volatile uint8_t * const,
	volatile uint32_t * const,
	volatile uint32_t * const
);
bool R_RTC_DestroyAll(void);

bool ReturnFalse(void);

bool R_RTC_CreateBinaryAll(
	const uint32_t,
	const uint32_t,
	const uint16_t,
	const uint32_t,
	const uint32_t,
	VoidCallBackFunc const,
	const uint8_t,
	VoidCallBackFunc const,
	const uint8_t
);

bool R_RTC_ControlBinaryAll(
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint16_t,
	const uint16_t
);

bool R_RTC_ReadBinaryAll(
	volatile uint8_t * const,
	volatile uint32_t * const,
	volatile uint32_t * const,
	volatile uint32_t * const
);

/* function is called at warm startup */
bool R_RTC_CreateWarmAll(
	VoidCallBackFunc const,
	const uint8_t,
	VoidCallBackFunc const,
	const uint8_t
);

/* Macro definitions */

#define R_RTC_Create(a, b, c, d, e, f, g, h, i, j) \
( \
( ((h) <= IPL_MAX) && ((j) <= IPL_MAX) ) ? \
R_RTC_CreateAll( (a), (b), (c), (d), (e), (f), (g), (h), (i), (j)): \
ReturnFalse() \
)

#define R_RTC_Control(a, b, c, d, e, f, g, h) \
( \
R_RTC_ControlAll( (a), (b), (c), (d), (e), (f), (g), (h)) \
)

#define R_RTC_Read(a, b, c, d) \
( \
R_RTC_ReadAll( (a), (b), (c), (d) ) \
)

#define R_RTC_Destroy() \
( \
R_RTC_DestroyAll() \
)

#define R_RTC_CreateBinary(a, b, c, d, e, f, g, h, i) \
( \
( ((g) <= IPL_MAX) && ((i) <= IPL_MAX) ) ? \
R_RTC_CreateBinaryAll( (a), (b), (c), (d), (e), (f), (g), (h), (i)): \
ReturnFalse() \
)

#define R_RTC_ControlBinary(a, b, c, d, e, f) \
( \
R_RTC_ControlBinaryAll( (a), (b), (c), (d), (e), (f)) \
)

#define R_RTC_ReadBinary(a, b, c, d) \
( \
R_RTC_ReadBinaryAll( (a), (b), (c), (d) ) \
)

#define R_RTC_CreateWarm(a, b, c , d) \
( \
( ((b) <= IPL_MAX) && ((d) <= IPL_MAX) ) ? \
R_RTC_CreateWarmAll( (a), (b), (c), (d) ): \
ReturnFalse() \
)

#endif

/* End of file */
