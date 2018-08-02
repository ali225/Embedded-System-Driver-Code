/*
 * DIO_AVR.c
 *
 *  Created on: Aug 2, 2018
 *      Author: My Ali Gamal
 */
#include "Types_AVR.h"
#include "Registers_AVR.h"
#include "Macros_AVR.h"
#include "DIO_AVR.h"

void DIO_vidSetPortDirerection(u8 Port, u8 value) {
	switch (Port) {
	case 0:
		DDRA = value;
		break;
	case 1:
		DDRB = value;
		break;
	case 2:
		DDRC = value;
		break;
	case 3:
		DDRD = value;
		break;

	}
}

void DIO_vidSetPortValue(u8 Port, u8 value) {
	switch (Port) {
	case 0:
		PORTA = value;
		break;
	case 1:
		PORTB = value;
		break;
	case 2:
		PORTC = value;
		break;
	case 3:
		PORTD = value;
		break;

	}
}
void DIO_vidSetPinDirerection(u8 Port, u8 Pin, u8 value) {
	switch (Port) {
	case 0:
		if (value == 1)
			SET_BIT(PORTA, Pin);
		else if (value == 0)
			Clr_Bit(PORTA,Pin);
		break;
	case 1:
		if (value == 1)
			set_bit(PORTB, Pin);
		else if (value == 0)
			clr_bit(PORTB, Pin);
		break;
	case 2:
		if (value == 1)
			set_bit(PORTC, Pin);
		else if (value == 0)
			clr_bit(PORTC, Pin);
		break;
	case 3:
		if (value == 1)
			set_bit(PORTD, Pin);
		else if (value == 0)
			clr_bit(PORTD, Pin);
		break;

	}
}
void DIO_vidSetPinValue(u8 Port, u8 Pin, u8 value) {
	switch (Port) {
	case 0:
		if (value == 1)
			set_bit(DDRA, Pin);
		else if (value == 0)
			clr_bit(DDRA, Pin);
		break;
	case 1:
		if (value == 1)
			set_bit(DDRB, Pin);
		else if (value == 0)
			clr_bit(DDRB, Pin);
		break;
	case 2:
		if (value == 1)
			set_bit(DDRC, Pin);
		else if (value == 0)
			clr_bit(DDRC, Pin);
		break;
	case 3:
		if (value == 1)
			set_bit(DDRD, Pin);
		else if (value == 0)
			clr_bit(DDRD, Pin);
		break;

	}
}
u8 DIO_u8ReadPortValue(u8 Port) {
	u8 value;
	switch (value) {
	case 0:
		value = PINA;
		break;
	case 1:
		value = PINB;
		break;
	case 2:
		value = PINC;
		break;
	case 3:
		value = PIND;
		break;
	}

	return value;
}
