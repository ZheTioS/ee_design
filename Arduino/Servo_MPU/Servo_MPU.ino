#include <Servo.h>
#include<Wire.h>
#include<PrintEx.h>
Servo MPUservo; // create servo object to control a servo
const int MPU_addr = 0x68; // I2C address of the MPU-9250
int16_t accel_X, accel_Y, accel_Z;
int pos = 0;
StreamEx mySerial = Serial;
int scale = 16384;

void setup() 
{
  Wire.begin();
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B); // PWR_MGMT_1 register
  Wire.write(0); // set to zero (wakes up MPU-9250)
  Wire.endTransmission(true);
  Serial.begin(9600); //set up serial monitor for debugging
  MPUservo.attach(9); // attaches the servo on pin 9 to the servo object
}
void loop() 
{
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x3B); // starting with register 0x3B (ACCEL_XOUT_H)
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_addr, 6, true); // request a total of 6 registers
  accel_X = Wire.read() << 8 | Wire.read(); // 0x3B (ACCEL_XOUT_H) & 0x3C (ACCEL_XOUT_L)
  accel_Y = Wire.read() << 8 | Wire.read(); // 0x3D (ACCEL_YOUT_H) & 0x3E (ACCEL_YOUT_L)
  accel_Z = Wire.read() << 8 | Wire.read(); // 0x3F (ACCEL_ZOUT_H) & 0x40 (ACCEL_ZOUT_L)
  //Serial.print("accel_X = "); Serial.println(Xax);// Prints X-axis acceleration value
//  Serial.print(" | accel_Y = "); Serial.println(accel_Y); // Prints Y-axis acceleration value
  Serial.print(" | accel_Z = "); Serial.println(accel_Z);// Prints Z-axis acceleration value
  int16_t ctrl = accel_Z ; // Z-axis value chosen for this run
  if (ctrl < 0) {
    pos = 0; // ignore low values
  }
  else if (ctrl > scale) { //this value corresponds to 1g as per data sheet
    pos = 90; //ignore high values
  }
  else {
    pos = map(ctrl, 0, scale, 0, 90); // mapping values for servo motor from 0 - 90 degs
  }
  MPUservo.write(pos); // Move the servo
  Serial.println(accel_Z);
  mySerial.printf( "The accelerometer reading for %d is\nX axis: %d g\nY axis: %d g\nZ axis: %d g", scale, accel_X, accel_Y, accel_Z );
  delay(500);
}
