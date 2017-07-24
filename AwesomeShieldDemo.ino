#include "Arduino.h"

// Create an array t hold the pin number to which the LEDs are connected
int pins[] = { 7, 10, 11, 12, 13 };

// Set each of those pins to an OUTPUT pin (to provide current to the LED)
void setup() {
	for (int cnt = 0; cnt < 5; cnt++) {
		pinMode(pins[cnt], OUTPUT);
	}
}

// Cycle through the array, swtiching each LED on, then off after a short delay.
void loop() {
	for (int cnt = 0; cnt < 5; cnt++) {
		digitalWrite(pins[cnt],HIGH);
		delay(100);
		digitalWrite(pins[cnt],LOW);
	}
}
