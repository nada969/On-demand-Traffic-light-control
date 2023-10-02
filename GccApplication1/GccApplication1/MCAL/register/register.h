/*
 * register.h
 *
 * Created: 12/18/2022 12:56:35 AM
 *  Author: nada
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_


/* define port A */
#define PORTA *((volatile uint8_t*)0X3B)
#define DDRA *((volatile uint8_t*)0X3A)
#define PINA *((volatile uint8_t*)0X39)

/* define port B */
#define PORTB *((volatile uint8_t*)0X38)
#define DDRB *((volatile uint8_t*)0X37)
#define PINB *((volatile uint8_t*)0X36)

/* define port C */
#define PORTC *((volatile uint8_t*)0X35)
#define DDRC *((volatile uint8_t*)0X34)
#define PINC *((volatile uint8_t*)0X33)

/* define port D */
#define PORTD *((volatile uint8_t*)0X32)
#define DDRD *((volatile uint8_t*)0X31)
#define PIND *((volatile uint8_t*)0X30)


/* define delay timer register */
#define TCCR0 *((volatile uint8_t*)0X53)
#define TCNT0 *((volatile uint8_t*)0X52)
#define TIFR *((volatile uint8_t*)0X58)

/* define blink timer register */
#define TCCR2 *((volatile uint8_t*)0X45)
#define TCNT2 *((volatile uint8_t*)0X44)

/* define interrupt register */
#define MCUCR *((volatile uint8_t*)0X55)
#define GICR *((volatile uint8_t*)0X5B)
#define TIMSK *((volatile uint8_t*)0X59)


#endif /* REGISTER_H_ */