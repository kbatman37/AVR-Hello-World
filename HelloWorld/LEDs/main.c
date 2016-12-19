/*
 * LEDs.c
 *
 * Created: 12/18/2016 6:04:16 PM
 * Author : David
 */ 

// Standard AVR includes
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/eeprom.h>
#include <avr/pgmspace.h>
#include <avr/sleep.h>
#include <avr/wdt.h>
#include <avr/power.h>

// Standard includes
#include <stdlib.h>

// These are optional, but nice to have around.
// Feel free to comment them out if you don't use them.
#include "USART.h"
#include "macros.h"
#include "pinDefinitions.h"

#define F_CPU 1000000UL // we are specifying 1MHz clock frequency (as a unsigned long)

void Initialize()
{
	LED1_SET_OUTPUT;
	LED2_SET_OUTPUT;
	LED3_SET_OUTPUT;
	LED4_SET_OUTPUT;

	BUTTON1_SET_INPUT;
	BUTTON2_SET_INPUT;
	BUTTON3_SET_INPUT;
	BUTTON4_SET_INPUT;
}

int main(void)
{
	Initialize();

    /* Replace with your application code */
    while (1) 
    {
    }
}

