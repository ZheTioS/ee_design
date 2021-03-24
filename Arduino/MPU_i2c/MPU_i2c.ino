#include<Wire.h>
const byte WHO_AM_I = 0x41;
const int I2C_Add = 0x68;
int a;
byte TEMP_OUT_H_data = 0;
byte TEMP_OUT_L_data = 0;
float temp;

 void setup()
 {
  Serial.begin(9600);
  Wire.begin();
 }

void loop()
{
  Wire.beginTransmission(I2C_Add);
  Wire.write(WHO_AM_I);
  Wire.endTransmission();
  Wire.requestFrom(I2C_Add, 2);
  TEMP_OUT_H_data = Wire.read();
  TEMP_OUT_L_data = Wire.read();
  a = TEMP_OUT_H_data << 8| TEMP_OUT_L_data;
  temp = ((a - 21) / 333.87 )+ 21;
  Serial.println(a);
delay(1000);
}
