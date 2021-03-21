#include "Arduino.h"
#include "IMU.h"

LSM lsm;

void setup() {
  pinMode(22, OUTPUT);
  if (lsm.startIMU()) {
    digitalWrite(22, HIGH);
  } else {
    digitalWrite(22, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
