#ifndef DHT_H_
#define DHT_H_
#include "stm32f1xx_hal.h"
typedef struct
{
	uint8_t Temperature;
	uint8_t Humidity;
}DHT_DataTypedef;
void DHT_GetData (DHT_DataTypedef *DHT_Data);

#endif 
