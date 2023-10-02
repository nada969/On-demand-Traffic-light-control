/*
 * switch.c
 *
 * Created: 12/11/2022 11:20:14 PM
 *  Author: Nada
 */ 

#include "switch.h"


////* initial the pin for the push button*////
void Switch_Init( uint8_t pinNum, uint8_t portName){
	DIO_Init(pinNum,portName,IN);
}


////* read the value of the pin of the push button*////
void Switch_On  (uint8_t pinNum, uint8_t portName, uint8_t *switchValue){
	DIO_read(pinNum,portName,switchValue);
	
}


