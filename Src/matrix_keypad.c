/*
 * matrix_keypad.c
 *
 *  Created on: Feb 29, 2024
 *      Author: Kushal Patel
 */
#include "stm32f1xx_hal.h"
#include "matrix_keypad.h"
void init_matrix_keypad(void){
	/* Making all the Rows HIGH to start with */
	HAL_GPIO_WritePin(keypad_port,ROW1,HI);
	HAL_GPIO_WritePin(keypad_port,ROW2,HI);
	HAL_GPIO_WritePin(keypad_port,ROW3,HI);
	HAL_GPIO_WritePin(keypad_port,ROW4,HI);
}

static unsigned char scan_keypad(void)
{


	HAL_GPIO_WritePin(keypad_port,ROW1,LOW);
	HAL_GPIO_WritePin(keypad_port,ROW2,HI);
	HAL_GPIO_WritePin(keypad_port,ROW3,HI);
	HAL_GPIO_WritePin(keypad_port,ROW4,HI);
	HAL_Delay(10);
    if (HAL_GPIO_ReadPin(keypad_port,COL1) == LOW)
    {
        return 1;
    }
    else if (HAL_GPIO_ReadPin(keypad_port,COL2) == LOW)
    {
        return 2;
    }
    else if (HAL_GPIO_ReadPin(keypad_port,COL3) == LOW)
    {
        return 3;
    }


	HAL_GPIO_WritePin(keypad_port,ROW1,HI);
	HAL_GPIO_WritePin(keypad_port,ROW2,LOW);
	HAL_GPIO_WritePin(keypad_port,ROW3,HI);
	HAL_GPIO_WritePin(keypad_port,ROW4,HI);
	HAL_Delay(10);
    if (HAL_GPIO_ReadPin(keypad_port,COL1) == LOW)
    {
        return 4;
    }
    else if (HAL_GPIO_ReadPin(keypad_port,COL2) == LOW)
    {
        return 5;
    }
    else if (HAL_GPIO_ReadPin(keypad_port,COL3) == LOW)
    {
        return 6;
    }

	HAL_GPIO_WritePin(keypad_port,ROW1,HI);
	HAL_GPIO_WritePin(keypad_port,ROW2,HI);
	HAL_GPIO_WritePin(keypad_port,ROW3,LOW);
	HAL_GPIO_WritePin(keypad_port,ROW4,HI);
	HAL_Delay(10);
    if (HAL_GPIO_ReadPin(keypad_port,COL1) == LOW)
    {
        return 7;
    }
    else if (HAL_GPIO_ReadPin(keypad_port,COL2) == LOW)
    {
        return 8;
    }
    else if (HAL_GPIO_ReadPin(keypad_port,COL3) == LOW)
    {
        return 9;
    }


	HAL_GPIO_WritePin(keypad_port,ROW1,HI);
	HAL_GPIO_WritePin(keypad_port,ROW2,HI);
	HAL_GPIO_WritePin(keypad_port,ROW3,HI);
	HAL_GPIO_WritePin(keypad_port,ROW4,LOW);
	HAL_Delay(10);
    if (HAL_GPIO_ReadPin(keypad_port,COL1) == LOW)
    {
        return '*';  ///11 for '*'
    }
    else if (HAL_GPIO_ReadPin(keypad_port,COL2) == LOW)
    {
        return 0;
    }
    else if (HAL_GPIO_ReadPin(keypad_port,COL3) == LOW)
    {
        return '#';   //12 for '#'
    }


    return ALL_RELEASED;
}

unsigned char read_matrix_keypad(unsigned char mode) // LEVEL STATE
{
    static unsigned char once = 1;
    unsigned char key;

    key = scan_keypad(); // 1 2 3 4  5 6 7 8 9 0 '*' '#' 'A' 'B' 'C' 'D'

    if (mode == LEVEL)
    {
        return key; //// 1 2 3 4  5 6 7 8 9 0 '*' '#' 'A' 'B' 'C' 'D' ALL_RELEASED
    }
    else // state change
    {
        if ((key != ALL_RELEASED) && once)
        {
            once = 0;
             return key; // 1 2 3 4  5 6 7 8 9 0 '*' '#' 'A' 'B' 'C' 'D' ALL_RELEASED
        }

        else if (key == ALL_RELEASED)
        {
            once = 1;
        }
    }

    return ALL_RELEASED;
}

