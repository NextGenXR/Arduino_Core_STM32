#ifndef _STM32YYXX_hal_TIM_H_
#define _STM32YYXX_hal_TIM_H_
/* LL raised several warnings, ignore them */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wstrict-aliasing"

#if __has_include(<main.h>)
#include <main.h>
#endif

#if defined (STM32F0xx)
  #include "stm32f0xx_hal_tim.h"
#elif defined (STM32F1xx)
  #include "stm32f1xx_hal_tim.h"
#elif defined (STM32F2xx)
  #include "stm32f2xx_hal_tim.h"
#elif defined (STM32F3xx)
  #include "stm32f3xx_hal_tim.h"
#elif defined (STM32F4xx)
  #include "stm32f4xx_hal_tim.h"
#elif defined (STM32F7xx)
  #include <stm32f7xx_hal_tim.h>
#elif defined (STM32G0xx)
  #include "stm32g0xx_hal_tim.h"
#elif defined (STM32G4xx)
  #include "stm32g4xx_hal_tim.h"
#elif defined (STM32H7xx)
  #include "stm32h7xx_hal_tim.h"
#elif defined (STM32L0xx)
  #include "stm32l0xx_hal_tim.h"
#elif defined (STM32L1xx)
  #include "stm32l1xx_hal_tim.h"
#elif defined (STM32L4xx)
  #include "stm32l4xx_hal_tim.h"
#elif defined (STM32L5xx)
  #include "stm32l5xx_hal_tim.h"
#elif defined (STM32MP1xx)
  #include "stm32mp1xx_hal_tim.h"
#elif (STM32U5xx)
  #include "stm32u5xx_hal_tim.h"
#elif defined (STM32WBxx)
  #include "stm32wbxx_hal_tim.h"
#elif defined (STM32WLxx)
  #include "stm32wlxx_hal_tim.h"
#endif
#pragma GCC diagnostic pop
#endif /* _STM32YYXX_hal_TIM_H_ */
