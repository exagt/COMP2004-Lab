#ifndef __sample_hardware__
#define __sample_hardware__
#include "../lib/uopmsb/uop_msb_2_0_0.h"
extern DigitalOut onBoardLED;
extern DigitalOut redLED;
extern DigitalOut yellowLED;
extern DigitalOut greenLED;

//Inputs
extern DigitalIn  onBoardSwitch;
extern DigitalIn  buttonA;
extern DigitalIn  buttonB;
//extern Serial pc;

extern void post();

#endif