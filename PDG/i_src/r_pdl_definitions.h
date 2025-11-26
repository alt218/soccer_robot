/*""FILE COMMENT""*************************************************************
* System Name	: PDL driver API
* File Name		: r_pdl_definitions.h
* Version		: 1.11
* Contents		: API headers for RX220 (64-pin package)
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			:
* Programmer	: 
* Note			: 
*******************************************************************************
* Copyright, 2014. Renesas Electronics Corporation and Renesas Solutions Corp.
*******************************************************************************
* History		: 2014.04.09
*				: Ver 1.11
*				: CS release
*""FILE COMMENT END""*********************************************************/

#ifndef R_PDL_DEFS_H
#define R_PDL_DEFS_H

#define PDL_VERSION	0x0111u	/* v01.11 in BCD format */

#define DEVICE_PACKAGE_64_PIN

/* Check the FPU setting */
#ifdef __FPU
 #error "FPU instructions are enabled.  The RX220 CPU does not have a floating point unit."
#endif

/* Check the precision setting */
#ifndef __DBL8
 #error "Double precision is not selected.  Please change from single to double precision."
#endif

/* Peripherals that are common to all device packages */
#include "r_pdl_adc_12_RX220xx.h"
#include "r_pdl_bsc_RX220xx.h"
#include "r_pdl_cac_RX220xx.h"
#include "r_pdl_cgc_RX220xx.h"
#include "r_pdl_cmt_RX220xx.h"
#include "r_pdl_cpa_RX220xx.h"
#include "r_pdl_crc_RX220xx.h"
#include "r_pdl_dmac_RX220xx.h"
#include "r_pdl_doc_RX220xx.h"
#include "r_pdl_dtc_RX220xx.h"
#include "r_pdl_elc_RX220xx.h"
#include "r_pdl_iic_RX220xx.h"
#include "r_pdl_intc_RX220xx.h"
#include "r_pdl_io_port_RX220xx.h"
#include "r_pdl_iwdt_RX220xx.h"
#include "r_pdl_lpc_RX220xx.h"
#include "r_pdl_lvd_RX220xx.h"
#include "r_pdl_mcu_RX220xx.h"
#include "r_pdl_mpc_RX220xx.h"
#include "r_pdl_mtu2_RX220xx.h"
#include "r_pdl_poe_RX220xx.h"
#include "r_pdl_rtc_RX220xx.h"
#include "r_pdl_rwp_RX220xx.h"
#include "r_pdl_sci_RX220xx.h"
#include "r_pdl_spi_RX220xx.h"
#include "r_pdl_tmr_RX220xx.h"

/* Peripherals that are device package-dependent */

#endif
/* End of file */
