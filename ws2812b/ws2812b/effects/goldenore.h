/*
 * goldenore.h
 *
 * Created: 01.01.2017 20:52:57
 *  Author: Denis
 */ 


#ifndef GOLDENORE_H_
#define GOLDENORE_H_


#include </Users/Denis/Documents/Atmel Studio/ws2812b/ws2812b/effect.h>

unsigned char shift[][7][3] = {
			//{{0, 0, 255}, {0, 0, 200}, {0, 0, 150}, {0, 0, 100}, {0, 0, 50}, {0, 0, 0}, {0, 0, 0}},
			{{16,0,0},NONE,{8,0,0},NONE,{16,0,0},NONE,{8,0,0}},
			//{YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW},
			//{GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN},
				
				
};

void show(void) {
	unsigned char i, j, size = sizeof(shift)/(PIXELS*POCK);char f = 0;
	for(i=0;i<size;i++) { //
		for(j=0;j<PIXELS;j++) {
			SEND(shift[i][j][0],shift[i][j][1],shift[i][j][2]);       
		}_delay_ms(100);
			//if(i==27) _delay_ms(106);
	}
	
}

#endif /* GOLDENORE_H_ */