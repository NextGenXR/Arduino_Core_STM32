#ifndef _STM32YYXX_hal_SWPMI_H_
#define _STM32YYXX_hal_SWPMI_H_
/* LL raised several warnings, ignore them */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wstrict-aliasing"

#if __has_include(<main.h>)
 #include <main.h>
 #endif

#ifdef STM32H7xx
  #include "stm32h7xx_hal_swpmi.h"
#elif STM32L4xx
  #include "stm32l4xx_hal_swpmi.h"
#endif
#pragma GCC diagnostic pop
#endif /* _STM32YYXX_hal_SWPMI_H_ */
