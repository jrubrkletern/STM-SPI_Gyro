#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

	
#include "stm32f4xx_hal.h"

	SPI_HandleTypeDef hspi5;
	void Error_Handler(void);
	void SystemClock_Config(void);
	static void MX_GPIO_Init(void);
	static void MX_SPI5_Init(void);

#define SPI5_GYRO_CE_Pin GPIO_PIN_1
#define SPI5_GYRO_CE_GPIO_Port GPIOC


#ifdef __cplusplus
}
#endif

#endif 
