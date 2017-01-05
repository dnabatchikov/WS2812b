/*
 * bincounter.h
 *
 * Created: 05.01.2017 13:04:26
 *  Author: Denis
 */ 


#ifndef BINCOUNTER_H_
#define BINCOUNTER_H_


#include </Users/Denis/Documents/Atmel Studio/ws2812b/ws2812b/effect.h>

unsigned char effect6[PIXELS][3] = {};

void count(uint8_t counter)
{
	int binnumber[8];
	SEND(0,0,0); // костыль
	
	for(uint8_t i=PIXELS; i>0; i--) binnumber[i] = (counter & 1<<i);
				
	for(uint8_t k=0; k<PIXELS; k++)
	{
		if(binnumber[k]>0) {
			SEND(128,128,50);
		} else {
			SEND(0,0,0);
		}		
	}
	_delay_ms(150);	  	
}

void showBinCounter(void) {
	
	for(uint8_t j=0;j<256;j++) {
		count(j);	       
	};
	
}



#endif /* BINCOUNTER_H_ */