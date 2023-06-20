#ifndef _STM32YYXX_hal_CORDIC_H_
#define _STM32YYXX_hal_CORDIC_H_
/* LL raised several warnings, ignore them */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wstrict-aliasing"

#if __has_include(<main.h>)
 #include <main.h>
 #endif

#ifdef STM32G4xx
  #include "stm32g4xx_hal_cordic.h"
#elif STM32H7xx
  #include "stm32h7xx_hal_cordic.h"
#elif STM32U5xx
  #include "stm32u5xx_hal_cordic.h"
#endif
#pragma GCC diagnostic pop
#endif /* _STM32YYXX_hal_CORDIC_H_ */
