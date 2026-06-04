#include <Arduino.h>

// LED Blink - ESP32
// Built-in LED is GPIO 2 on most ESP32 boards

#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}