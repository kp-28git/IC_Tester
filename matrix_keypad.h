/*
 * matrix_keypad.h
 *
 *  Created on: Feb 29, 2024
 *      Author: Kushal Patel
 */

#ifndef INC_MATRIX_KEYPAD_H_
#define INC_MATRIX_KEYPAD_H_

#define keypad_port								GPIOA
#define ROW1                                    GPIO_PIN_7
#define ROW2                                    GPIO_PIN_8
#define ROW3                                    GPIO_PIN_9
#define ROW4                                    GPIO_PIN_10

#define COL1                                    GPIO_PIN_11
#define COL2                                    GPIO_PIN_12
#define COL3                                    GPIO_PIN_13


#define HI                                      1
#define LOW                                     0

#define STATE                                   1// STATE
#define LEVEL                                   0

#define ALL_RELEASED                            0xFF

unsigned char read_matrix_keypad(unsigned char mode);
void init_matrix_keypad(void);


#endif /* INC_MATRIX_KEYPAD_H_ */
