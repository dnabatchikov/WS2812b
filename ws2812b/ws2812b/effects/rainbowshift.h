/*
 * rainbowshift.h
 *
 * Created: 01.01.2017 20:43:57
 *  Author: Denis
 */ 


#ifndef RAINBOWSHIFT_H_
#define RAINBOWSHIFT_H_

#include </Users/Denis/Documents/Atmel Studio/ws2812b/ws2812b/effect.h>

unsigned char effect1[][7][3] = {
			{RED, NONE, NONE, NONE, NONE, NONE, NONE},
			{NONE, ORANGE, NONE, NONE, NONE, NONE, NONE},
			{NONE, NONE, YELLOW, NONE, NONE, NONE, NONE},
			{NONE, NONE, NONE, GREEN, NONE, NONE, NONE},
			{NONE, NONE, NONE, NONE, CYAN, NONE, NONE},
			{NONE, NONE, NONE, NONE, NONE, BLUE, NONE},
			{NONE, NONE, NONE, NONE, NONE, NONE, PURPLE},
			{NONE, NONE, NONE, NONE, NONE, NONE, NONE}
};

void showRainbowShift(void) {
	unsigned char i, j, size = sizeof(effect1)/(PIXELS*POCK);char f = 0;
	for(i=0;i<size;i++) { //
		for(j=0;j<PIXELS;j++) {
			SEND(effect1[i][j][0],effect1[i][j][1],effect1[i][j][2]);       
		}_delay_ms(350);
			//if(i==27) _delay_ms(106);
	}
	
}

#endif /* RAINBOWSHIFT_H_ */