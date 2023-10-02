/*
 * dio.h
 *
 * Created: 12/11/2022 12:04:09 AM
 *  Author: Nada
 */ 

#include "dio.h"

////* if the pin input or output*////
EN_FunError DIO_Init(uint8_t pinNum, uint8_t portName, uint8_t direction){
	switch(portName)
	{
		case portA:
			if( direction == IN){
				DDRA &= ~(1<<pinNum);
			}else if( direction == OUT){
				DDRA |= (1<<pinNum);
			}
			else{};
				return Valid;
		break;
			
		case portB:
			if( direction == IN){
				DDRB &= ~(1<<pinNum);
			}else if( direction == OUT){
				DDRB |= (1<<pinNum);
			}
			else{};
				return Valid;
		break;
			
		case portC:
			if( direction == IN){
				DDRC &= ~(1<<pinNum);
			}else if( direction == OUT){
				DDRC |= (1<<pinNum);
			}
			else{};
				return Valid;
		break;
			
		case portD:
			if( direction == IN){
				DDRD &= ~(1<<pinNum);
			}else if( direction == OUT){
				DDRD |= (1<<pinNum);
			}
			else{};
				return Valid;
		break;
		
		default:
			return Error;
		break;
	}
}

////* if the pin high or low*////
EN_FunError DIO_write(uint8_t pinNum, uint8_t portName, uint8_t value){
	switch(portName)
	{
		case portA:
		if( value == Low){
			PORTA &= ~(1<<pinNum);
		}else if( value == High){
			PORTA |= (1<<pinNum);
		}
		
		return Valid;
		break;
		
		case portB:
		if( value == Low){
			PORTB &= ~(1<<pinNum);
		}else if( value == High){
			PORTB |= (1<<pinNum);
		}
		
		return Valid;
		break;
		
		case portC:
		if( value == Low){
			PORTC &= ~(1<<pinNum);
		}else if( value == High){
			PORTC |= (1<<pinNum);
		}
		return Valid;
		break;
		
		case portD:
		if( value == Low){
			PORTD &= ~(1<<pinNum);
		}else if( value == High){
			PORTD |= (1<<pinNum);
		}
		return Valid;
		break;
		
		default:
			return Error;
		break;
	}
}

////* read the input value and save it into pointer *////
EN_FunError DIO_read(uint8_t pinNum, uint8_t portName, uint8_t *inValue){
	switch(portName){
		case portA:
			*inValue = (PINA & (1<<pinNum))>>pinNum;    /////// PIN for status of A 
			return Valid;
		break;
		case portB:
			*inValue = (PINB & (1<<pinNum))>>pinNum;
				return Valid;
		break;
		case portC:
			*inValue = (PINC & (1<<pinNum))>>pinNum;
					return Valid;
		break;
		case portD:
			*inValue = (PIND & (1<<pinNum))>>pinNum;
					return Valid;
		break;
		default:
			return Error;
		break;
	}
}

////* if the pin 0 make it 1 and reverse *////
EN_FunError DIO_toggle(uint8_t pinNum, uint8_t portName){
	
	switch (portName){
		case portA:
			PORTA ^= (1<<pinNum);	
			return Valid;
		break;
		
		case portB:
			PORTB ^= (1<<pinNum);
			return Valid;
		break;
		
		case portC:
			PORTC ^= (1<<pinNum);
			return Valid;
		break;
		
		case portD:
			PORTD ^= (1<<pinNum);
			return Valid;
		break;
		default: 
			return Error;
		break;
	}
}

