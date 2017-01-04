/*
 * rainbowshift.h
 *
 * Created: 01.01.2017 20:43:57
 *  Author: Denis
 */ 


#ifndef RAINBOWSHIFT_H_
#define RAINBOWSHIFT_H_

#include </Users/Denis/Documents/Atmel Studio/ws2812b/ws2812b/effect.h>

unsigned char effect1[PIXELS][3] = {RED, ORANGE, YELLOW, GREEN, CYAN, BLUE, PURPLE};

void load(uint8_t counter)
{
	// shift with off-state
	if(counter>0)
		for(uint8_t i=0; i<counter; i++)
			SEND(0,0,0);
	// burn led with color from mask-array		
	SEND(effect1[counter][0],effect1[counter][1],effect1[counter][2]);
	// clean strip ahead of light
	for(uint8_t i=0; i < (PIXELS - counter); i++)
		SEND(0,0,0);
		_delay_ms(250);  	
}

void showRainbowShift(void) {
	unsigned char i, j, size = sizeof(effect1)/(PIXELS*POCK);char f = 0;
	
	for(j=0;j<PIXELS;j++) {
		load(j);       
	};
	
}

#endif /* RAINBOWSHIFT_H_ */
