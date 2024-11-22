#include <Arduino.h>

const int buttonPin = 2;
int ledPin = 13;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int reading = digitalRead(buttonPin);
  digitalWrite(ledPin, reading);
 if(reading == 0) {
  Serial.println("Hallo boy");
 }
 if(reading == 1) {
   Serial.println("BMP");
 }
 delay(1000);

}
