/*
 * Timer.c
 *
 * Created: 12/12/2022 9:19:35 PM
 *  Author: Nada
 */ 

#include "Timer.h"

//void Timer_Delay(int overFlow){
	//
		//////// normal mode
		//TCCR0 = 0x00;
		//////// initial value
		//TCNT0 |= (1<<3);
		//////// no prescaller
		//TCCR0 |= (1<<0);
//
	//
		//while(overFlow <= 19531){
			///////wait until the flag =1
			//while((TIFR & (1<<0) )== 0){};
			//////// make sure the counter =1
			//TIFR |= (1<<0);
						//
			//overFlow ++;
		//}
		//
	//
//}

void Timer_Init(void){
	
	//////////external interrupt ... timer 0
	TIMSK |= (1<<0);
	//////// 1024 prescaller
	//TCCR0 |= (1<<0) | (1<<3);
	TCCR0 |= (5<<0);
	//////// initial value
	TCNT0 |= (1<<3);
	
}

