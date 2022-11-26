/*
 * ArduinoDPins.c
 *
 *  Created on: Nov 26, 2022
 *      Author: joconnor
 */

#include <stm32f767xx.h>
#include <stm32yyxx_hal_gpio.h>
#include <stm32_def.h>
#include "ArduinoDPins.h"


const DataPin DPin_Map[] = {
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_9},
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_14},
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_15},
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_13},
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_14},
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_11},
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_9},
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_13},
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_12},
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_15},
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_14},	/* 10 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_7},
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_6},
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_5},
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_9},
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_8},
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_6},
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_15},
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_13},
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_12},
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_15},	/* 20 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_7},
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_5},
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_3},
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_4},
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_4}		/* 25 */
};


