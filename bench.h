	/*
 * bench.h
 *
 *  Created on: Mar 2, 2024
 *      Author: Kushal Patel
 */

#ifndef INC_BENCH_H_
#define INC_BENCH_H_

#define L0  GPIO_PIN_0
#define L1  GPIO_PIN_1
#define L2  GPIO_PIN_2
#define L3  GPIO_PIN_3
#define L4  GPIO_PIN_4
#define L5  GPIO_PIN_5
#define L6  GPIO_PIN_6
#define L7  GPIO_PIN_7
#define L8  GPIO_PIN_8
#define L9  GPIO_PIN_9
#define L10  GPIO_PIN_10
#define L11  GPIO_PIN_11
#define L12  GPIO_PIN_12
#define L13  GPIO_PIN_13
#define L14  GPIO_PIN_14
#define L15  GPIO_PIN_15

#define IC_port GPIOB

const char*  test_bench(int ic_code_val);

int ic_7400();

#endif /* INC_BENCH_H_ */
