// Simple Stepper Motor — ESP32 + A4988
// NEMA 17, 1/8 microstepping (jumpers on shield)

#include <esp32-hal-gpio.h>
#define STEP_PIN  26
#define DIR_PIN   27

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN,  OUTPUT);
}

void loop() {
  // Forward — one full rotation
  digitalWrite(DIR_PIN, HIGH);
  rotate(360);
  delay(1000);

  // Backward — one full rotation
  digitalWrite(DIR_PIN, LOW);
  rotate(360);
  delay(1000);
}

void rotate(float degrees) {
  // 1600 steps = 1 full revolution (200 steps x 1/8 microstepping)
  long steps = degrees / 360.0 * 1600;
  for (long i = 0; i < steps; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(2);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(800);   // speed — lower = faster
  }
}
