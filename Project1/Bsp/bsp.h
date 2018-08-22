/**
  ******************************************************************************
  * @文件名     ： bsp.h
  * @作者       ： strongerHuang
  * @版本       ： V1.0.0
  * @日期       ： 2018年08月22日
  * @摘要       ： 底层驱动头文件
  ******************************************************************************/

/* 定义防止递归包含 ----------------------------------------------------------*/
#ifndef _BSP_H
#define _BSP_H

/* 包含的头文件 --------------------------------------------------------------*/
#include "stm8s.h"


/* 宏定义 --------------------------------------------------------------------*/
#define LED_PIN                   GPIO_PIN_5
#define LED_GPIO_PORT             GPIOB

/* LED开关 */
#define LED_ON()                  GPIO_WriteHigh(LED_GPIO_PORT, LED_PIN)
#define LED_OFF()                 GPIO_WriteLow(LED_GPIO_PORT, LED_PIN)
#define LED_TOGGLE()              GPIO_WriteReverse(LED_GPIO_PORT, LED_PIN)


/* 函数申明 ------------------------------------------------------------------*/
void BSP_Initializes(void);


#endif /* _BSP_H */

/**** Copyright (C)2018 strongerHuang. All Rights Reserved **** END OF FILE ****/
