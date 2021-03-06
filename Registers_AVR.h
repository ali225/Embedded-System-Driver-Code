/*
 * Registers_AVR.h
 *
 *  Created on: Aug 2, 2018
 *      Author: My
 */

#ifndef REGISTERS_AVR_H_
#define REGISTERS_AVR_H_

#define DDRA *((volatile u8*)0X3A)
#define PORTA *((volatile u8*)0X3B)
#define PINA *((volatile u8*)0X39)

#define DDRB *((volatile u8*)0X37)
#define PORTB *((volatile u8*)0X38)
#define PINB *((volatile u8*)0X36)

#define DDRC *((volatile u8*)0X34)
#define PORTC *((volatile u8*)0X35)
#define PINC *((volatile u8*)0X33)

#define DDRD *((volatile u8*)0X31)
#define PORTD *((volatile u8*)0X32)
#define PIND *((volatile u8*)0X30)


#define SREG    *((volatile u8*) 0x5F)
#define SPH     *((volatile u8*) 0x5E)
#define SPL     *((volatile u8*) 0x5D)
#define OCR0    *((volatile u8*) 0x5C)
#define GICR    *((volatile u8*) 0x5B)
#define GIFR    *((volatile u8*) 0x5A)
#define TIMSK   *((volatile u8*) 0x59)
#define TIFR    *((volatile u8*) 0x58)
#define SPMCR   *((volatile u8*) 0x57)
#define TWCR    *((volatile u8*) 0x56)
#define MCUCR   *((volatile u8*) 0x55)
#define MCUCSR  *((volatile u8*) 0x54)
#define TCCR0   *((volatile u8*) 0x53)
#define TCNT0   *((volatile u8*) 0x52)
#define OSCCAL  *((volatile u8*) 0x51)
#define SFIOR   *((volatile u8*) 0x50)
#define TCCR1A  *((volatile u8*) 0x4F)
#define TCCR1B  *((volatile u8*) 0x4E)
#define TCNT1H  *((volatile u8*) 0x4D)
#define TCNT1L  *((volatile u8*) 0x4C)
#define OCR1AH  *((volatile u8*) 0x4B)
#define OCR1AL  *((volatile u8*) 0x4A)
#define OCR1BH  *((volatile u8*) 0x49)
#define OCR1BL  *((volatile u8*) 0x48)
#define ICR1   *((volatile u16*) 0x46)
#define TCCR2   *((volatile u8*) 0x45)
#define TCNT2   *((volatile u8*) 0x44)
#define OCR2    *((volatile u8*) 0x43)
#define ASSR    *((volatile u8*) 0x42)
#define WDTCR   *((volatile u8*) 0x41)
#define UBRRH   *((volatile u8*) 0x40)
#define EEARH   *((volatile u8*) 0x3F)
#define EEARL   *((volatile u8*) 0x3E)
#define SPDR    *((volatile u8*) 0x2F)
#define SPSR    *((volatile u8*) 0x2E)
#define SPCR    *((volatile u8*) 0x2D)
#define UDR     *((volatile u8*) 0x2C)
#define UCSRA   *((volatile u8*) 0x2B)
#define UCSRB   *((volatile u8*) 0x2A)
#define UBRRL   *((volatile u8*) 0x29)
#define ACSR    *((volatile u8*) 0x28)
#define ADMUX   *((volatile u8*) 0x27)
#define ADCSRA  *((volatile u8*) 0x26)
#define ADCH    *((volatile u8*) 0x25)
#define ADCL    *((volatile u8*) 0x24)
#define TWDR    *((volatile u8*) 0x23)
#define TWAR    *((volatile u8*) 0x22)
#define TWSR    *((volatile u8*) 0x21)
#define TWBR    *((volatile u8*) 0x20)


#endif /* REGISTERS_AVR_H_ */
