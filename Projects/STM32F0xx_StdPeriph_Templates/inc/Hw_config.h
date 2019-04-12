/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HW_CONFIG_H
#define __HW_CONFIG_H

/* Platform config -----------------------------------------------------------*/

/* Includes ------------------------------------------------------------------*/
#include "Macro.h"
#include "stm32f0xx.h"
#include <stdio.h>

/* Define config -------------------------------------------------------------*/
#define USE_PWM
//#define USE_GPIO

/* Macro ---------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
extern __IO uint8_t UartRxBuffer;
extern __IO uint8_t UartRxFlag;

void MixedLIghtLED1_Demo(void);
void MixedLIghtLED1_Config(void);

void Delay(__IO uint32_t mTime);

void USART_Test(void);
void USART_Config(void);

void SysTickConfig(void);
void TimingDelay_Decrement(void);
/* Exported constants --------------------------------------------------------*/

#endif  /* __HW_CONFIG_H */

