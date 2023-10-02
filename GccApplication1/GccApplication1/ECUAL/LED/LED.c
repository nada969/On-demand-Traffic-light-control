/*
 * LED.c
 *
 * Created: 12/11/2022 10:52:02 PM
 *  Author: Nada
 */ 


#include "LED.h"

////* initial the pin for the led*////
void LED_Init( uint8_t pinNum, uint8_t portName){
	DIO_Init(pinNum,portName,OUT);
}

////* high the pin for the led*////
void LED_On(uint8_t pinNum, uint8_t portName){ 
	DIO_write(pinNum,portName,High);
}

////* off the pin for the led*////
void LED_Off(uint8_t pinNum, uint8_t portName){
	DIO_write(pinNum,portName,Low);
}

////* if led on make it off*////
void LED_Toggle(uint8_t pinNum, uint8_t portName){
	DIO_toggle(pinNum,portName);
}



