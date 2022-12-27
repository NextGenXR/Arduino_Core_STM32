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
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_9}, 	/* 00 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_14},	/* 01 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_15}, 	/* 02 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_13}, 	/* 03 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_14}, 	/* 04 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_11}, 	/* 05 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_9}, 	/* 06 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_13}, 	/* 07 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_12}, 	/* 08 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_15}, 	/* 09 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_14},	/* 10 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_7},	/* 11 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_6},	/* 12 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_5},	/* 13 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_9},	/* 14 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_8},	/* 15 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_6},	/* 16 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_15},	/* 17 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_13},	/* 18 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_12},	/* 19 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_15},	/* 20 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_7},	/* 21 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_5},	/* 22 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_3},	/* 23 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_4},	/* 24 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_4}	,	/* 25 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_6},	/* 26 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_2},	/* 27 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_13},	/* 28 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_12},	/* 29 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_11},	/* 30 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_2},		/* 31/56 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 32  */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_0},	/* 33 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_0},		/* 34 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_11},	/* 35 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_10},	/* 36 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_15},	/* 37 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_14},	/* 38 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_12},	/* 39 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_10},	/* 40 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_7},		/* 41 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_8},		/* 42 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_8},	/* 43 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_9},	/* 44 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_10},	/* 45 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_11},	/* 46 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_12},	/* 47 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_2},	/* 48 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_2},	/* 49 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_3},	/* 50 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_7},	/* 51 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_6},	/* 52 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_5},	/* 53 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_4},	/* 54 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_3},	/* 55 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_2},		/* 56/32  */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_4},		/* 57 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_5},		/* 58 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_6},		/* 59 */
		{((GPIO_TypeDef *) GPIOE_BASE), GPIO_PIN_3},		/* 60 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_8},		/* 61 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_7},		/* 62 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_9},		/* 63 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_1},	/* 64 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_0},	/* 65 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_1},	/* 66 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_0},	/* 67 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_0},		/* 68 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_1},		/* 69 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_2},		/* 70 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_7},	/* 71 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 72 is a NC */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_7},		/* 73 */
		{((GPIO_TypeDef *) GPIOB_BASE), GPIO_PIN_14},	/* 74 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_13},	/* 75 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_9},	/* 76 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_8},	/* 77 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_0},		/* 78 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_1},		/* 79 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_2},		/* 80 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 81? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 82? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 83? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 84? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 85? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 86? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 87? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 88? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 89? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_8},	/* 90 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_9},	/* 91 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_10},	/* 92 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_11},	/* 93 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_12},	/* 94 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_13},	/* 95 SWD */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_14},	/* 96 SWD */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 97? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 98? */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_0},	/* 99? */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_14},	/* 100 */
		{((GPIO_TypeDef *) GPIOC_BASE), GPIO_PIN_15},	/* 101 */
		{((GPIO_TypeDef *) GPIOD_BASE), GPIO_PIN_10},	/* 102 */
		{((GPIO_TypeDef *) GPIOF_BASE), GPIO_PIN_11},	/* 103 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_4},	/* 104 */
		{((GPIO_TypeDef *) GPIOA_BASE), GPIO_PIN_13},	/* 105 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_5},	/* 106 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_6},	/* 107 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_7},	/* 108 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_8},	/* 109 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_10},	/* 110 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_11},	/* 111 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_12},	/* 112 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_13},	/* 113 */
		{((GPIO_TypeDef *) GPIOG_BASE), GPIO_PIN_15},	/* 114 */
		{((GPIO_TypeDef *) GPIOH_BASE), GPIO_PIN_0},	/* 115 */
		{((GPIO_TypeDef *) GPIOH_BASE), GPIO_PIN_1},	/* 116 */
};

/*
#define PA3                     PIN_A0
#define PC0                     PIN_A1
#define PC3                     PIN_A2
#define PF3                     PIN_A3
#define PF5                     PIN_A4
#define PF10                    PIN_A5
#define PB1                     PIN_A6
#define PC2                     PIN_A7
#define PF4                     PIN_A8
#define PF6                     PIN_A9
#define PA1                     PIN_A18
#define PA2                     PIN_A19

#define PC1                     PIN_A20
#define PC4                     PIN_A21
#define PC5                     PIN_A22
 */


DPin_t GetPinPort(uint8_t DPin)
{
	return DPin_Map[DPin];
}


