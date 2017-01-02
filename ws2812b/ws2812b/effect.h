/*
 * IncFile1.h
 *
 * Created: 01.01.2017 15:35:56
 *  Author: Denis
 */ 


#ifndef EFFECT_H_
#define EFFECT_H_

#define RED {255,0,0}
#define ORANGE {255,90,0}
#define YELLOW {255,255,0}
#define GREEN {0,255,0}
#define CYAN {0,255,255}
#define BLUE {0,0,255}
#define PURPLE {230,0,230} 
#define NONE {0,0,0}
#define PIXELS 7
#define POCK 3

void send0() {
	PORTD = 0xFF;
	//_delay_us(3);
	PORTD = 0x00;
}

void send1() {
	PORTD = 0xFF;
	_delay_us(2);
	//asm volatile("lpm");
	//asm volatile("lpm");
	//asm volatile("lpm");
	
	PORTD = 0x00;
	
}

void send(unsigned char n)
{
   volatile unsigned char i = 0;
	n/=16;
    n = ((n & 0x55) << 1) | ((n & 0xAA) >> 1);
	n = ((n & 0xCC) >> 2) | ((n & 0x33) << 2);
	n = (n >> 4) | (n << 4);
	for(i; i < 8; i++)
    {
        if(n & (1<<i)) {
            send1();                
        }
        else {
            send0();
        }
    }
}
#define SEND(r,g,b){send(g);send(r);send(b);}

#endif /* EFFECT_H_ */