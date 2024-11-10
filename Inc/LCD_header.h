/*
 * LCD_header.h
 *
 *  Created on: Feb 28, 2024
 *      Author: Kushal Patel
 */

#ifndef INC_LCD_HEADER_H_
#define INC_LCD_HEADER_H_

#define RS  GPIO_PIN_1
#define E   GPIO_PIN_2
#define D4  GPIO_PIN_3
#define D5  GPIO_PIN_4
#define D6  GPIO_PIN_5
#define D7  GPIO_PIN_6
#define LCD_port  GPIOA

#define INST_MODE 0
#define DATA_MODE 1

#define line1(x) (0x80+x)
#define line2(x) (0xC0+x)

#define EIGHT_BIT_MODE              0x33
#define FOUR_BIT_MODE               0x02
#define TWO_LINES_5x8_4_BIT_MODE    0x28
#define CLEAR_DISP_SCREEN           0x01
#define DISP_ON_AND_CURSOR_OFF      0x0C
#define BAR                         0xFF


void lcd_write(unsigned char byte,unsigned char mode);
void init_display_controller(void);
void lcd_delay_ms(unsigned int x);
void lcd_putch(unsigned char data,unsigned char addr);
void lcd_string(const char *str,unsigned char addr);


#endif /* INC_LCD_HEADER_H_ */
