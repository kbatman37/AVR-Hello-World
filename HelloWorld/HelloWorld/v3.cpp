/*
 * HelloWorld.cpp
 *
 * Created: 12/12/2016 4:09:43 PM
 *  Author: daviklu
 */ 

// Define macros, set LED based on button

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL // we are specifying 1MHz clock frequency (as a unsigned long)

#define LED_ON		PINB |= (1 << PINB5)
#define LED_OFF		PINB &= ~(1 << PINB5)
#define LED_TOGGLE	PINB |= (1 << PINB5)

int main(void)
{
	// set port B2 to output
	DDRB |= (1 << DDB2);
	
	// set port B1 to input
	DDRB &= ~(1 << DDB1);
	
    while(1)
    {
		if(!(PINB & (1<<PINB1))) // if B1 is low
		{
			LED_ON;
		}
		else{
			LED_OFF;	
		}
    }
}