/*
 * LDR_int.h
 
 */

#ifndef HAL_LDR_LDR_INT_H_
#define HAL_LDR_LDR_INT_H_

#include"../../LIB/Error_States.h"
#include "../../LIB/stdTypes.h"
#include "LDR_Config.h"

#define LDR_1		0
#define LDR_2		1
#define LDR_3		2
#define LDR_4		3
#define LDR_5		4
#define LDR_6		5
#define LDR_7		6
#define LDR_8		7

// Function prototypes
ES_t LDR_enuInit(LDR_t* Copy_PstrLDRconfig);
ES_t LDR_enuGetValue(u16 *Copy_pu16ReadValue, u8 Copy_u8ChannelID);
#endif /* HAL_LDR_LDR_INT_H_ */
