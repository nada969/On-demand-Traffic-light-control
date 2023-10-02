/*
 * switch.h
 *
 * Created: 12/11/2022 11:20:26 PM
 *  Author: Nada
 */ 


#include "../LED/LED.h"

#ifndef SWITCH_H_
#define SWITCH_H_

void Switch_Init( uint8_t pinNum, uint8_t portName);

void Switch_On  (uint8_t pinNum, uint8_t portName, uint8_t *switchValue);




#endif /* SWITCH_H_ */