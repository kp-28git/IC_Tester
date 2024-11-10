/*
 * bench.c
 *
 *  Created on: Mar 2, 2024
 *      Author: Kushal Patel
 */
#include "stm32f1xx_hal.h"
#include "bench.h"
#include "dynamic_GPIO.h"

const char* test_bench(int ic_code){
int check;
	switch(ic_code){
	case 7400:


	        return "2-IP NAND";
	        break;

	case 7401:


	        return "2-IP NAND";
	        break;

	case 7402:


	        return "2-IP NOR";
	        break;

	case 7403:


	        return "2-IP NAND";
	        break;

	case 7404:


	        return "HEX INV";
	        break;

	case 7405:


	        return "HEX INV";
	        break;

	case 7406:


	        return "HEX INV";
	        break;

	case 7407:


	        return "HEX BUFFER";
	        break;

	case 7408:


	        return "2-IP AND";
	        break;

	case 7409:


	        return "2-IP AND";
	        break;

	case 7410:


	        return "3-IP NAND";
	        break;

	case 7411:


	        return "3-IP AND";
	        break;

	case 7412:


	        return "3-IP NAND";
	        break;

	case 7413:


	        return "4-IP NAND";
	        break;

	case 7414:


	        return "HEX INV";
	        break;

	case 7415:


	        return "4-IP AND";
	        break;

	case 7416:


	        return "BUFF 3-OP";
	        break;

	case 7417:


	        return "HEX BUFFER";
	        break;

	case 7418:


	        return "4-IP NAND";
	        break;

	case 7419:


	        return "BUFF 3-OP";
	        break;

	case 7420:


	        return "4-IP NAND";
	        break;


	case 7421:


	        return "4-IP AND";
	        break;

	case 7422:


	        return "NAND";
	        break;

	case 7423:


	        return "NAND";
	        break;

	case 7424:


	        return "2-IP NAND";
	        break;

	case 7425:


	        return "2-IP NOR";
	        break;

	case 7426:


	        return "2-IP NAND";
	        break;

	case 7427:


	        return "3-IP NOR";
	        break;

	case 7428:


	        return "2-IP NOR";
	        break;

	case 7429:


	        return "2-IP AND";
	        break;

	case 7430:


	        return "8-IP NAND";
	        break;

	case 7431:


	        return "BUFF 3-OP";
	        break;

	case 7432:


	        return "2-IP OR";
	        break;

	case 7433:


	        return "13-IP NAND Gate";
	        break;

	case 7434:


	        return "8 -IP NAND";
	        break;

	case 7435:


	        return "4-IP OR";
	        break;

	case 7436:


	        return "2-IP XOR";
	        break;

	case 7437:


	        return "2-IP NAND";
	        break;

	case 7438:


	        return "4-IP NAND";
	        break;

	case 7439:


	        return "2-IP NAND";
	        break;

	case 7440:


	        return "HEX INV";
	        break;
	case 7441:


	        return "BCD 2 DecDecr";
	        break;

	case 7442:


	        return "BCD 2 DecDecr";
	        break;

	case 7443:


	        return "DecDecr";
	        break;


	case 7444:


	        return "Gray to DecDecr";
	        break;

	case 7445:


	        return "BCD to DecDecr";
	        break;

	case 7446:


	        return "BCD2 7-SEG DEC";
	        break;

	case 7447:


	        return "BCD2 7-SEG DEC";
	        break;

	case 7448:


	        return "BCD2 7-SEG DEC";
	        break;

	case 7449:


	        return "BCD2 7-SEG DEC";
	        break;

	case 7450:


	        return "2 IP AND-OR-INV";
	        break;
	case 7468:


	        return "Dual 4 Bit Decade or Binary Counters";
	        break;

	case 7469:


	        return "Dual 4 Bit Decade or Binary Counters";
	        break;

	case 7470:


	        return "AND-Gated Positive Edge Triggered J-KFlip-Flop with Preset and Clear";
	        break;


	case 7472:


	        return "AND Gated J-KMaster-Slave Flip-Flop with Preset and Clear";
	        break;

	case 7473:


	        return "Dual J-KFlip-Flop with Clear";
	        break;

	case 7474:


	        return "Dual D Positive Edge Triggered Flip-Flop with Preset and Clear";
	        break;

	case 7475:


	        return "4-bit Bistable Latch";
	        break;

	case 7476:


	        return "Dual J-KFlip-Flop with Preset and Clear";
	        break;

	case 7477:


	        return "4-bit Bistable Latch";
	        break;
	}
	return "INVALID IC-CODE";




















	if (ic_code == 7400 || ic_code == 7403 || ic_code == 7424 || ic_code == 7426 || ic_code == 7437 || ic_code == 7438 ) {

	         GPIO_Mode_Change(IC_port,L1, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L3, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L10, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L8, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L12, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L13, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L11, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L4, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L6, GPIO_MODE_INPUT);

	int check = 1;
	        HAL_GPIO_WritePin(IC_port,L1, 0); HAL_GPIO_WritePin(IC_port,L2, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 0); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13, 0);
	        if ( (HAL_GPIO_ReadPin(IC_port,L3) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1) && (HAL_GPIO_ReadPin(IC_port,L11) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0); HAL_GPIO_WritePin(IC_port,L2, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 0); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13, 1);
	        if ((HAL_GPIO_ReadPin(IC_port,L3) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1) && (HAL_GPIO_ReadPin(IC_port,L11) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1); HAL_GPIO_WritePin(IC_port,L2, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 1); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0);
	        HAL_GPIO_WritePin(IC_port,L12, 1); HAL_GPIO_WritePin(IC_port,L13, 0);
	        if ((HAL_GPIO_ReadPin(IC_port,L3) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1) && (HAL_GPIO_ReadPin(IC_port,L11) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1); HAL_GPIO_WritePin(IC_port,L2, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 1); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1);
	        HAL_GPIO_WritePin(IC_port,L12, 1); HAL_GPIO_WritePin(IC_port,L13, 1);
	        if ((HAL_GPIO_ReadPin(IC_port,L3) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0) && (HAL_GPIO_ReadPin(IC_port,L11) == 0))
	            check = check;
	        else
	            check = 0;

	        ////Serial.println(check);
	        ////Serial.println(ic_code);
	    }





	/////////////////////////////////////////
	else if (ic_code == 7401) {

	         GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L3, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L1, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L6, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L4, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L8, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L10, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L11, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L12, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L13, GPIO_MODE_INPUT);



	        int check = 1;
	        HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L3, 0);
	        HAL_GPIO_WritePin(IC_port,L6, 0); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L8, 0);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L11, 0);
	        if ((HAL_GPIO_ReadPin(IC_port,L3) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L10) == 1) && (HAL_GPIO_ReadPin(IC_port,L13) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	       HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L3, 1);
	        HAL_GPIO_WritePin(IC_port,L6, 0); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L8, 1);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L11, 1);
	        if ((HAL_GPIO_ReadPin(IC_port,L1) == 1) && (HAL_GPIO_ReadPin(IC_port,L4) == 1) && (HAL_GPIO_ReadPin(IC_port,L10) == 1) && (HAL_GPIO_ReadPin(IC_port,L13) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L3, 0);
	        HAL_GPIO_WritePin(IC_port,L6, 1); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L8, 0);
	        HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L11,0);
	        if ((HAL_GPIO_ReadPin(IC_port,L1) == 1) && (HAL_GPIO_ReadPin(IC_port,L4) == 1) && (HAL_GPIO_ReadPin(IC_port,L10) == 1) && (HAL_GPIO_ReadPin(IC_port,L13) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L3, 1);
	        HAL_GPIO_WritePin(IC_port,L6, 1); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L8, 1);
	        HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L11,1);
	        if ((HAL_GPIO_ReadPin(IC_port,L1) == 0) && (HAL_GPIO_ReadPin(IC_port,L4) == 0) && (HAL_GPIO_ReadPin(IC_port,L10) == 0) && (HAL_GPIO_ReadPin(IC_port,L13) == 0))
	            check = check;
	        else
	            check = 0;

	        ////Serial.println(check);
	        ////Serial.println(ic_code);
	    }



	///////////////////////////////////////////////



	else if (ic_code == 7402 || ic_code == 7428 || ic_code == 7433) {

	         GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L3, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L1, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L6, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L4, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L8, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L10, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L11, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L12, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L13, GPIO_MODE_INPUT);

	        int check = 1;
	        HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L3, 0);
	        HAL_GPIO_WritePin(IC_port,L6, 0); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L8, 0);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L11, 0);
	        if ((HAL_GPIO_ReadPin(IC_port,L1) == 1) && (HAL_GPIO_ReadPin(IC_port,L4) == 1) && (HAL_GPIO_ReadPin(IC_port,L10) == 1) && (HAL_GPIO_ReadPin(IC_port,L13) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	       HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L3, 1);
	        HAL_GPIO_WritePin(IC_port,L6, 0); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L8, 1);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L11, 1);
	        if ((HAL_GPIO_ReadPin(IC_port,L1) == 0) && (HAL_GPIO_ReadPin(IC_port,L4) == 0) && (HAL_GPIO_ReadPin(IC_port,L10) == 0) && (HAL_GPIO_ReadPin(IC_port,L13) == 0))
	                    check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L3, 0);
	        HAL_GPIO_WritePin(IC_port,L6, 1); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L8, 0);
	        HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L11,0);
	       if ((HAL_GPIO_ReadPin(IC_port,L1) == 0) && (HAL_GPIO_ReadPin(IC_port,L4) == 0) && (HAL_GPIO_ReadPin(IC_port,L10) == 0) && (HAL_GPIO_ReadPin(IC_port,L13) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L3, 1);
	        HAL_GPIO_WritePin(IC_port,L6, 1); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L8, 1);
	        HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L11,1);
	        if ((HAL_GPIO_ReadPin(IC_port,L1) == 0) && (HAL_GPIO_ReadPin(IC_port,L4) == 0) && (HAL_GPIO_ReadPin(IC_port,L10) == 0) && (HAL_GPIO_ReadPin(IC_port,L13) == 0))
	            check = check;
	        else
	            check = 0;

	        ////Serial.println(check);
	        ////Serial.println(ic_code);
	    }



	////////////////////
	else if (ic_code == 7404 || ic_code == 7405 || ic_code == 7406 || ic_code == 7414 || ic_code == 7416 || ic_code == 7417 || ic_code == 7419 || ic_code == 7434) {
	        int check = 1;

	         GPIO_Mode_Change(IC_port,L1, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L2, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L3, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L4, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L6, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L8, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L11, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L10, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L13, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L12, GPIO_MODE_INPUT);


	        HAL_GPIO_WritePin(IC_port,L1, 0);
	        if (HAL_GPIO_ReadPin(IC_port,L2) == 1)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L3, 0);
	        if (HAL_GPIO_ReadPin(IC_port,L4) == 1)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L5, 0);
	        if (HAL_GPIO_ReadPin(IC_port,L6) == 1)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L9, 0);
	        if (HAL_GPIO_ReadPin(IC_port,L8) == 1)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L11, 0);
	        if (HAL_GPIO_ReadPin(IC_port,L10) == 1)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L13, 0);
	        if (HAL_GPIO_ReadPin(IC_port,L12) == 1)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L1, 1);
	        if (HAL_GPIO_ReadPin(IC_port,L2) == 0)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L3, 1);
	        if (HAL_GPIO_ReadPin(IC_port,L4) == 0)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L5, 1);
	        if (HAL_GPIO_ReadPin(IC_port,L6) == 0)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L9, 1);
	        if (HAL_GPIO_ReadPin(IC_port,L8) == 0)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L11, 1);
	        if (HAL_GPIO_ReadPin(IC_port,L10) == 0)
	            check = check;
	        else
	            check = 0;

	        HAL_GPIO_WritePin(IC_port,L13, 1);
	        if (HAL_GPIO_ReadPin(IC_port,L12) == 0)
	            check = check;
	        else
	            check = 0;

	        //Serial.println(check);
	        //Serial.println(ic_code);
	    }

	//////////////////////////////////////////////////////


	else if (ic_code == 7408 || ic_code == 7409) {

	         GPIO_Mode_Change(IC_port,L1, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L3, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L4, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L6, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L10, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L8, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L13, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L12, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L11, GPIO_MODE_INPUT);


	        int check = 1;
	        HAL_GPIO_WritePin(IC_port,L1, 0); HAL_GPIO_WritePin(IC_port,L2, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 0); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13, 0);
	         if ((HAL_GPIO_ReadPin(IC_port,L3) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0) && (HAL_GPIO_ReadPin(IC_port,L11) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0); HAL_GPIO_WritePin(IC_port,L2, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 0); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13, 1);
	 if ((HAL_GPIO_ReadPin(IC_port,L3) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0) && (HAL_GPIO_ReadPin(IC_port,L11) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1); HAL_GPIO_WritePin(IC_port,L2, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 1); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0);
	        HAL_GPIO_WritePin(IC_port,L12, 1); HAL_GPIO_WritePin(IC_port,L13, 0);
	         if ((HAL_GPIO_ReadPin(IC_port,L3) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0) && (HAL_GPIO_ReadPin(IC_port,L11) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1); HAL_GPIO_WritePin(IC_port,L2, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 1); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1);
	        HAL_GPIO_WritePin(IC_port,L12, 1); HAL_GPIO_WritePin(IC_port,L13, 1);
	        if ((HAL_GPIO_ReadPin(IC_port,L3) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1) && (HAL_GPIO_ReadPin(IC_port,L11) == 1))
	            check = check;
	        else
	            check = 0;

	        //Serial.println(check);
	        //Serial.println(ic_code);
	    }
	////////////////////////////
	// 3ip nand


	else if (ic_code == 7410 || ic_code == 7412) {

	         GPIO_Mode_Change(IC_port,L1, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L13, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L12, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L4, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L3, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L6, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L10, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L11, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L8, GPIO_MODE_INPUT);

	        int check = 1;
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        /////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        ////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        /////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        ////
	         HAL_GPIO_WritePin(IC_port,L1,1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        /////
	         HAL_GPIO_WritePin(IC_port,L1,1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        //Serial.println(check);
	        //Serial.println(ic_code);
	    }


	////////////////////


	else if (ic_code == 7411 || ic_code == 7415) {

	         GPIO_Mode_Change(IC_port,L1, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L13, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L12, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L4, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L3, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L6, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L10, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L11, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L8, GPIO_MODE_INPUT);

	        int check = 1;
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        /////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 0);

	    if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        /////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ////
	         HAL_GPIO_WritePin(IC_port,L1,1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        /////
	         HAL_GPIO_WritePin(IC_port,L1,1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        //Serial.println(check);
	        //Serial.println(ic_code);
	    }

	///////////////////////////////////////////////////////////////////////////////////////////////
	// 4 ip NAND

	else if (ic_code == 7413 || ic_code == 7418 || ic_code == 7420 || ic_code == 7422 || ic_code == 7440) {
	        int check = 1;

	         GPIO_Mode_Change(IC_port,L1, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L4, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L6, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L10, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L12, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L13, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L8, GPIO_MODE_INPUT);

	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4,  0);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4,  0);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        //////////////////////////////////////////////////////

	         HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2,0); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,0); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,0); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        //////////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	//////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4,  0);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,0); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        //////////////////////////////////////////////////////

	         HAL_GPIO_WritePin(IC_port,L1,1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        //////////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        //Serial.println(check);
	        //Serial.println(ic_code);
	    }

	 ///////////////////////////////////////////////////

	// Thaki gyo chu

	// 4 ip AND

	else if (ic_code == 7421) {

	         GPIO_Mode_Change(IC_port,L1, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L4, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L6, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L10, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L12, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L13, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L8, GPIO_MODE_INPUT);

	        int check = 1;

	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4,  0);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4,  0);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        //////////////////////////////////////////////////////

	         HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2,0); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,0); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,0); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        //////////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	//////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4,  0);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,0); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        //////////////////////////////////////////////////////

	         HAL_GPIO_WritePin(IC_port,L1,1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        //////////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,0);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        ///////////////////////////////////////////////////

	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5,1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L12,1); HAL_GPIO_WritePin(IC_port,L13,1);

	        if ((HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;

	        //Serial.println(check);
	        //Serial.println(ic_code);
	    }

	    //////////////////>>>>>>>>>>>><<<<<<<<<<>>>>>>>>>>>>>......./////////////

	else if (ic_code == 7427)
	    {


	         GPIO_Mode_Change(IC_port,L1, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L13, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L12, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L4, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L3, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L6, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L10, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L11, GPIO_MODE_OUTPUT_PP);   GPIO_Mode_Change(IC_port,L8, GPIO_MODE_INPUT);

	        int check = 1;
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        /////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ////
	        HAL_GPIO_WritePin(IC_port,L1, 0);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 0);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        /////
	        HAL_GPIO_WritePin(IC_port,L1, 1);  HAL_GPIO_WritePin(IC_port,L2, 0); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 0); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        ////
	         HAL_GPIO_WritePin(IC_port,L1,1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 0);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;
	        /////
	         HAL_GPIO_WritePin(IC_port,L1,1);  HAL_GPIO_WritePin(IC_port,L2, 1); HAL_GPIO_WritePin(IC_port,L13, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 1);  HAL_GPIO_WritePin(IC_port,L5, 1); HAL_GPIO_WritePin(IC_port,L3,  1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1); HAL_GPIO_WritePin(IC_port,L11, 1);

	        if ((HAL_GPIO_ReadPin(IC_port,L12) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0))
	            check = check;
	        else
	            check = 0;

	        //Serial.println(check);
	        //Serial.println(ic_code);
	    }
	///////////////////// .,;;',;.;...............'?/////??????????????/////////////



	else if (ic_code == 7432) {

	         GPIO_Mode_Change(IC_port,L1, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L2, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L3, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L5, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L4, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L6, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L10, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L9, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L8, GPIO_MODE_INPUT);
	         GPIO_Mode_Change(IC_port,L13, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L12, GPIO_MODE_OUTPUT_PP);  GPIO_Mode_Change(IC_port,L11, GPIO_MODE_INPUT);


	        int check = 1;
	        HAL_GPIO_WritePin(IC_port,L1, 0); HAL_GPIO_WritePin(IC_port,L2, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 0); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 0);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13, 0);
	         if ((HAL_GPIO_ReadPin(IC_port,L3) == 0) && (HAL_GPIO_ReadPin(IC_port,L6) == 0) && (HAL_GPIO_ReadPin(IC_port,L8) == 0) && (HAL_GPIO_ReadPin(IC_port,L11) == 0))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 0); HAL_GPIO_WritePin(IC_port,L2, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 0); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 0); HAL_GPIO_WritePin(IC_port,L10, 1);
	        HAL_GPIO_WritePin(IC_port,L12, 0); HAL_GPIO_WritePin(IC_port,L13, 1);
	 if ((HAL_GPIO_ReadPin(IC_port,L3) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1) && (HAL_GPIO_ReadPin(IC_port,L11) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1); HAL_GPIO_WritePin(IC_port,L2, 0);
	        HAL_GPIO_WritePin(IC_port,L4, 1); HAL_GPIO_WritePin(IC_port,L5, 0);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 0);
	        HAL_GPIO_WritePin(IC_port,L12, 1); HAL_GPIO_WritePin(IC_port,L13, 0);
	         if ((HAL_GPIO_ReadPin(IC_port,L3) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1) && (HAL_GPIO_ReadPin(IC_port,L11) == 1))
	            check = check;
	        else
	            check = 0;
	        ///////////////////////////////////////////////
	        HAL_GPIO_WritePin(IC_port,L1, 1); HAL_GPIO_WritePin(IC_port,L2, 1);
	        HAL_GPIO_WritePin(IC_port,L4, 1); HAL_GPIO_WritePin(IC_port,L5, 1);
	        HAL_GPIO_WritePin(IC_port,L9, 1); HAL_GPIO_WritePin(IC_port,L10, 1);
	        HAL_GPIO_WritePin(IC_port,L12, 1); HAL_GPIO_WritePin(IC_port,L13, 1);
	        if ((HAL_GPIO_ReadPin(IC_port,L3) == 1) && (HAL_GPIO_ReadPin(IC_port,L6) == 1) && (HAL_GPIO_ReadPin(IC_port,L8) == 1) && (HAL_GPIO_ReadPin(IC_port,L11) == 1))
	            check = check;
	        else
	            check = 0;

	        //Serial.println(check);
	        //Serial.println(ic_code);
	    }

}


