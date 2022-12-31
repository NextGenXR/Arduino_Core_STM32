#ifndef __STM32F7xx_HAL_CONF_H
#define __STM32F7xx_HAL_CONF_H

#include "variant.h"

#if __has_include("..\..\Core\Inc\stm32f7xx_hal_conf.h")
 #include "..\..\Core\Inc\stm32f7xx_hal_conf.h"
 #else

/* STM32F7xx specific HAL configuration options. */
#if __has_include("hal_conf_custom.h")
 #include "hal_conf_custom.h"
#else
#if __has_include("hal_conf_extra.h")
 #include "hal_conf_extra.h"
#endif

#if __has_include("stm32f7xx_hal_conf_default.h")
	#include "stm32f7xx_hal_conf_default.h"
	#endif

#endif

#endif

#endif /* __STM32F7xx_HAL_CONF_H */
