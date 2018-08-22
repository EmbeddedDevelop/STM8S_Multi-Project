/**
  ******************************************************************************
  * @�ļ���     �� bsp.h
  * @����       �� strongerHuang
  * @�汾       �� V1.0.0
  * @����       �� 2018��08��22��
  * @ժҪ       �� �ײ�����ͷ�ļ�
  ******************************************************************************/

/* �����ֹ�ݹ���� ----------------------------------------------------------*/
#ifndef _BSP_H
#define _BSP_H

/* ������ͷ�ļ� --------------------------------------------------------------*/
#include "stm8s.h"


/* �궨�� --------------------------------------------------------------------*/
#define LED_PIN                   GPIO_PIN_5
#define LED_GPIO_PORT             GPIOB

/* LED���� */
#define LED_ON()                  GPIO_WriteHigh(LED_GPIO_PORT, LED_PIN)
#define LED_OFF()                 GPIO_WriteLow(LED_GPIO_PORT, LED_PIN)
#define LED_TOGGLE()              GPIO_WriteReverse(LED_GPIO_PORT, LED_PIN)


/* �������� ------------------------------------------------------------------*/
void BSP_Initializes(void);


#endif /* _BSP_H */

/**** Copyright (C)2018 strongerHuang. All Rights Reserved **** END OF FILE ****/
