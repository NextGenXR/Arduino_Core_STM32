/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#ifdef Arduino

#include "Arduino.h"
#include <stdint.h>
#include <clock.h>

#if __has_include(<main.h>)
#include <main.h>
#endif

#ifndef Arduino
#include <stm32duino.h>
#include <cmsis_os.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

__weak uint32_t millis(void)
{
  /* ToDo: ensure no interrupts */
  return ((uint32_t)getCurrentMillis());
}

/* Interrupt-compatible version of micros */
__weak uint32_t micros(void)
{
  return ((uint32_t)getCurrentMicros());
}

__weak void delay(uint32_t ms)
{
#ifdef USE_HAL_DRIVER
	HAL_Delay(ms);
#else

  if (ms != 0) {
    uint32_t start = getCurrentMillis();
    do {
      yield();
    } while (getCurrentMillis() - start < ms);
  }
#endif
}

#ifdef __cplusplus
}
#endif

#endif /* Arduino */
