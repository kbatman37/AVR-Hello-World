#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>

#define F_CPU 1000000UL // we are specifying 1MHz clock frequency (as a unsigned long)

// Some macros that make the code more readable
#define output_low(port,pin) port &= ~(1<<pin)
#define output_high(port,pin) port |= (1<<pin)
#define set_input(portdir,pin) portdir &= ~(1<<pin)
#define set_output(portdir,pin) portdir |= (1<<pin)
#define enableInterupt(port,pin) port |= (1 << pin);
#define isInputLow(port,pin) !(port & (1<<pin))
#define enableInteruptsGlobally() GIMSK |= (1 << PCIE);

// the handler for the interrupt of pin1
ISR(PCINT_vect){
	if(isInputLow(PINB,PB1))
	{
		output_high(PORTB,PB4);
	}
	else
	{
		output_low(PORTB,PB4);
	}
}

int main(void)
{
	// set pin to output
	set_output(DDRB,PB4);
	
	// set port B1 to input
	set_input(DDRB, PB1);
	
	// Set the sleep mode so that when it sleeps it powers down
	set_sleep_mode(SLEEP_MODE_PWR_DOWN);
	
	// set interrupt for B1
	enableInterupt(PCMSK,PB1);
	enableInteruptsGlobally();

	// turn on interrupts globally
	sei();
	
	while(1)
	{
		// Tell it to sleep
		//sleep_mode();
	}
}