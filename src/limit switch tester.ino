#include <Arduino.h>

byte fallPin = 26;

byte fallsoundPin = 31;

byte ledPin = 13;

boolean fallpinActive = false;

void setup() { 

    pinMode(fallPin, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
    pinMode(fallsoundPin, OUTPUT);

}

void loop() {

  readfallPin();
  playfallSound();
}

void readfallPin() {

    fallpinActive = false;

    if (digitalRead(fallPin) == LOW) {
        fallpinActive = true;
    }
    if (digitalRead(fallPin) == HIGH) {
        fallpinActive = false;
    }
}

void playfallSound() {

    if (fallpinActive == true) {
        digitalWrite(fallsoundPin, LOW);
    }
    if (fallpinActive == false) {
        digitalWrite(fallsoundPin, HIGH);
        digitalWrite(ledPin, HIGH);
    }
}
