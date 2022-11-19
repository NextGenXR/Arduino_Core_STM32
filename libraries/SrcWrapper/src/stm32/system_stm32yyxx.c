
#ifndef USE_HAL_DRIVER
#define USE_HAL_DRIVER
#endif

#if __has_include(<main.h>)
 #include <main.h>
 #endif

#ifdef ARDUINO

#if defined(STM32F0xx)
  #include "system_stm32f0xx.c"
#elif defined(STM32F1xx)
  #include "system_stm32f1xx.c"
#elif defined(STM32F2xx)
  #include "system_stm32f2xx.c"
#elif defined(STM32F3xx)
  #include "system_stm32f3xx.c"
#elif defined(STM32F4xx)
  #include "system_stm32f4xx.c"
#elif defined(STM32F7xx)
  #include "system_stm32f7xx.c"
#elif defined(STM32G0xx)
  #include "system_stm32g0xx.c"
#elif defined(STM32G4xx)
  #include "system_stm32g4xx.c"
#elif defined(STM32H7xx)
  #include "system_stm32h7xx.c"
#elif defined(STM32L0xx)
  #include "system_stm32l0xx.c"
#elif defined(STM32L1xx)
  #include "system_stm32l1xx.c"
#elif defined(STM32L4xx)
  #include "system_stm32l4xx.c"
#elif defined(STM32L5xx)
  #include "system_stm32l5xx_ns.c"
#elif defined(STM32MP1xx)
  #include "system_stm32mp1xx.c"
#elif defined(STM32U5xx)
  #include "system_stm32u5xx.c"
#elif defined(STM32WBxx)
  #include "system_stm32wbxx.c"
#elif defined(STM32WLxx)
  #include "system_stm32wlxx.c"
#endif

#endif
