/*
 * SPI_AVR.c
 *
 *  Created on: Aug 2, 2018
 *      Author: My ALi Gamal
 */

#include "SPI_AVR.h"
#include "Types_AVR.h"
#include "LCD_AVR.h"
#include "Macros_AVR.h"
#include "DIO_AVR.h"
#include "Registers_AVR.h"
#define F_CPU 8000000UL
#include <avr/delay.h>

void SPI_vidMasterInit()
{

	DIO_VidSetPinDirection(1,4,1);
	DIO_VidSetPinDirection(1,5,1);
	DIO_VidSetPinDirection(1,6,0);
	DIO_VidSetPinDirection(1,7,1);

	Clr_Bit(SPCR,0);
	Set_Bit(SPCR,1);
	Clr_Bit(SPCR,2);
	Clr_Bit(SPCR,3);
	Set_Bit(SPCR,4);    //Master Init
	Clr_Bit(SPCR,5);
	Set_Bit(SPCR,6);
	Clr_Bit(SPCR,7);

	Clr_Bit(SPSR,0);
	Clr_Bit(SPSR,7);

	SPDR=0;
}

void SPI_vidSlaveInit()
{
	DIO_VidSetPinDirection(1,4,0);
	DIO_VidSetPinDirection(1,5,0);
	DIO_VidSetPinDirection(1,6,1);
	DIO_VidSetPinDirection(1,7,0);

	Clr_Bit(SPCR,0);
	Set_Bit(SPCR,1);
	Clr_Bit(SPCR,2);
	Clr_Bit(SPCR,3);
	Clr_Bit(SPCR,4);    //Slave Init
	Clr_Bit(SPCR,5);
	Set_Bit(SPCR,6);
	Clr_Bit(SPCR,7);

	Clr_Bit(SPSR,0);
	Clr_Bit(SPSR,7);

	SPDR=0;
}

/*
u8 SPI_Transceiver(u8 Data)
{
	SPDR=Data;

	while(Get_Bit(SPSR,7)==0)
		{

		}

		return SPDR;

}
*/
