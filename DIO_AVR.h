/*
 * DIO_AVR.h
 *
 *  Created on: Aug 2, 2018
 *      Author: My Ali Gamal
 */

#ifndef DIO_AVR_H_
#define DIO_AVR_H_

typedef enum{
		BASE_A,
		BASE_B,
		BASE_C,
		BASE_D
}genum_port_t;

void DIO_VidSetPortDirection(genum_port_t PortNumber, u8 Value);
void DIO_VidSetPortValue(genum_port_t PortNumber, u8 Value);

void DIO_VidSetPinDirection(genum_port_t PortNumber, u8 Pin, u8 Value);
void DIO_VidSetPinValue(genum_port_t PortNumber, u8 Pin, u8 Value);

u8 DIO_u8GetPortValue(genum_port_t Port);
u8 DIO_u8GetPinValue(genum_port_t Port, u8 Pin);

#endif /* DIO_AVR_H_ */
