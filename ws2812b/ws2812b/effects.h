/*
 * effects.h
 *
 * Created: 01.01.2017 15:36:53
 *  Author: Denis
 */ 


#ifndef EFFECTS_H_
#define EFFECTS_H_

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

unsigned char shift[][7][3] = {
		{PURPLE, NONE, NONE, NONE, NONE, NONE, NONE},
		{NONE, PURPLE, NONE, NONE, NONE, NONE, NONE},
		{NONE, NONE, PURPLE, NONE, NONE, NONE, NONE},
		{NONE, NONE, NONE, PURPLE, NONE, NONE, NONE},
		{NONE, NONE, NONE, NONE, PURPLE, NONE, NONE},
		{NONE, NONE, NONE, NONE, NONE, PURPLE, NONE},
		{NONE, NONE, NONE, NONE, NONE, NONE, PURPLE},
		{BLUE, NONE, NONE, NONE, NONE, NONE, PURPLE},
		{NONE, BLUE, NONE, NONE, NONE, NONE, PURPLE},
		{NONE, NONE, BLUE, NONE, NONE, NONE, PURPLE},
		{NONE, NONE, NONE, BLUE, NONE, NONE, PURPLE},
		{NONE, NONE, NONE, NONE, BLUE, NONE, PURPLE},
		{NONE, NONE, NONE, NONE, NONE, BLUE, PURPLE},
		{CYAN, NONE, NONE, NONE, NONE, BLUE, PURPLE},
		{NONE, CYAN, NONE, NONE, NONE, BLUE, PURPLE},
		{NONE, NONE, CYAN, NONE, NONE, BLUE, PURPLE},
		{NONE, NONE, NONE, CYAN, NONE, BLUE, PURPLE},
		{NONE, NONE, NONE, NONE, CYAN, BLUE, PURPLE},
		{GREEN, NONE, NONE, NONE, CYAN, BLUE, PURPLE},
		{NONE, GREEN, NONE, NONE, CYAN, BLUE, PURPLE},
		{NONE, NONE, GREEN, NONE, CYAN, BLUE, PURPLE},
		{NONE, NONE, NONE, GREEN, CYAN, BLUE, PURPLE},
		{YELLOW, NONE, NONE, GREEN, CYAN, BLUE, PURPLE},
		{NONE, YELLOW, NONE, GREEN, CYAN, BLUE, PURPLE},
		{NONE, NONE, YELLOW, GREEN, CYAN, BLUE, PURPLE},
		{ORANGE, NONE, YELLOW, GREEN, CYAN, BLUE, PURPLE},
		{NONE, ORANGE, YELLOW, GREEN, CYAN, BLUE, PURPLE},
		{RED, ORANGE, YELLOW, GREEN, CYAN, BLUE, PURPLE},
		{NONE, RED, ORANGE, YELLOW, GREEN, CYAN, BLUE},
		{NONE, NONE, RED, ORANGE, YELLOW, GREEN, CYAN},
		{NONE, NONE, NONE, RED, ORANGE, YELLOW, GREEN},
		{NONE, NONE, NONE, NONE, RED, ORANGE, YELLOW},
		{NONE, NONE, NONE, NONE, NONE, RED, ORANGE},
		{NONE, NONE, NONE, NONE, NONE, NONE, RED},
		{NONE, NONE, NONE, NONE, NONE, NONE, RED},	
		};


#endif /* EFFECTS_H_ */