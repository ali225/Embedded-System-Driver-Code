/*
 * I2C_AVR.c
 *
 *  Created on: Aug 3, 2018
 *      Author: My ALi Gamal
 */
#include "Types_AVR.h"
#include "Registers_AVR.h"
#define   prescaler 1 // 1 4 16 64
#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 8000000UL

void I2C_Inint(u64 SCL_Clock) {
	TWBR = (u8) (((F_CPU / SCL_Clock) - 16) / (2 * prescaler));
	if (prescaler == 0)
		TWSR = 0;
	else if (prescaler == 4)
		TWSR = 1;
	else if (prescaler == 16)
		TWSR = 2;
	else if (prescaler == 64)
		TWSR = 3;
	
}

void I2C_Start(void) {
	TWCR = (1 << TWINT) | (1 << TWEN) | (1 << TWSTA);
	while (((TWCR & (1 << 7)) == 0))
		;	 	// wait to finish
	while ((TWSR) != 0x08)
		; // start condition has been transmitted
}

void I2C_Write(u8 cByte) {
	TWDR = cByte;
	TWCR = (1 << TWINT) | (1 << TWEN);
	while ((TWCR & 0x80) == 0)
		; // wait to finish
}

void I2C_Stop() {
	TWCR = (1 << TWINT) | (1 << TWEN) | (1 << TWSTO);
}

void I2C_Set_Address(u8 address) {
	TWAR = address;
}

u8 I2C_Read(u8 ack) {
	u8 x = 0;
	TWCR = (1 << TWINT) | (1 << TWEN) | (ack << TWEA);
	while ((TWCR & 1 << 7) == 0)
		;
	while ((TWCR) != 0x60)
		x = TWSR; // own SLA + w(0) has been transmitted and ack has been returned
	TWCR = (1 << TWINT) | (1 << TWEN) | (ack << TWEA);
	while ((TWCR & 1 << 7) == 0)
		;
	while ((TWCR) != 0x80)
		x = TWSR; 	// Data has been transmitted and ack has been returned

	return TWDR;
}
