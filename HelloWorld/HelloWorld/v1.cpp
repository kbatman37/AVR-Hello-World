/*
 * HelloWorld.cpp
 *
 * Created: 12/12/2016 4:09:43 PM
 *  Author: daviklu
 */ 

// Basic version, turn an LED on

#include <avr/io.h>

int main1(void)
{
	// set port B2 to output
	DDRB |= (1 << DDB2);
	
    while(1)
    {
		// set port B2 to high
		PORTB |= (1 << PORTB5);
    }
}