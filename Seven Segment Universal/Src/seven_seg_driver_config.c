/****************************************************/
/*  seven_seg_config.c                              */
/*                                                  */
/*  Created on: Apr 15, 2023                        */
/*  Author: Soumyakanta Behera						*/
/****************************************************/


#include "stm32f4xx_hal.h"
#include "seven_segment_driver.h"

const SEVEN_SEGMENT_Config SEVEN_SEG_Parameters =
{
		GPIOC,
		GPIOC,
		GPIOB,
		GPIOC,
		GPIOA,
		GPIOA,
		GPIOA,
		GPIOB,
		GPIOC,
		GPIO_PIN_1,
		GPIO_PIN_0,
		GPIO_PIN_6,
		GPIO_PIN_7,
		GPIO_PIN_0,
		GPIO_PIN_1,
		GPIO_PIN_4,
		GPIO_PIN_0,
		GPIO_PIN_13
};
