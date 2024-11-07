#ifndef Lab6_h
#define Lab6_h

#include <Arduino.h>

class Lab6 {
public:
    Lab6(int pin1, int pin2, int pin3, int pin4);
    void begin();
    void generateRandNumber();
    void upCount();
    void downCount();
    void shiftRight(int num, int shift_amount);
    void shiftLeft(int num, int shift_amount);
    void allOff();
    void allOn();

    int _pins[4];
    void displayBinary(int number);
};

#endif
