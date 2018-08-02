################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO_AVR.c \
../Keypad_AVR.c \
../LCD_4bit_AVR.c \
../LCD_AVR.c \
../SPI_AVR.c \
../Timer_AVR.c \
../UART_AVR.c \
../main.c 

OBJS += \
./DIO_AVR.o \
./Keypad_AVR.o \
./LCD_4bit_AVR.o \
./LCD_AVR.o \
./SPI_AVR.o \
./Timer_AVR.o \
./UART_AVR.o \
./main.o 

C_DEPS += \
./DIO_AVR.d \
./Keypad_AVR.d \
./LCD_4bit_AVR.d \
./LCD_AVR.d \
./SPI_AVR.d \
./Timer_AVR.d \
./UART_AVR.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


