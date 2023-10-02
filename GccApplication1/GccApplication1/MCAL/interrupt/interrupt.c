/*
 * interrupt.c
 *
 * Created: 12/24/2022 9:42:34 PM
 *  Author: Nada
 */ 

#include "../interrupt/interrupt.h"

#define ISR(Int_Vect)void Int_Vect(void) __attribute__((signal,used));\
void Int_Vect(void)