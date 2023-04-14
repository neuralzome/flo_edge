/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f0xx_hal.h"

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
#define VM_Pin GPIO_PIN_4
#define VM_GPIO_Port GPIOA
#define VP_Pin GPIO_PIN_5
#define VP_GPIO_Port GPIOA
#define P_Pin GPIO_PIN_6
#define P_GPIO_Port GPIOA
#define HAPTIC_Pin GPIO_PIN_7
#define HAPTIC_GPIO_Port GPIOA
#define DEBUG_LED_Pin GPIO_PIN_0
#define DEBUG_LED_GPIO_Port GPIOB
#define RGB_LED_RED_Pin GPIO_PIN_10
#define RGB_LED_RED_GPIO_Port GPIOB
#define PUSH_BUTTON_Pin GPIO_PIN_11
#define PUSH_BUTTON_GPIO_Port GPIOB
#define BOOT_MODE_Pin GPIO_PIN_8
#define BOOT_MODE_GPIO_Port GPIOA
#define RGB_LED_BLUE_Pin GPIO_PIN_9
#define RGB_LED_BLUE_GPIO_Port GPIOA
#define RGB_LED_GREEN_Pin GPIO_PIN_7
#define RGB_LED_GREEN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
