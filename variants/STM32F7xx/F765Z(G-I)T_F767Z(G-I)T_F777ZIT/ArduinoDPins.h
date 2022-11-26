/*
 * ArduinoDPins.h
 *
 *  Created on: Nov 26, 2022
 *      Author: joconnor
 */

#ifndef BSP_ARDUINO_CORE_STM32_VARIANTS_ARDUINODPINS_H_
#define BSP_ARDUINO_CORE_STM32_VARIANTS_ARDUINODPINS_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct DataPin {
	GPIO_TypeDef* GPIO;
	uint16_t GPIO_Pin;
	//GPIO_PinState PinState;
} DataPin;

typedef DataPin DPin_t;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BSP_ARDUINO_CORE_STM32_VARIANTS_STM32F7XX_F765Z_G_I_T_F767Z_G_I_T_F777ZIT_ARDUINODPINS_H_ */
