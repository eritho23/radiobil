#include <Arduino.h>


void setup() {
  /* Setup commands */
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  Serial.println("Running");
}