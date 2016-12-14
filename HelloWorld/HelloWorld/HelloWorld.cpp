/*
 * HelloWorld.cpp
 *
 * Created: 12/12/2016 4:09:43 PM
 *  Author: daviklu
 */ 

// Basic version, turn an LED on

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL // we are specifying 1MHz clock frequency (as a unsigned long)

// Some macros that make the code more readable
#define output_low(port,pin) port &= ~(1<<pin)
#define output_high(port,pin) port |= (1<<pin)
#define set_input(portdir,pin) portdir &= ~(1<<pin)
#define set_output(portdir,pin) portdir |= (1<<pin)

int main(void)
{
	// set pin to output
	set_output(DDRB,PB4);
	
    while(1)
    {
		// set pin high
		output_high(PORTB,PB4);

		// delay
		_delay_ms(1000);

		// set pin low
		output_low(PORTB,PB4);

		// delay
		_delay_ms(1000);
    }
}