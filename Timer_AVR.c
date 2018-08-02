/*
 * Timer_AVR.c
 *
 *  Created on: Aug 2, 2018
 *      Author: My Ali Gamal
 */

#include "Types_AVR.h"
#include"Macros_AVR.h"
#include<avr/delay.h>
#include"Registers_AVR.h"
#include<avr/delay.h>
void (*GB)(void);
void TimerVidInt()
{
	TCCR0=0b00000100;
	Set_Bit(TIMSK,0);
	Set_Bit(SREG,7);
	DIO_vidSetPinDirection(0,0,1);

}

void delivery(void(*ptr)(void))
{
	GB=ptr;
}

#define __INTR_ATTRS used, externally_visible

void __vector_11 (void) __attribute__ ((signal,__INTR_ATTRS)) ;
void __vector_11 (void)
{
GB();
}
