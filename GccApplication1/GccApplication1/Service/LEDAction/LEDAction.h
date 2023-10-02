/*
 * LEDAction.h
 *
 * Created: 12/14/2022 7:58:49 AM
 *  Author: Nada
 */ 


#include "../../ECUAL/LED/LED.h"
#include "../../MCAL/interrupt/interrupt.h"


#ifndef LEDAction_H_
#define LEDAction_H_


extern uint8_t Current_Color ;

EN_FunError LEDAction(uint8_t Current_Color);


#endif /* LEDAction_H_ */