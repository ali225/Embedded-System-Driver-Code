/*
 * UART_AVR.c
 *
 *  Created on: Aug 2, 2018
 *      Author: My Ali Gamal
 */
#include "Types_AVR.h"
#include "LCD_AVR.h"
#include "Macros_AVR.h"
#include "DIO_AVR.h"
#include "Registers_AVR.h"
#define F_CPU 8000000UL
#include <avr/delay.h>

void UART_VidInit() {

	DIO_VidSetPinDirection(3, 0, 0);
	DIO_VidSetPinDirection(3, 1, 1);

	//Set_Bit(UBRRH,7);

	//Set_Bit(UBRRH,1);
	//Set_Bit(UBRRH,2);
	//Clr_Bit(UBRRH,3);
	//Clr_Bit(UBRRH,4);
	//Clr_Bit(UBRRH,5);
	//Clr_Bit(UBRRH,6);

	UBRRH = 0b10000110;
	Clr_Bit(UCSRA, 1);

	//Clr_Bit(UBRRH,7);

	//Clr_Bit(UBRRH,0);
	//Clr_Bit(UBRRH,1);
	//Clr_Bit(UBRRH,2);
	//Clr_Bit(UBRRH,3);

	UBRRH = 0;
	UBRRL = 51;

	Clr_Bit(UCSRB, 2);
	Set_Bit(UCSRB, 3);
	Set_Bit(UCSRB, 4);
}

void UART_Send(u8 Data) {

	UDR = Data;

	while (Get_Bit(UCSRA, 5) == 0) {

	}
}

//u8 UART_Receive()
