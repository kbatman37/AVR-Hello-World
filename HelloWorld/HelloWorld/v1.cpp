/*
 * HelloWorld.cpp
 *
 * Created: 12/12/2016 4:09:43 PM
 *  Author: daviklu
 */ 

// Basic version, turn an LED on

#include <avr/io.h>

// Some macros that make the code more readable
#define output_low(port,pin) port &= ~(1<<pin)
#define output_high(port,pin) port |= (1<<pin)
#define set_input(portdir,pin) portdir &= ~(1<<pin)
#define set_output(portdir,pin) portdir |= (1<<pin)

int main(void)
{
	// set port B2 to output
	set_output(DDRB,PB2);
	
    while(1)
    {
		// set port B2 to high
		output_high(PORTB,PB2);
    }
}