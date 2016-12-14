/*
 * HelloWorld.cpp
 *
 * Created: 12/12/2016 4:09:43 PM
 *  Author: daviklu
 */ 

// Blink an LED

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL // we are specifying 1MHz clock frequency (as a unsigned long)

int main(void)
{
	// set port B2 to output
	DDRB |= (1 << DDB2);
	
    while(1)
    {
		// toggle the value of B2
		PINB |= (1 << PINB5);
		
		// delay 500ms (requires F_CPU to be defined)
		// found in util/delay.h
		_delay_ms(500);
    }
}