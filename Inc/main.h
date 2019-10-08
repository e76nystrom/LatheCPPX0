/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

//void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define XA_Pin GPIO_PIN_13
#define XA_GPIO_Port GPIOC
#define XA_EXTI_IRQn EXTI15_10_IRQn
#define ZA_Pin GPIO_PIN_14
#define ZA_GPIO_Port GPIOC
#define ZA_EXTI_IRQn EXTI15_10_IRQn
#define ZB_Pin GPIO_PIN_15
#define ZB_GPIO_Port GPIOC
#define ZB_EXTI_IRQn EXTI15_10_IRQn
#define Pin12_Pin GPIO_PIN_0
#define Pin12_GPIO_Port GPIOC
#define Pin11_Pin GPIO_PIN_1
#define Pin11_GPIO_Port GPIOC
#define SPI_Mosi_Pin GPIO_PIN_2
#define SPI_Mosi_GPIO_Port GPIOC
#define SPI_Miso_Pin GPIO_PIN_3
#define SPI_Miso_GPIO_Port GPIOC
#define Step2_Pin GPIO_PIN_0
#define Step2_GPIO_Port GPIOA
#define ExtInt_Pin GPIO_PIN_1
#define ExtInt_GPIO_Port GPIOA
#define Encoder_Pin GPIO_PIN_2
#define Encoder_GPIO_Port GPIOA
#define Pin10_Pin GPIO_PIN_3
#define Pin10_GPIO_Port GPIOA
#define Index2_Pin GPIO_PIN_4
#define Index2_GPIO_Port GPIOA
#define Index2_EXTI_IRQn EXTI4_IRQn
#define Step1_Pin GPIO_PIN_5
#define Step1_GPIO_Port GPIOA
#define JogA2_Pin GPIO_PIN_6
#define JogA2_GPIO_Port GPIOA
#define JogA2_EXTI_IRQn EXTI9_5_IRQn
#define JogA1_Pin GPIO_PIN_7
#define JogA1_GPIO_Port GPIOA
#define JogA1_EXTI_IRQn EXTI9_5_IRQn
#define SPI_Sel_Pin GPIO_PIN_4
#define SPI_Sel_GPIO_Port GPIOC
#define JogB1_Pin GPIO_PIN_5
#define JogB1_GPIO_Port GPIOC
#define JogB1_EXTI_IRQn EXTI9_5_IRQn
#define Step4_Pin GPIO_PIN_0
#define Step4_GPIO_Port GPIOB
#define Pin14_Pin GPIO_PIN_1
#define Pin14_GPIO_Port GPIOB
#define Pin1_Pin GPIO_PIN_2
#define Pin1_GPIO_Port GPIOB
#define Dir1_Pin GPIO_PIN_10
#define Dir1_GPIO_Port GPIOB
#define XFlag_Pin GPIO_PIN_12
#define XFlag_GPIO_Port GPIOB
#define SPI_Sck_Pin GPIO_PIN_13
#define SPI_Sck_GPIO_Port GPIOB
#define Dbg0_Pin GPIO_PIN_14
#define Dbg0_GPIO_Port GPIOB
#define Dir4_Pin GPIO_PIN_15
#define Dir4_GPIO_Port GPIOB
#define RemTx_Pin GPIO_PIN_6
#define RemTx_GPIO_Port GPIOC
#define RemRx_Pin GPIO_PIN_7
#define RemRx_GPIO_Port GPIOC
#define Step5_Pin GPIO_PIN_8
#define Step5_GPIO_Port GPIOC
#define JogB2_Pin GPIO_PIN_9
#define JogB2_GPIO_Port GPIOC
#define JogB2_EXTI_IRQn EXTI9_5_IRQn
#define TIM1_CH1_Pin GPIO_PIN_8
#define TIM1_CH1_GPIO_Port GPIOA
#define DbgTx_Pin GPIO_PIN_9
#define DbgTx_GPIO_Port GPIOA
#define DbgRx_Pin GPIO_PIN_10
#define DbgRx_GPIO_Port GPIOA
#define Pin17_Pin GPIO_PIN_11
#define Pin17_GPIO_Port GPIOA
#define Dir5_Pin GPIO_PIN_12
#define Dir5_GPIO_Port GPIOA
#define Pin13_Pin GPIO_PIN_15
#define Pin13_GPIO_Port GPIOA
#define ZFlag_Pin GPIO_PIN_10
#define ZFlag_GPIO_Port GPIOC
#define Pin15_Pin GPIO_PIN_11
#define Pin15_GPIO_Port GPIOC
#define XB_Pin GPIO_PIN_12
#define XB_GPIO_Port GPIOC
#define XB_EXTI_IRQn EXTI15_10_IRQn
#define Index1_Pin GPIO_PIN_2
#define Index1_GPIO_Port GPIOD
#define Dir2_Pin GPIO_PIN_4
#define Dir2_GPIO_Port GPIOB
#define Dir3_Pin GPIO_PIN_5
#define Dir3_GPIO_Port GPIOB
#define I2C_Scl_Pin GPIO_PIN_6
#define I2C_Scl_GPIO_Port GPIOB
#define I2C_Sda_Pin GPIO_PIN_7
#define I2C_Sda_GPIO_Port GPIOB
#define Pin16_Pin GPIO_PIN_8
#define Pin16_GPIO_Port GPIOB
#define Step3_Pin GPIO_PIN_9
#define Step3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
