/*
 * Keypad_AVR.c
 *
 *  Created on: Aug 2, 2018
 *      Author: My Ali Gamal
 */

#include "Types_AVR.h"
#include "DIO_AVR.h"
#include "Keypad_AVR.h"
#include "Keypad_Cfg_AVR.h"
#define F_CPU 8000000UL
#include <avr/delay.h>

#ifndef KEYPAD_AVR_C_
#define KEYPAD_AVR_C_

void Keypad_vidInit(void) {
	DIO_VidSetPinDirection(Keypad_Port, R0, 0);
	DIO_VidSetPinValue(Keypad_Port, R0, 1);

	DIO_VidSetPinDirection(Keypad_Port, R1, 0);
	DIO_VidSetPinValue(Keypad_Port, R1, 1);

	DIO_VidSetPinDirection(Keypad_Port, R2, 0);
	DIO_VidSetPinValue(Keypad_Port, R2, 1);

	DIO_VidSetPinDirection(Keypad_Port, R3, 0);
	DIO_VidSetPinValue(Keypad_Port, R3, 1);

	DIO_VidSetPinDirection(Keypad_Port, C0, 1);
	DIO_VidSetPinDirection(Keypad_Port, C1, 1);
	DIO_VidSetPinDirection(Keypad_Port, C2, 1);
	DIO_VidSetPinDirection(Keypad_Port, C3, 1);
}

u8 Keypad_u8GetButtonStatus(u8 Button) {
	u8 Value = 0;
	u8 Row = Button / 4;
	u8 Col = Button % 4;
	u8 Real_Row[] = { R0, R1, R2, R3 };
	u8 Real_Col[] = { C0, C1, C2, C3 };

	DIO_VidSetPinValue(Keypad_Port, C0, 1);
	DIO_VidSetPinValue(Keypad_Port, C1, 1);
	DIO_VidSetPinValue(Keypad_Port, C2, 1);
	DIO_VidSetPinValue(Keypad_Port, C3, 1);

	DIO_VidSetPinValue(Keypad_Port, Real_Col[Col], 0);

	u8 x = DIO_u8GetPinValue(Keypad_Port, Real_Row[Row]);

	if (x == 0) {
		_delay_ms(10);

		if (x == 0) {
			Value = 1;
		}
	}

	return Value;

}

#endif /* KEYPAD_AVR_C_ */
