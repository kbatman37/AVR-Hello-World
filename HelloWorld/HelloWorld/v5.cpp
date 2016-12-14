/*
 * HelloWorld.cpp
 *
 * Created: 12/12/2016 4:09:43 PM
 *  Author: daviklu
 */ 

// Introducing sleep

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>

#define F_CPU 1000000UL // we are specifying 1MHz clock frequency (as a unsigned long)

#define LED_ON			PINB |= (1 << PINB5)
#define LED_OFF			PINB &= ~(1 << PINB5)
#define LED_TOGGLE		PINB |= (1 << PINB5)
#define SWITCH_PRESSED	!(PINB & (1<<PINB1))

// the handler for the interrupt of pin1
ISR(PCINT1_vect){
	if(SWITCH_PRESSED) // if B1 is low
	{
		LED_ON;
	}
	else
	{
		LED_OFF;
	}
}

// the main function
int main(void)
{
	// set port B2 to output
	DDRB |= (1 << DDB2);
	
	// set port B1 to input
	DDRB &= ~(1 << DDB1);
	
	// Set the sleep mode so that when it sleeps it powers down
	set_sleep_mode(SLEEP_MODE_PWR_DOWN);
	
	// set interrupt for B1
	PCMSK |= (1 << PCINT1);
	
	// turn on interrupts globally
	sei();
	
    while(1)
    {
		// Tell it to sleep
		sleep_mode();
    }
}