/**
  ******************************************************************************
  * @�ļ���     �� bsp.c
  * @����       �� strongerHuang
  * @�汾       �� V1.0.0
  * @����       �� 2018��08��22��
  * @ժҪ       �� �ײ�����Դ�ļ�
  ******************************************************************************/
/*----------------------------------------------------------------------------
  ������־:
  2018-08-22 V1.0.0:��ʼ�汾
  ----------------------------------------------------------------------------*/
/* ������ͷ�ļ� --------------------------------------------------------------*/
#include "bsp.h"


/************************************************
�������� �� CLK_Configuration
��    �� �� ʱ������
��    �� �� ��
�� �� ֵ �� ��
��    �� �� strongerHuang
*************************************************/
void CLK_Configuration(void)
{
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1); //HSI = 16M (1��Ƶ)
}

/************************************************
�������� �� LED_Initializes
��    �� �� LED��ʼ��
��    �� �� ��
�� �� ֵ �� ��
��    �� �� strongerHuang
*************************************************/
void LED_Initializes(void)
{
  GPIO_Init(LED_GPIO_PORT, (GPIO_Pin_TypeDef)LED_PIN, GPIO_MODE_OUT_PP_LOW_FAST);

#if 0
  /* ϵͳʱ����� */
  GPIO_Init(GPIOC, (GPIO_Pin_TypeDef)GPIO_PIN_4, GPIO_MODE_OUT_PP_HIGH_FAST);
  CLK_CCOCmd(ENABLE);
#endif
}

/************************************************
�������� �� BSP_Initializes
��    �� �� �ײ�������ʼ��
��    �� �� ��
�� �� ֵ �� ��
��    �� �� strongerHuang
*************************************************/
void BSP_Initializes(void)
{
  CLK_Configuration();
  LED_Initializes();
}


/**** Copyright (C)2018 strongerHuang. All Rights Reserved **** END OF FILE ****/