//V1.0.0
#ifndef __STM32F4xx_CONF_H
#define __STM32F4xx_CONF_H

#if defined  (HSE_VALUE)//���¶��徧��Ƶ��,����Ϊ8 MHz
 #undef HSE_VALUE
 #define HSE_VALUE    ((uint32_t)8000000) 
#endif 

#include "./STLib/stm32f4xx_exti.h"
#include "./STLib/stm32f4xx_fsmc.h"
#include "./STLib/stm32f4xx_gpio.h"
#include "./STLib/stm32f4xx_i2c.h"
#include "./STLib/stm32f4xx_rcc.h"
#include "./STLib/stm32f4xx_spi.h"
#include "./STLib/stm32f4xx_syscfg.h"
#include "./STLib/stm32f4xx_tim.h"
#include "./STLib/misc.h" 

//#define USE_FULL_ASSERT    1
#ifdef  USE_FULL_ASSERT
  #define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
  void assert_failed(uint8_t* file, uint32_t line);
#else
  #define assert_param(expr) ((void)0)
#endif 

#endif 
