#include<Wire.h>
#include<PrintEx.h>
const byte ACCEL = 0x3B; //address for accelerometer
const int I2C_Add = 0x68;
const byte ACCEL_CONFIG = 0x1C;
int accel_X;
int accel_Y;
int accel_Z;
int scale = 16384;
byte accel_config = 0x00;
StreamEx mySerial = Serial;

void setup()
{
  Serial.begin(9600);
  Wire.begin();

  Wire.beginTransmission(I2C_Add);
  Wire.write(ACCEL_CONFIG);
  Wire.write(accel_config);
  Wire.endTransmission();
}

void loop()
{
  Wire.beginTransmission(I2C_Add);
  Wire.write(ACCEL);
  Wire.endTransmission();
  Wire.requestFrom(I2C_Add, 6);
  accel_X = Wire.read() << 8 | Wire.read();
  accel_Y = Wire.read() << 8 | Wire.read();
  accel_Z = Wire.read() << 8 | Wire.read();
  accel_X /= scale;
  accel_Y /= scale;
  accel_Z /= scale;
  Serial.println(accel_X);
  mySerial.printf( "The accelerometer reading for %d is\nX axis: %d g\nY axis: %d g\nZ axis: %d g", scale, accel_X, accel_Y, accel_Z );
  delay(500);
}
