#include <Arduino.h>

byte falllocationPin = 26;

byte fallPin = 31;

byte ledPin = 13;

void setup() { 

    pinMode(falllocationPin, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
    pinMode(fallPin, OUTPUT);

}