/*
 * CarLED.h
 *
 * Created: 12/11/2022 10:51:48 PM
 *  Author: Nada
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/Timer/Timer.h"

/* functions prototype */
////* initial the pin for the led*////
void LED_Init( uint8_t pinNum, uint8_t portName);

////* high the pin for the led*////
void LED_On(uint8_t pinNum, uint8_t portName);

////* off the pin for the led*////
void LED_Off(uint8_t pinNum, uint8_t portName);

////* if led on make it off*////
void LED_Toggle(uint8_t pinNum, uint8_t portName);


#endif /* CARLED_H_ */