# Lab6 Library

The `Lab6` library is designed to control 4 LEDs connected to an Arduino. It provides methods to display binary values, count up and down, and shift values left or right on the LEDs.

## Functions
- `begin()`: Initializes the pins for each LED.
- `generateRandNumber()`: Displays a random binary number on the LEDs.
- `upCount()`: Counts up in binary from 0 to 15 with a delay.
- `downCount()`: Counts down from 15 to 0.
- `shiftRight(int num, int shift_amount)`: Shifts a binary number right.
- `shiftLeft(int num, int shift_amount)`: Shifts a binary number left.
- `allOff()`: Turns off all LEDs.
- `allOn()`: Turns on all LEDs.

## Example Sketches
- **Lab6.ino**: Demonstrates the use of all functions.
- **Example2.ino**: Demonstrates selective functions in sequence.

To use this library, place it in your Arduino libraries folder and include it in your sketch with `#include <Lab6.h>`.
