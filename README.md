# Lab6 Library

The **Lab6 Library** is designed to control 4 LEDs connected to an Arduino. This library provides various functions to interact with the LEDs, including displaying random binary numbers, counting up and down, and shifting binary values left or right. It's a simple yet powerful way to manipulate and control LED states.

## Features

The library includes the following functions:

### `begin()`
Initializes the pins for each LED. This method sets the LED pins to output mode.

### `generateRandNumber()`
Generates a random binary number between 0 and 15 and displays it on the LEDs. The LEDs will show the corresponding binary representation of the random number.

### `upCount()`
Counts up in binary from 0 to 15 with a 2-3 second delay between each number. After reaching 15, the count will stop until another function is called.

### `downCount()`
Counts down in binary from 15 to 0, with a similar delay. Once 0 is reached, the count will stop until the next function is called.

### `shiftRight(int num, int shift_amount)`
Shifts a binary number to the right by a specified amount. The number will be displayed on the LEDs before the shift happens.

### `shiftLeft(int num, int shift_amount)`
Shifts a binary number to the left by a specified amount. As with `shiftRight()`, the number will first be displayed on the LEDs.

### `allOff()`
Turns off all LEDs. Use this function when you want to stop displaying any numbers or patterns on the LEDs.

### `allOn()`
Turns on all LEDs, making them glow. Use this function for full illumination of the LEDs.

---

## Example Sketches

- **Example1.ino**: This sketch demonstrates the use of all the functions provided by the library. It will generate a random number, count up and down in binary, shift numbers left and right, and turn LEDs on and off.
  
- **Example2.ino**: This sketch demonstrates a simple counting sequence from 0 to 15 and includes a pattern where the LEDs blink on and off.

---

## How to Use the Lab6 Library

1. Download or clone this repository.
2. Place the library folder (Lab6) in your **Arduino libraries** folder.
3. In your Arduino sketch, include the library by adding the following line at the top:

```cpp
#include <Lab6.h>

---

## Additional Functionalities to Add

Here are five potential functionalities that could be added to the Lab6 library in the future:

1. **Pulse Effect**  
   This function would gradually change the brightness of each LED in a smooth, pulsing manner. It could use PWM (Pulse Width Modulation) to simulate a "breathing" effect, which is often used to indicate a status or highlight an action.

2. **Binary Pattern Sequence**  
   This function would allow the user to define and display custom binary patterns. The function could accept an array of binary values and display them sequentially, making the LEDs blink in predetermined patterns such as alternating `1010`, `1111`, etc.

3. **Chase Effect**  
   Create a dynamic "chase" effect where the LEDs light up in sequence, moving from one LED to the next. This effect is often used in light strips and can be visually appealing when creating progress indicators or effects.

4. **Blink Pattern**  
   A function to blink the LEDs in a defined pattern, such as blinking in pairs, alternating between on and off states. It could also implement special patterns like the "SOS" signal in Morse code, where the LEDs blink in a specific sequence.

5. **Custom Delay Control**  
   Allow users to define the delay times for the library's functions, such as counting and shifting. This would give users more control over the timing of the effects, allowing them to customize the speed of counting or shifting actions without modifying the core code.

---
