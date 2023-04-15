/****************************************************/
/*  seven_segment_driver.c                          */
/*                                                  */
/*  Created on: Apr 15, 2023                        */
/*  Author: Soumyakanta Behera						*/
/****************************************************/


#include "seven_segment_driver.h"
#include "seven_seg_driver_config.h"


/* Function to display digit 0 */
void Digit_0(void)
{
	/* To display 0 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_E_GPIO, SEVEN_SEG_Parameters.LED_E_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)(GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)(GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)(GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)(GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)(GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_E_GPIO, SEVEN_SEG_Parameters.LED_E_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)(GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}


/* Function to display digit 1 */
void Digit_1(void)
{
	/* To display 1 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)(GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)(GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}


/* Function to display digit 2 */
void Digit_2(void)
{
	/* To display 2 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_E_GPIO, SEVEN_SEG_Parameters.LED_E_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_E_GPIO, SEVEN_SEG_Parameters.LED_E_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}


/* Function to display digit 3 */
void Digit_3(void)
{
	/* To display 3 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}


/* Function to display digit 4 */
void Digit_4(void)
{
	/* To display 4 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}


/* Function to display digit 5 */
void Digit_5(void)
{
	/* To display 5 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}


/* Function to display digit 6 */
void Digit_6(void)
{
	/* To display 6 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_E_GPIO, SEVEN_SEG_Parameters.LED_E_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_E_GPIO, SEVEN_SEG_Parameters.LED_E_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}


/* Function to display digit 7 */
void Digit_7(void)
{
	/* To display 7 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}


/* Function to display digit 8 */
void Digit_8(void)
{
	/* To display 8 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_E_GPIO, SEVEN_SEG_Parameters.LED_E_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_E_GPIO, SEVEN_SEG_Parameters.LED_E_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}


/* Function to display digit 9 */
void Digit_9(void)
{
	/* To display 9 */
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_SET);
	HAL_Delay(500);

	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_A_GPIO, SEVEN_SEG_Parameters.LED_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_B_GPIO, SEVEN_SEG_Parameters.LED_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_C_GPIO, SEVEN_SEG_Parameters.LED_C_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_D_GPIO, SEVEN_SEG_Parameters.LED_D_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_F_GPIO, SEVEN_SEG_Parameters.LED_F_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin((GPIO_TypeDef*)SEVEN_SEG_Parameters.LED_G_GPIO, SEVEN_SEG_Parameters.LED_G_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
}
