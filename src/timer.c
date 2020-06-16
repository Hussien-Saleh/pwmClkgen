#include "mcu.h"
#include "timer.h"

void timer0_init_pwm(uint8_t val){ 

    TCNT0 = 0x00; 
	OCR0  = val;   // compare value
	
	DDRB |= (1<<PB3); // OC0 as output pin --> pin where the PWM signal is generated from MC
	
	/*  timer control register configuration
	 *    Fast PWM Mode, Clock = F_CPU/8 
	 *    Clear OC0 on compare match   
	 */ 
    
	TCCR0 = ((1<<CS01)|(1<<COM01)|(1<<WGM00)|(1<<WGM01));

}