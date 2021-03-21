#include "Arduino.h"
#include <LSM9DS1.h>

bool startIMU(){
  return IMU.begin();
}
