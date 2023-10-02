/*
 * GccApplication1.c
 *
 * Created: 12/10/2022 1:50:41 AM
 * Author : Nada
 */ 


#include "Application/app.h"

int Counter_Timer = 0;

int main(void)
{
	App_init();
	while (1) 
    {
		
		App_Start();
			
	}	

}


//////////////* push button interrupt *///////////////
int count = 0;
ISR(INT0)

{
	
	if ( Counter_Timer >= 6 )								///////* avoid double click *///////
	{
		
		if ( Current_Color == Red)
		{
			Current_Color=0;     ////////// be Yellow_Before_Red
			TCNT0 |= (1<<3);
			Counter_Timer = 0;
		}
		else if ( Current_Color == Yellow_Before_Green)
		{
			Current_Color=3;     ////////// be Yellow_Before_Red
			TCNT0 |= (1<<3);
			Counter_Timer = 0;
		}
		else if ( Current_Color == Green)
		{
			
			Current_Color=3;     ////////// convert to Yellow_Before_Red
			TCNT0 |= (1<<3);
			Counter_Timer = 0;
		}
		else if ( Current_Color == Yellow_Before_Red)
		{
			Current_Color=3;     ////////// be Yellow_Before_Red
			TCNT0 |= (1<<3);
			Counter_Timer = 0;
		}
		
	}
		
		
		
}

////////////////* Timer interrupt *///////////////
ISR(Timer_0_OVF){
	Counter_Timer ++;      //////every overflow (0.2s)
	
	///////* change color every 5sec *///////
	if (Counter_Timer == 20)       /////after 5 sec
	{
		Counter_Timer = 0;
		Current_Color ++;
	}
	
	///////* blink the yellow color every 0.4sec *///////
	if (Current_Color==1 || 3)
	{
		if ( (Counter_Timer%2) == 0)
		{
			DIO_toggle(1,portA);
			DIO_toggle(1,portB);
		}
	}
	

	
	
	
}



