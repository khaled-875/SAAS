/*
 * DHT11_int.h
 
 */

#ifndef HAL_DHT11_DHT11_INT_H_
#define HAL_DHT11_DHT11_INT_H_

void DHT11_Init(void);
ES_t DHT_GetReadings(u8*Temp,u8*Humidity);

#endif /* HAL_DHT11_DHT11_INT_H_ */
