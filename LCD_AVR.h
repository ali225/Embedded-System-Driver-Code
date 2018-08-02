/*
 * LCD_AVR.h
 *
 *  Created on: Aug 2, 2018
 *      Author: My ALi Gamal
 */

#ifndef LCD_AVR_H_
#define LCD_AVR_H_

void LCD_VidWriteCharacter(u8 data);
void LCD_VidWriteCommand(u8 data);
void LCD_VidInit();
void LCD_VidWriteString(u8 * arr);
void LCD_VidSetPosition(u8 X, u8 Y);
void LCD_VidWriteNumber(u64 Number);

#endif /* LCD_AVR_H_ */
