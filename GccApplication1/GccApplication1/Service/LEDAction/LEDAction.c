/*
 * LEDAction.c
 *
 * Created: 12/14/2022 7:58:35 AM
 *  Author: Nada
 */ 

#include "LEDAction.h"

uint8_t Current_Color;

EN_FunError LEDAction(uint8_t Current_Color){

	//////////* turn on the Red LED for cars  */////////////
	//////////* turn on the Green LED for pedestrian  */////////////
	//////////* turn off the other LEDs  */////////////
	if(Current_Color== Red)              
	{
			
		LED_Off(pin2,portA);
		LED_Off(pin1,portA);
		LED_On(pin0,portA);

		LED_Off(pin0,portB);
		LED_Off(pin1,portB);
		LED_On(pin2,portB);
	
		//Timer_Delay( overFlow);
		
		return Valid;
		
	}
	
	//////////* turn on the Yellow LED for cars  */////////////
	//////////* turn on the Yellow LED for pedestrian  */////////////
	//////////* turn off the other LEDs  */////////////
	else if (Current_Color== Yellow_Before_Green )
	{
			LED_Off(pin0,portA);
			LED_Off(pin2,portA);

			LED_Off(pin0,portB);
			LED_Off(pin2,portB);
	
			return Valid;
	}
		
	//////////* turn on the Green LED for cars  */////////////
	//////////* turn on the Red LED for pedestrian  */////////////
	//////////* turn off the other LEDs  */////////////
	else if(Current_Color== Green)       
	{
		LED_Off(pin0,portA);
		LED_Off(pin1,portA);
		

		LED_Off(pin1,portB);
		LED_Off(pin2,portB);
		
		LED_On(pin2,portA);
		LED_On(pin0,portB);
			
		//Timer_Delay( overFlow);
		
		return Valid;
		
	}
		
	//////////* turn on the Yellow LED for cars  */////////////
	//////////* turn on the Yellow LED for pedestrian  */////////////
	//////////* turn off the other LEDs  */////////////
	else if ( Current_Color== Yellow_Before_Red )     
	{
		
		LED_Off(pin0,portA);
		LED_Off(pin2,portA);

		LED_Off(pin0,portB);
		LED_Off(pin2,portB);
		
		return Valid;
	}
	else
	{
		return Error;
	}
		

}

//void Delay(int overFlow, int m){
	//
	//LEDAction(Current_Color);
	//
	//if (Current_Color == Red || Green)
	//{
		//while(m < 10){       //////// 10* 0.5sec = 5sec
			//Timer_Blink(overFlow);   ///////every 0.5 sec
			//m++;
		//}
		//}else {
		//
		//while(m < 10){       //////// 10* 0.5sec = 5sec
			//LED_Toggle(pin1,portA);
			//LED_Toggle(pin1,portC);
			//Timer_Blink(overFlow);   ///////every 0.5 sec
			//m++;
		//}
		//
	//}
	//
//}



