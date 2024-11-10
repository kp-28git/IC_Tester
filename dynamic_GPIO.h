/*
 * dynamic_GPIO.h
 *
 *  Created on: Mar 2, 2024
 *      Author: Kushal Patel
 */

#ifndef INC_DYNAMIC_GPIO_H_
#define INC_DYNAMIC_GPIO_H_

void GPIO_Mode_Change(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, uint32_t GPIO_Mode);

#endif /* INC_DYNAMIC_GPIO_H_ */
