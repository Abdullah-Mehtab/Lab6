#include <Lab6.h>

// Define the LED pins according to your setup
Lab6 ledLib(2, 3, 4, 5);
int dell = 3000;  // Adjust delay time as needed

void setup() {
    Serial.begin(9600);         // Initialize serial communication at 9600 baud
    ledLib.begin();             // Initialize the LED library
    Serial.println("Starting Lab6 example...");
}

void loop() {
    Serial.println("\nGenerating Random Number:");
    ledLib.generateRandNumber();  // Display a random binary number
    delay(dell);

    Serial.println("\nCounting Up from 0 to 15:");
    ledLib.upCount();             // Count up from 0 to 15 in binary
    delay(dell);

    Serial.println("\nCounting Down from 15 to 0:");
    ledLib.downCount();           // Count down from 15 to 0 in binary
    delay(dell);

    Serial.println("\nShifting Right (Start: 15, Shifts: 2):");
    ledLib.shiftRight(15, 2);     // Shift the number 15 right by 2
    delay(dell);

    Serial.println("\nShifting Left (Start: 1, Shifts: 2):");
    ledLib.shiftLeft(1, 2);       // Shift the number 1 left by 2
    delay(dell);

    Serial.println("\nTurning All LEDs Off:");
    ledLib.allOff();              // Turn off all LEDs
    delay(dell);

    Serial.println("\nTurning All LEDs On:");
    ledLib.allOn();               // Turn on all LEDs
    delay(dell);
}
