#include "Lab6.h"

Lab6::Lab6(int pin1, int pin2, int pin3, int pin4) {
    _pins[0] = pin1;  // LED 1 (LSB) connected to Pin D2
    _pins[1] = pin2;  // LED 2 connected to Pin D3
    _pins[2] = pin3;  // LED 3 connected to Pin D4
    _pins[3] = pin4;  // LED 4 (MSB) connected to Pin D5
}

void Lab6::begin() {
    for (int i = 0; i < 4; i++) {
        pinMode(_pins[i], OUTPUT);   // Set each LED pin as OUTPUT
        digitalWrite(_pins[i], LOW); // Start with all LEDs off
    }
}

void Lab6::generateRandNumber() {
    int number = random(0, 16);  // Generate a random number between 0 and 15
    displayBinary(number);       // Display it in binary format on the LEDs
}

void Lab6::upCount() {
    for (int i = 0; i <= 15; i++) {
        displayBinary(i);         // Display each number in binary from 0 to 15
        delay(500);              // 2-second delay between counts
    }
}

void Lab6::downCount() {
    for (int i = 15; i >= 0; i--) {
        displayBinary(i);         // Display each number in binary from 15 to 0
        delay(500);              // 2-second delay between counts
    }
}

void Lab6::shiftRight(int num, int shift_amount) {
    displayBinary(num);           // Initial display of the number
    delay(500);                  // Display it for a few seconds

    for (int i = 0; i < shift_amount; i++) {
        num >>= 1;                // Shift right by one
        displayBinary(num);       // Display the shifted value
        delay(500);              // 1-second delay between shifts
    }
}

void Lab6::shiftLeft(int num, int shift_amount) {
    displayBinary(num);           // Initial display of the number
    delay(500);                  // Display it for a few seconds

    for (int i = 0; i < shift_amount; i++) {
        num <<= 1;                // Shift left by one
        displayBinary(num);       // Display the shifted value
        delay(500);              // 1-second delay between shifts
    }
}

void Lab6::allOff() {
    displayBinary(0);             // Turn off all LEDs by displaying binary 0
}

void Lab6::allOn() {
    displayBinary(15);            // Turn on all LEDs by displaying binary 1111 (15)
}

void Lab6::displayBinary(int number) {
    // Set each LED based on the bit value in the binary representation of 'number'
    for (int i = 0; i < 4; i++) {
        // Check the i-th bit of 'number' and turn the corresponding LED on or off
        digitalWrite(_pins[i], (number & (1 << i)) ? HIGH : LOW);
    }
}
