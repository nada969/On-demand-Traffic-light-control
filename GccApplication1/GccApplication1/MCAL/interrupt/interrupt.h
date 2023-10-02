/*
 * interrupt.h
 *
 * Created: 12/18/2022 12:57:58 AM
 *  Author: nada
 */ 

#include "../register/register.h"
#include "../Timer/Timer.h"

#ifndef INTERRUPT_H_
#define INTERRUPT_H_


///////external interrupt request ... switch
#define INT0 __vector_1

///////external interrupt request ... timer 0
#define Timer_0_OVF __vector_11

///////// enable global interrupts
#define sei() __asm__ __volatile__ ("sei" ::: "memory")
#define cli() __asm__ __volatile__ ("cli" ::: "memory")

////////ISR function when interrupt occur
#define ISR(Int_Vect)void Int_Vect(void) __attribute__((signal,used));\
void Int_Vect(void)


#endif /* INTERRUPT_H_ */