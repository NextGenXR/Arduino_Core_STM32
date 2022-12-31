#ifndef _STM32YYXX_hal_OPAMP_H_
#define _STM32YYXX_hal_OPAMP_H_
/* LL raised several warnings, ignore them */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wstrict-aliasing"

#if __has_include(<main.h>)
 #include <main.h>
 #endif

#ifdef STM32F3xx
  #include "stm32f3xx_hal_opamp.h"
#elif STM32G4xx
  #include "stm32g4xx_hal_opamp.h"
#elif STM32H7xx
  #include "stm32h7xx_hal_opamp.h"
#elif STM32L1xx
  #include "stm32l1xx_hal_opamp.h"
#elif STM32L4xx
  #include "stm32l4xx_hal_opamp.h"
#elif STM32L5xx
  #include "stm32l5xx_hal_opamp.h"
#elif STM32U5xx
  #include "stm32u5xx_hal_opamp.h"
#endif
#pragma GCC diagnostic pop
#endif /* _STM32YYXX_hal_OPAMP_H_ */
