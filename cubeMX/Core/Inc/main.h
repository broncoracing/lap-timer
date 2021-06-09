/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32l4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON1_Pin GPIO_PIN_3
#define BUTTON1_GPIO_Port GPIOA
#define BUTTON2_Pin GPIO_PIN_4
#define BUTTON2_GPIO_Port GPIOA
#define GPS_LED_Pin GPIO_PIN_5
#define GPS_LED_GPIO_Port GPIOA
#define PWR_LED_Pin GPIO_PIN_6
#define PWR_LED_GPIO_Port GPIOA
#define AUX_LED_Pin GPIO_PIN_7
#define AUX_LED_GPIO_Port GPIOA
#define IMU_INT1_Pin GPIO_PIN_0
#define IMU_INT1_GPIO_Port GPIOB
#define IMU_INT2_Pin GPIO_PIN_1
#define IMU_INT2_GPIO_Port GPIOB
#define GPS_TX_Pin GPIO_PIN_9
#define GPS_TX_GPIO_Port GPIOA
#define GPS_RX_Pin GPIO_PIN_10
#define GPS_RX_GPIO_Port GPIOA
#define GPS_SDL_Pin GPIO_PIN_6
#define GPS_SDL_GPIO_Port GPIOB
#define GPS_SDA_Pin GPIO_PIN_7
#define GPS_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
