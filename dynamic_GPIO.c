/*
 * dynamic_GPIO.c
 *
 *  Created on: Mar 2, 2024
 *      Author: Kushal Patel
 */
#include "stm32f1xx_hal.h"
#include "dynamic_GPIO.h"

void GPIO_Mode_Change(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, uint32_t GPIO_Mode)
{
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin = GPIO_Pin;
    GPIO_InitStruct.Mode = GPIO_Mode;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;

    HAL_GPIO_DeInit(GPIOx, GPIO_Pin); // Deinitialize the pin
    HAL_GPIO_Init(GPIOx, &GPIO_InitStruct); // Reinitialize the pin with new mode
}

