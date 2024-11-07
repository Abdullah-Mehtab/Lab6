#include <Lab6.h>

Lab6 ledLib(2, 3, 4, 5);

void setup() {
    ledLib.begin();
    ledLib.allOn();
    delay(1000);
    ledLib.allOff();
    delay(1000);
}

void loop() {
    ledLib.shiftLeft(3, 1);
    delay(3000);
    ledLib.shiftRight(12, 2);
    delay(3000);
    ledLib.generateRandNumber();
    delay(3000);
}
