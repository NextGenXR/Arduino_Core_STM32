#ifndef _STM32YYXX_hal_LPUART_H_
#define _STM32YYXX_hal_LPUART_H_
/* LL raised several warnings, ignore them */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wstrict-aliasing"

#if __has_include(<main.h>)
 #include <main.h>
 #endif

#ifdef STM32G0xx
  #include "stm32g0xx_hal_lpuart.h"
#elif STM32G4xx
  #include "stm32g4xx_hal_lpuart.h"
#elif STM32H7xx
  #include "stm32h7xx_hal_lpuart.h"
#elif STM32L0xx
  #include "stm32l0xx_hal_lpuart.h"
#elif STM32L4xx
  #include "stm32l4xx_hal_lpuart.h"
#elif STM32L5xx
  #include "stm32l5xx_hal_lpuart.h"
#elif STM32U5xx
  #include "stm32u5xx_hal_lpuart.h"
#elif STM32WBxx
  #include "stm32wbxx_hal_lpuart.h"
#elif STM32WLxx
  #include "stm32wlxx_hal_lpuart.h"
#endif
#pragma GCC diagnostic pop
#endif /* _STM32YYXX_hal_LPUART_H_ */
