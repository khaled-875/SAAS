/*
 * LDR_Config.c

 */

#include "../../MCAL/ADC/ADC_int.h"
#include "LDR_Config.h"

#include "LDR_config.h"

// Initialize the LDR_Config array with the correct structure
LDR_t LDR_Config[LDRNUM] = {
    { ADC_CHANNEL_0 } , // Assuming the LDR is connected to ADC channel 0
};