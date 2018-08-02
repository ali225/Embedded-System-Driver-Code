/*
 * DIO_AVR.h
 *
 *  Created on: Aug 2, 2018
 *      Author: My Ali Gamal
 */

#ifndef DIO_AVR_H_
#define DIO_AVR_H_

void DIO_VidSetPortDirection(u8 PortNumber, u8 Value);
void DIO_VidSetPortValue(u8 PortNumber, u8 Value);

void DIO_VidSetPinDirection(u8 PortNumber, u8 Pin, u8 Value);
void DIO_VidSetPinValue(u8 PortNumber, u8 Pin, u8 Value);

u8 DIO_u8GetPortValue(u8 Port);
u8 DIO_u8GetPinValue(u8 Port, u8 Pin);

#endif /* DIO_AVR_H_ */
