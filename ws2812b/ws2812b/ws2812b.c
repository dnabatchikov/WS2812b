/*
 * ws2812b.c
 *
 * Created: 01.01.2017 13:27:14
 *  Author: Denis
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/delay.h>
#include </Users/Denis/Documents/Atmel Studio/ws2812b/ws2812b/effects/rainbowshift.h>
#include </Users/Denis/Documents/Atmel Studio/ws2812b/ws2812b/effects/rainbowfill.h>
 


int main(void)
{
    DDRD = 0xFF;
	
    asm volatile("cli");
	while(1) {	
       	showRainbowShift();
		showRainbowFill();   	
        
	}       
}