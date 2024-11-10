/*
 * LCD.c
 *
 *  Created on: Feb 28, 2024
 *      Author: Kushal Patel
 */
#include "stm32f1xx_hal.h"
#include "LCD_header.h"
extern I2C_HandleTypeDef hi2c1;
#define SLAVE_ADDRESS_LCD 0x4E

void lcd_write(unsigned char byte,unsigned char mode){
	char uppernibble,lowernibble;
	uppernibble = ((byte>>4)&0x0F);  //extracting upper and lower nibble
	lowernibble = ((byte)&0x0F);

	HAL_GPIO_WritePin(LCD_port, RS, mode);   //mode bit for data/command

	HAL_GPIO_WritePin(LCD_port, D7,((uppernibble>>3)&0x01));
	HAL_GPIO_WritePin(LCD_port, D6,((uppernibble>>2)&0x01));
	HAL_GPIO_WritePin(LCD_port, D5,((uppernibble>>1)&0x01));
	HAL_GPIO_WritePin(LCD_port, D4,((uppernibble>>0)&0x01));  // sending uppernibble
	HAL_GPIO_WritePin(LCD_port, E,1);
	HAL_Delay(5);
	HAL_GPIO_WritePin(LCD_port, E,0);
	HAL_Delay(5);


	HAL_GPIO_WritePin(LCD_port, D7,((lowernibble>>3)&0x01));
	HAL_GPIO_WritePin(LCD_port, D6,((lowernibble>>2)&0x01));
	HAL_GPIO_WritePin(LCD_port, D5,((lowernibble>>1)&0x01));  // sending lowernibble
	HAL_GPIO_WritePin(LCD_port, D4,((lowernibble>>0)&0x01));
	HAL_GPIO_WritePin(LCD_port, E,1);
	HAL_Delay(5);
	HAL_GPIO_WritePin(LCD_port, E,0);
	HAL_Delay(5);
	HAL_Delay(5);


	if (mode == INST_MODE)
	{
		uint16_t command_word = 0;
		command_word = byte;  // rs=0
		uint8_t cmd_t[2];
		cmd_t[0] = (command_word>>8)&0xFF;
		cmd_t[1] = (command_word)&0xFF;
		HAL_I2C_Master_Transmit (&hi2c1, SLAVE_ADDRESS_LCD,(uint8_t *) cmd_t, 2, 100);
	}
	else if (mode == DATA_MODE){
		uint16_t data_word = 0;
		data_word = 0x4000|byte;  //rs=1
		uint8_t data_t[2];
		data_t[0] = (data_word>>8)&0xFF;
		data_t[1] = (data_word)&0xFF;
		HAL_I2C_Master_Transmit (&hi2c1, SLAVE_ADDRESS_LCD,(uint8_t *) data_t, 2, 100);
	}



}


void init_display_controller(void)
{
    /* Startup Time for the CLCD controller */
	HAL_Delay(10);
    /* The CLCD Startup Sequence */
    lcd_write(0x02,INST_MODE);
    lcd_write(0x28,INST_MODE);				 //set of command to initialize lcd
   	lcd_write(0x0C,INST_MODE);
   	lcd_write(0x06,INST_MODE);
   	lcd_write(0x01,INST_MODE);
   	lcd_write(0x80,INST_MODE);
}


void lcd_putch(const unsigned char data, unsigned char addr)
{
    lcd_write(addr, INST_MODE);
    lcd_write(data, DATA_MODE);
}


void lcd_string(const char *str, unsigned char addr)
{
    lcd_write(addr, INST_MODE);
    while (*str != '\0')
    {
        lcd_write(*str, DATA_MODE);
        str++;
    }
}

void lcd_delay_ms(unsigned int x){
	unsigned int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<50;j++){}
	}
}
