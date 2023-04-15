/****************************************************/
/*  seven_seg_button.h                              */
/*                                                  */
/*  Created on: Apr 15, 2023                        */
/*  Author: Soumyakanta Behera						*/
/****************************************************/

#ifndef INC_SEVEN_SEGMENT_DRIVER_H_
#define INC_SEVEN_SEGMENT_DRIVER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"

typedef struct
{
	uint32_t LED_A_GPIO;
	uint32_t LED_B_GPIO;
	uint32_t LED_F_GPIO;
	uint32_t LED_G_GPIO;
	uint32_t LED_C_GPIO;
	uint32_t LED_D_GPIO;
	uint32_t LED_E_GPIO;
	uint32_t LED_DOT_GPIO;
	uint32_t SWITCH_GPIO;
	uint32_t LED_A_PIN;
	uint32_t LED_B_PIN;
	uint32_t LED_F_PIN;
	uint32_t LED_G_PIN;
	uint32_t LED_C_PIN;
	uint32_t LED_D_PIN;
	uint32_t LED_E_PIN;
	uint32_t LED_DOT_PIN;
	uint32_t SWITCH_PIN;
}SEVEN_SEGMENT_Config;


/* Function to display digit 0 */
void Digit_0(void);

/* Function to display digit 1 */
void Digit_1(void);

/* Function to display digit 2 */
void Digit_2(void);

/* Function to display digit 3 */
void Digit_3(void);

/* Function to display digit 4 */
void Digit_4(void);

/* Function to display digit 5 */
void Digit_5(void);

/* Function to display digit 6 */
void Digit_6(void);

/* Function to display digit 7 */
void Digit_7(void);

/* Function to display digit 8 */
void Digit_8(void);

/* Function to display digit 9 */
void Digit_9(void);


#ifdef __cplusplus
}
#endif

#endif /* INC_SEVEN_SEGMENT_DRIVER_H_ */
