/*
 * main.c
 *
 *  Created on: Aug 2, 2018
 *      Author: My Ali Gamal
 */

#include <avr/delay.h>

#include "Types_AVR.h"
#include "LCD_AVR.h"
#include "Macros_AVR.h"
#include "DIO_AVR.h"
#include "Registers_AVR.h"
#include "SPI_AVR.h"
#define F_CPU 8000000UL

int main(void)
{

	//Operating as Master

	LCD_VidInit();
	SPI_vidMasterInit();

	DIO_VidSetPinValue(1,4,0);


	while(1)
	{
		//SPI_Transceiver(5);
		_delay_ms(1000);
		SPI_Transceiver(6);
		_delay_ms(1000);
	}



	//Operating as Slave


	LCD_VidInit();
	SPI_vidSlaveInit();

	while(1)
	{


		u8 x= SPI_Transceiver(60);
		LCD_VidSetPosition(0,0);
		LCD_VidWriteNumber(x);
	}



	return -1;
}
