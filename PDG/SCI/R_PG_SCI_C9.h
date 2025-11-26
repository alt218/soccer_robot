/******************************************************************************
* DISCLAIMER
* Please refer to http://www.renesas.com/disclaimer
******************************************************************************
* Copyright (C) 2010-2013 Renesas Electronics Corporation.
* and Renesas Solutions Corporation. All rights reserved.
******************************************************************************
* File Name    : R_PG_SCI_C9.h
* Version      : 1.00
* Description  : 
******************************************************************************
* History : 19.11.2025 Version Description
*         :   
******************************************************************************/


/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/
#include <stdint.h>
#include <stdbool.h>

bool R_PG_SCI_Set_C9(void);
bool R_PG_SCI_SendAllData_C9(uint8_t * data, uint16_t count);
bool R_PG_SCI_GetSentDataCount_C9(uint16_t * count);
bool R_PG_SCI_ReceiveAllData_C9(uint8_t * data, uint16_t count);
bool R_PG_SCI_StopCommunication_C9(void);
bool R_PG_SCI_GetReceivedDataCount_C9(uint16_t * count);
bool R_PG_SCI_GetReceptionErrorFlag_C9(bool * parity, bool * framing, bool * overrun);
bool R_PG_SCI_ClearReceptionErrorFlag_C9(void);
bool R_PG_SCI_GetTransmitStatus_C9(bool * complete);
bool R_PG_SCI_StopModule_C9(void);



