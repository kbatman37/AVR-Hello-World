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

#define ENABLE_INTERUPTS_GLOBALLY GIMSK |= (1 << PCIE);
#define TRUE 1
#define FALSE 0
typedef unsigned char bool;

//volatile bool interuptSeen;

void Initialize()
{
	LED1_SET_OUTPUT;
	LED2_SET_OUTPUT;

	BUTTON1_SET_INPUT;
	BUTTON1_SET_HIGH; // set pull-up resistor

	BUTTON2_SET_INPUT;
	BUTTON2_SET_HIGH; // set pull-up resistor

	// set interrupt for B1
	BUTTON1_ENABLE_INTERUPT;
	BUTTON2_ENABLE_INTERUPT;
	ENABLE_INTERUPTS_GLOBALLY;
	sei();
}



ISR(PCINT_vect){
	cli();
	
	_delay_ms(500);

	if(BUTTON1_IS_LOW)
	{
		if(BUTTON2_IS_LOW){
			LED1_SET_HIGH;
			LED2_SET_HIGH;
		}
		else{
			LED1_SET_HIGH;
			LED2_SET_LOW;
		}
	}
	else
	{
		if(BUTTON2_IS_LOW){
			LED1_SET_LOW;
			LED2_SET_HIGH;
		}
		else{
			LED1_SET_LOW;
			LED2_SET_LOW;
		}
	}

	_delay_ms(500);
	LED1_SET_LOW;
	LED2_SET_LOW;
	
	sei();
}


int main(void)
{
	Initialize();
    /* Replace with your application code */
    while (1) 
    {
		sleep_mode();		
    }
}

