/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "LCD_header.h"
#include "matrix_keypad.h"
#include "bench.h"
#include "dynamic_GPIO.h"
//#include "matrix_keypad.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
I2C_HandleTypeDef hi2c1;

/* USER CODE BEGIN PV */
int operation_flag,reset_flag,ic_code_val,check;
static unsigned int code;
unsigned char flag=0;       // global variables
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */


  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_I2C1_Init();
  /* USER CODE BEGIN 2 */
  init_display_controller();
  init_matrix_keypad();
  operation_flag = POWER_ON_SCREEN;
  unsigned char key;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  key = read_matrix_keypad(STATE);
	  if (operation_flag == HOME_SCREEN) {
		  if (key == 1){
			  operation_flag = TEST_SCREEN;
			  reset_flag = MODE_RESET;
			  clear_screen();
		  }
		  if (key == 2){
			  operation_flag = FIND_SCREEN;
			  clear_screen();
		  	  }
	  }


	  switch (operation_flag){
	  case POWER_ON_SCREEN:
		  power_on_screen();
		  clear_screen();
		  operation_flag = HOME_SCREEN;
		  break;
	  case HOME_SCREEN:
	      home_screen();
	      break;
	  case  TEST_SCREEN:
		  if (flag==0){
			  ic_code_val = ic_code_screen(key, reset_flag);
			  if(flag==1){
				  ic_code_val = reset_flag = MODE_RESET;
				  continue;
			  }
		  }
		  else if(flag==1){
			  ic_code_val = ic_code_screen(key, reset_flag);////////////////////////////
		  }
		  break;
	  case FIND_SCREEN:
		  find_screen();
		  break;
	  case CNFM_SCREEN:
		  confirm_screen(key, ic_code_val);
	  }
	  reset_flag = RESET_NOTHING;

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 100000;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4
                          |GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8
                          |GPIO_PIN_9|GPIO_PIN_10, GPIO_PIN_RESET);

  /*Configure GPIO pins : PA1 PA2 PA3 PA4
                           PA5 PA6 PA7 PA8
                           PA9 PA10 */
  GPIO_InitStruct.Pin = GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4
                          |GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8
                          |GPIO_PIN_9|GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PA11 PA12 PA13 */
  GPIO_InitStruct.Pin = GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */
void clear_screen(void){
	lcd_write(CLEAR_DISP_SCREEN,INST_MODE);
	HAL_Delay(2);
}

void power_on_screen(void){
	unsigned int i;
	lcd_string("  Powering ON   ",line1(0));
	HAL_Delay(10);
	for (i=0;i<16;i++){
		lcd_putch(0xFF,line2(i));     //for printing bar symbol --> 0xff
		HAL_Delay(10);
	}
}
void home_screen(void){
	lcd_string("1.Test IC       ",line1(0));
	lcd_string("2.Find IC       ",line2(0));
}

int ic_code_screen(unsigned char key,int reset_flag){
	static unsigned char key_count;

	if (reset_flag == MODE_RESET){
		key_count = 0;
		key = ALL_RELEASED;
		code =0;
		lcd_string("IC Code: ",line1(0));
		lcd_string("*:CLR      #:ENT",line2(0));
	}
    if ((key != '*') && (key != '#') && (key != ALL_RELEASED)) {
        key_count++;
        if (key_count <=4) {
        	code = code * 10 + key;
        }
	}
	else if (key == '*') { // to clear sec or min
		key_count = 0;
        code = 0;
	}

	lcd_putch((char)(code / 1000) + '0', line1(10));
    lcd_putch((char)((code / 100) % 10) + '0', line1(11));
	lcd_putch((char)((code / 10) % 10) + '0', line1(12));
	lcd_putch((char)(code % 10) + '0', line1(13));

	if (key == '#' && key_count==4) {
		clear_screen();
		operation_flag = CNFM_SCREEN;
		return code;
	}
	return 0;
}

void confirm_screen(unsigned char key,int ic_code_val){

	lcd_string("IC Code: ",line1(0));
	//lcd_string("Name: ",line2(0));

	lcd_putch((char)(ic_code_val / 1000) + '0', line1(9));
	lcd_putch((char)((ic_code_val / 100) % 10) + '0', line1(10));
	lcd_putch((char)((ic_code_val / 10) % 10) + '0', line1(11));
	lcd_putch((char)(ic_code_val % 10) + '0', line1(12));

	const char *str_name;
	str_name = test_bench(ic_code_val) ;
	lcd_string(str_name,line2(0));
	if(key == '#' ){
		clear_screen();
		lcd_string("Confirmed",line1(0));
	}
	else if(key=='*'){
		clear_screen();
		operation_flag = HOME_SCREEN;
	}
}

void find_screen(void){
	int find_ic,i,j;
	find_ic=7400;
	for(i=0;i<50;i++){
		lcd_string("IC Code: ",line1(0));
		lcd_putch((char)((find_ic+i) / 1000) + '0', line1(9));
		lcd_putch((char)(((find_ic+i) / 100) % 10) + '0', line1(10));
		lcd_putch((char)(((find_ic+i) / 10) % 10) + '0', line1(11));
		lcd_putch((char)((find_ic+i) % 10) + '0', line1(12));
		//test_bench(find_ic+i);

		for (j=0;j<16;j++){
		lcd_putch(0xFF,line2(j));     //for printing bar symbol --> 0xff
		HAL_Delay(1);
		}
		lcd_string("                ",line2(0));
	}
	lcd_string("Cann't Find IC",line1(0));
	HAL_Delay(1500);
	clear_screen();
	operation_flag = HOME_SCREEN;

}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
