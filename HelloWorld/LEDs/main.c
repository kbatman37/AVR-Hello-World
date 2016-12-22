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
	LED3_SET_OUTPUT;
	LED4_SET_OUTPUT;

	SWTCH1_SET_INPUT;
	SWTCH2_SET_INPUT;
	BUTTON1_SET_INPUT;
	BUTTON2_SET_INPUT;
	BUTTON3_SET_INPUT;
	BUTTON4_SET_INPUT;
	
	// set pull-up resistor
	SWTCH1_SET_HIGH;
	SWTCH2_SET_HIGH;
	BUTTON1_SET_HIGH;
	BUTTON2_SET_HIGH;
	BUTTON3_SET_HIGH;
	BUTTON4_SET_HIGH;

	// set interrupt for B1
	SWTCH1_ENABLE_INTERUPT;
	SWTCH2_ENABLE_INTERUPT;
	BUTTON1_ENABLE_INTERUPT;
	BUTTON2_ENABLE_INTERUPT;
	BUTTON3_ENABLE_INTERUPT;
	BUTTON4_ENABLE_INTERUPT;
	
	// globally enable interrupts
	ENABLE_INTERUPTS_GLOBALLY;
	sei();
}



ISR(PCINT_vect){
	
	if(SWTCH1_IS_LOW){
		if(SWTCH2_IS_LOW){

			cli();

			LED1_SET_LOW;
			LED2_SET_LOW;
			LED3_SET_LOW;
			LED4_SET_LOW;

			if(BUTTON1_IS_LOW){
				for(int i = 0 ; i < 2; i++){
				LED1_SET_HIGH;
				_delay_ms(300);
				LED1_SET_LOW;
				
				LED2_SET_HIGH;
				_delay_ms(300);
				LED2_SET_LOW;
				
				LED3_SET_HIGH;
				_delay_ms(300);
				LED3_SET_LOW;

				LED4_SET_HIGH;
				_delay_ms(300);
				LED4_SET_LOW;
				}
			}
			else
			if(BUTTON2_IS_LOW){
				for(int i = 0 ; i < 2; i++){				
				LED2_SET_HIGH;
				_delay_ms(300);
				LED2_SET_LOW;
				
				LED3_SET_HIGH;
				_delay_ms(300);
				LED3_SET_LOW;

				LED4_SET_HIGH;
				_delay_ms(300);
				LED4_SET_LOW;

				LED1_SET_HIGH;
				_delay_ms(300);
				LED1_SET_LOW;
				}
			}
			else
			if(BUTTON3_IS_LOW){
			for(int i = 0 ; i < 2; i++){
				LED3_SET_HIGH;
				_delay_ms(300);
				LED3_SET_LOW;

				LED4_SET_HIGH;
				_delay_ms(300);
				LED4_SET_LOW;

				LED1_SET_HIGH;
				_delay_ms(300);
				LED1_SET_LOW;
				
				LED2_SET_HIGH;
				_delay_ms(300);
				LED2_SET_LOW;
				}
			}
			else
			if(BUTTON4_IS_LOW){
			for(int i = 0 ; i < 2; i++){
				LED4_SET_HIGH;
				_delay_ms(300);
				LED4_SET_LOW;

				LED1_SET_HIGH;
				_delay_ms(300);
				LED1_SET_LOW;
				
				LED2_SET_HIGH;
				_delay_ms(300);
				LED2_SET_LOW;
				
				LED3_SET_HIGH;
				_delay_ms(300);
				LED3_SET_LOW;
				}
			}

			sei();

		}
		else{
			//debounce
			_delay_ms(100);

			if(BUTTON1_IS_LOW){
				LED1_TOGGLE;
			}
			
			if(BUTTON2_IS_LOW){
				LED2_TOGGLE;
			}

			if(BUTTON3_IS_LOW){
				LED3_TOGGLE;
			}

			if(BUTTON4_IS_LOW){
				LED4_TOGGLE;
			}
		}
	}
	else{
		if(SWTCH2_IS_LOW){
			LED1_SET_HIGH;
			LED2_SET_HIGH;
			LED3_SET_HIGH;
			LED4_SET_HIGH;

			if(BUTTON1_IS_LOW){
				LED1_SET_LOW;
			}
			else{
				LED1_SET_HIGH;
			}
			
			if(BUTTON2_IS_LOW){
				LED2_SET_LOW;
			}
			else{
				LED2_SET_HIGH;
			}

			if(BUTTON3_IS_LOW){
				LED3_SET_LOW;
			}
			else{
				LED3_SET_HIGH;
			}

			if(BUTTON4_IS_LOW){
				LED4_SET_LOW;
			}
			else{
				LED4_SET_HIGH;
			}
		}
		else{
			LED1_SET_LOW;
			LED2_SET_LOW;
			LED3_SET_LOW;
			LED4_SET_LOW;

			if(BUTTON1_IS_LOW){
				LED1_SET_HIGH;
			}
			else{
				LED1_SET_LOW;
			}
			
			if(BUTTON2_IS_LOW){
				LED2_SET_HIGH;
			}
			else{
				LED2_SET_LOW;
			}

			if(BUTTON3_IS_LOW){
				LED3_SET_HIGH;
			}
			else{
				LED3_SET_LOW;
			}

			if(BUTTON4_IS_LOW){
				LED4_SET_HIGH;
			}
			else{
				LED4_SET_LOW;
			}
		}
	}

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

