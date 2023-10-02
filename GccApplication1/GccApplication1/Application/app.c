/*
 * app.c
 *
 * Created: 12/19/2022 3:47:00 PM
 *  Author: Nada
 */ 

#include "app.h"


uint8_t Current_Color = 2;
int overFlow= 0 ;
int m = 0;


App_init(void){
	
	/////// push button
	Switch_Init(pin2, portD);

	//////// car LED
	LED_Init(pin0,portA);          ////Red LED
	LED_Init(pin1,portA);		  ////Yellow LED
	LED_Init(pin2,portA);        ////Green LED

	//////// person LED
	LED_Init(pin0,portB);          ////Red LED
	LED_Init(pin1,portB);		  ////Yellow LED
	LED_Init(pin2,portB);        ////Green LED


	/////// set Global interrupt
	sei();
	////////// sense rising
	MCUCR |= (1<<0) | (1<<1);
	///////// enable external interrupts...INT0(D2)
	GICR |= (1<<6);
	
	Timer_Init();


	
}


void App_Start(void){
	
	///////////////* normal mode */////////////
	while(Current_Color < 4)
	{
		LEDAction(Current_Color);	
	
	}
	Current_Color = 0;

}	




