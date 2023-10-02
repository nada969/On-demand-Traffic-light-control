/*
 * dio.h
 *
 * Created: 12/11/2022 12:03:57 AM
 *  Author: Nada
 */ 



#ifndef DIO_H_
#define DIO_H_

#include "../register/register.h"
#include "../../utilities/define.h"

/* port name definition*/
#define portA 'A'
#define portB 'B'
#define portC 'C'
#define portD 'D'

/* pin number definition*/
#define pin0 0
#define pin1 1
#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7

/* LED colors definition*/
#define Red 0
#define Yellow_Before_Green 1
#define Green 2
#define Yellow_Before_Red 3

/* direction definition*/
#define IN 0
#define OUT 1

/* value definition*/
#define Low 0
#define High 1

typedef unsigned char uint8_t;

/* functions prototype */
////* if the pin input or output*////
EN_FunError DIO_Init( uint8_t pinNum, uint8_t portName, uint8_t direction );

////* if the pin high or low*////
EN_FunError DIO_write(uint8_t pinNum, uint8_t portName, uint8_t value);

////* read the input value and save it into pointer *////
EN_FunError DIO_read(uint8_t pinNum, uint8_t portName, uint8_t *inValue);

////* if the pin 0 make it 1 and reverse *////
EN_FunError DIO_toggle(uint8_t pinNum, uint8_t portName);


#endif /* DIO_H_ */