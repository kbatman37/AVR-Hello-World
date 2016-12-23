#include "macros.h"

// ---------------
//   Pin Defines  
// ---------------

////////////////////////////////////////////////////////////////////////////////////

#define LED1                     PD0
#define LED1_PORT                PORTD
#define LED1_PIN                 PIND
#define LED1_DDR                 DDRD
#define LED1_SET_OUTPUT          LED1_DDR |= _BV(LED1)
#define LED1_SET_INPUT           LED1_DDR &= ~_BV(LED1)
#define LED1_SET_HIGH            LED1_PORT |= _BV(LED1)
#define LED1_SET_LOW             LED1_PORT &= ~_BV(LED1)
#define LED1_TOGGLE              LED1_PORT ^= _BV(LED1)
#define LED1_IS_HIGH             (LED1_PIN & _BV(LED1))
#define LED1_IS_LOW              !(LED1_PIN & _BV(LED1))

#define LED2                     PD1
#define LED2_PORT                PORTD
#define LED2_PIN                 PIND
#define LED2_DDR                 DDRD
#define LED2_SET_OUTPUT          LED2_DDR |= _BV(LED2)
#define LED2_SET_INPUT           LED2_DDR &= ~_BV(LED2)
#define LED2_SET_HIGH            LED2_PORT |= _BV(LED2)
#define LED2_SET_LOW             LED2_PORT &= ~_BV(LED2)
#define LED2_TOGGLE              LED2_PORT ^= _BV(LED2)
#define LED2_IS_HIGH             (LED2_PIN & _BV(LED2))
#define LED2_IS_LOW              !(LED2_PIN & _BV(LED2))

#define LED3                     PD2
#define LED3_PORT                PORTD
#define LED3_PIN                 PIND
#define LED3_DDR                 DDRD
#define LED3_SET_OUTPUT          LED3_DDR |= _BV(LED3)
#define LED3_SET_INPUT           LED3_DDR &= ~_BV(LED3)
#define LED3_SET_HIGH            LED3_PORT |= _BV(LED3)
#define LED3_SET_LOW             LED3_PORT &= ~_BV(LED3)
#define LED3_TOGGLE              LED3_PORT ^= _BV(LED3)
#define LED3_IS_HIGH             (LED3_PIN & _BV(LED3))
#define LED3_IS_LOW              !(LED3_PIN & _BV(LED3))

#define LED4                     PD3
#define LED4_PORT                PORTD
#define LED4_PIN                 PIND
#define LED4_DDR                 DDRD
#define LED4_SET_OUTPUT          LED4_DDR |= _BV(LED4)
#define LED4_SET_INPUT           LED4_DDR &= ~_BV(LED4)
#define LED4_SET_HIGH            LED4_PORT |= _BV(LED4)
#define LED4_SET_LOW             LED4_PORT &= ~_BV(LED4)
#define LED4_TOGGLE              LED4_PORT ^= _BV(LED4)
#define LED4_IS_HIGH             (LED4_PIN & _BV(LED4))
#define LED4_IS_LOW              !(LED4_PIN & _BV(LED4))

#define POWER_LED                     PD4
#define POWER_LED_PORT                PORTD
#define POWER_LED_PIN                 PIND
#define POWER_LED_DDR                 DDRD
#define POWER_LED_SET_OUTPUT          POWER_LED_DDR |= _BV(POWER_LED)
#define POWER_LED_SET_INPUT           POWER_LED_DDR &= ~_BV(POWER_LED)
#define POWER_LED_SET_HIGH            POWER_LED_PORT |= _BV(POWER_LED)
#define POWER_LED_SET_LOW             POWER_LED_PORT &= ~_BV(POWER_LED)
#define POWER_LED_TOGGLE              POWER_LED_PORT ^= _BV(POWER_LED)
#define POWER_LED_IS_HIGH             (POWER_LED_PIN & _BV(POWER_LED))
#define POWER_LED_IS_LOW              !(POWER_LED_PIN & _BV(POWER_LED))

////////////////////////////////////////////////////////////////////////////////////

#define SWTCH1                     PB7
#define SWTCH1_PORT                PORTB
#define SWTCH1_PIN                 PINB
#define SWTCH1_DDR                 DDRB
#define SWTCH1_INTERUPT			PCMSK
#define SWTCH1_ENABLE_INTERUPT		SWTCH1_INTERUPT |= _BV(SWTCH1)
#define SWTCH1_SET_OUTPUT          SWTCH1_DDR |= _BV(SWTCH1)
#define SWTCH1_SET_INPUT           SWTCH1_DDR &= ~_BV(SWTCH1)
#define SWTCH1_SET_HIGH            SWTCH1_PORT |= _BV(SWTCH1)
#define SWTCH1_SET_LOW             SWTCH1_PORT &= ~_BV(SWTCH1)
#define SWTCH1_TOGGLE              SWTCH1_PORT ^= _BV(SWTCH1)
#define SWTCH1_IS_HIGH             (SWTCH1_PIN & _BV(SWTCH1))
#define SWTCH1_IS_LOW              !(SWTCH1_PIN & _BV(SWTCH1))

#define SWTCH2                     PB6
#define SWTCH2_PORT                PORTB
#define SWTCH2_PIN                 PINB
#define SWTCH2_DDR                 DDRB
#define SWTCH2_INTERUPT			PCMSK
#define SWTCH2_ENABLE_INTERUPT		SWTCH2_INTERUPT |= _BV(SWTCH2)
#define SWTCH2_SET_OUTPUT          SWTCH2_DDR |= _BV(SWTCH2)
#define SWTCH2_SET_INPUT           SWTCH2_DDR &= ~_BV(SWTCH2)
#define SWTCH2_SET_HIGH            SWTCH2_PORT |= _BV(SWTCH2)
#define SWTCH2_SET_LOW             SWTCH2_PORT &= ~_BV(SWTCH2)
#define SWTCH2_TOGGLE              SWTCH2_PORT ^= _BV(SWTCH2)
#define SWTCH2_IS_HIGH             (SWTCH2_PIN & _BV(SWTCH2))
#define SWTCH2_IS_LOW              !(SWTCH2_PIN & _BV(SWTCH2))

#define BUTTON1                     PB0
#define BUTTON1_PORT                PORTB
#define BUTTON1_PIN                 PINB
#define BUTTON1_DDR                 DDRB
#define BUTTON1_INTERUPT			PCMSK
#define BUTTON1_ENABLE_INTERUPT		BUTTON1_INTERUPT |= _BV(BUTTON1)
#define BUTTON1_SET_OUTPUT          BUTTON1_DDR |= _BV(BUTTON1)
#define BUTTON1_SET_INPUT           BUTTON1_DDR &= ~_BV(BUTTON1)
#define BUTTON1_SET_HIGH            BUTTON1_PORT |= _BV(BUTTON1)
#define BUTTON1_SET_LOW             BUTTON1_PORT &= ~_BV(BUTTON1)
#define BUTTON1_TOGGLE              BUTTON1_PORT ^= _BV(BUTTON1)
#define BUTTON1_IS_HIGH             (BUTTON1_PIN & _BV(BUTTON1))
#define BUTTON1_IS_LOW              !(BUTTON1_PIN & _BV(BUTTON1))

#define BUTTON2                     PB4
#define BUTTON2_PORT                PORTB
#define BUTTON2_PIN                 PINB
#define BUTTON2_DDR                 DDRB
#define BUTTON2_INTERUPT			PCMSK
#define BUTTON2_ENABLE_INTERUPT		BUTTON2_INTERUPT |= _BV(BUTTON2)
#define BUTTON2_SET_OUTPUT          BUTTON2_DDR |= _BV(BUTTON2)
#define BUTTON2_SET_INPUT           BUTTON2_DDR &= ~_BV(BUTTON2)
#define BUTTON2_SET_HIGH            BUTTON2_PORT |= _BV(BUTTON2)
#define BUTTON2_SET_LOW             BUTTON2_PORT &= ~_BV(BUTTON2)
#define BUTTON2_TOGGLE              BUTTON2_PORT ^= _BV(BUTTON2)
#define BUTTON2_IS_HIGH             (BUTTON2_PIN & _BV(BUTTON2))
#define BUTTON2_IS_LOW              !(BUTTON2_PIN & _BV(BUTTON2))

#define BUTTON3                     PB3
#define BUTTON3_PORT                PORTB
#define BUTTON3_PIN                 PINB
#define BUTTON3_DDR                 DDRB
#define BUTTON3_INTERUPT			PCMSK
#define BUTTON3_ENABLE_INTERUPT		BUTTON3_INTERUPT |= _BV(BUTTON3)
#define BUTTON3_SET_OUTPUT          BUTTON3_DDR |= _BV(BUTTON3)
#define BUTTON3_SET_INPUT           BUTTON3_DDR &= ~_BV(BUTTON3)
#define BUTTON3_SET_HIGH            BUTTON3_PORT |= _BV(BUTTON3)
#define BUTTON3_SET_LOW             BUTTON3_PORT &= ~_BV(BUTTON3)
#define BUTTON3_TOGGLE              BUTTON3_PORT ^= _BV(BUTTON3)
#define BUTTON3_IS_HIGH             (BUTTON3_PIN & _BV(BUTTON3))
#define BUTTON3_IS_LOW              !(BUTTON3_PIN & _BV(BUTTON3))

#define BUTTON4                     PB2
#define BUTTON4_PORT                PORTB
#define BUTTON4_PIN                 PINB
#define BUTTON4_DDR                 DDRB
#define BUTTON4_INTERUPT			PCMSK
#define BUTTON4_ENABLE_INTERUPT		BUTTON4_INTERUPT |= _BV(BUTTON4)
#define BUTTON4_SET_OUTPUT          BUTTON4_DDR |= _BV(BUTTON4)
#define BUTTON4_SET_INPUT           BUTTON4_DDR &= ~_BV(BUTTON4)
#define BUTTON4_SET_HIGH            BUTTON4_PORT |= _BV(BUTTON4)
#define BUTTON4_SET_LOW             BUTTON4_PORT &= ~_BV(BUTTON4)
#define BUTTON4_TOGGLE              BUTTON4_PORT ^= _BV(BUTTON4)
#define BUTTON4_IS_HIGH             (BUTTON4_PIN & _BV(BUTTON4))
#define BUTTON4_IS_LOW              !(BUTTON4_PIN & _BV(BUTTON4))
