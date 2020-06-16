/*
a program to generate a 500Hz clock using pulse width modulation.
  Requirements:
• Configure the μC control with internal 1Mhz Clock.
• Use Timer0 in PWM with clock F_CPU/8
• Clock duty cycle is 50%.
• Clock duty cycle is 25%.
 */ 

#include "mcu.h"

int main(void)
{
    timer0__init_pwm(128);  // 50% duty cycle
	_delay_ms(3000);        // 3 seconds dela
	timer0_init_pwm(64);    // 25% duty cycle
	
	for(;;);
}
