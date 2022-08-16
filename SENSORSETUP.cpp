#include "SENSORSETUP.h"
#include <ADCTouch.h>
#include <Arduino.h>

int ref0, ref1, ref2, ref3, ref4;     //reference values to remove offset
int thresh = 50;


void SENSORSETUP::setupsensor(){

    pinMode(A0,INPUT);
    pinMode(A1,INPUT);
    pinMode(A2,INPUT);
    pinMode(A3,INPUT);
    pinMode(A4,INPUT);
      
    ref0 = ADCTouch.read(A0, 500);    //create reference values to 
    ref1 = ADCTouch.read(A1, 500);    //account for the capacitance of the pad
    ref2 = ADCTouch.read(A2, 500);
    ref3 = ADCTouch.read(A3, 500);
    ref4 = ADCTouch.read(A4, 500);
  }

int SENSORSETUP::get_value0(){
    int value0 = ADCTouch.read(A0);
    value0 -= ref0;       //remove offset
    return value0;
  }
int SENSORSETUP::get_value1(){
    int value1 = ADCTouch.read(A1);   //   --> 100 samples
    value1 -= ref1;
    return value1;
  }
int SENSORSETUP::get_value2(){
    int value2 = ADCTouch.read(A2);
    value2 -= ref2;
    return value2;
  }
int SENSORSETUP::get_value3(){
  int value3 = ADCTouch.read(A3);
  value3 -= ref3;
  return value3;
}
int SENSORSETUP::get_value4(){
  int value4 = ADCTouch.read(A4);
  value4 -= ref4;
  return value4;
}
