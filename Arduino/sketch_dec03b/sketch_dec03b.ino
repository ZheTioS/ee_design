#include <Wire.h>
const byte add = 0x90>>1;
      int d1;
      int d2;
      float temp;
void setup()
{
    Serial.begin(9600);

    Wire.begin();
    Wire.beginTransmission(add);             // connect to DS1621 (#0)
    Wire.write(0xAC);                            // Access Config
    Wire.write(0x02);                            // set for continuous conversion
    Wire.beginTransmission(add);             // restart
    Wire.write(0xEE);                            // start conversions
    Wire.endTransmission();
}


void loop()
{
    

    delay(1000);                                // give time for measurement

    Wire.beginTransmission(add);
    Wire.write(0xAA);                            // read temperature command
    Wire.endTransmission();
    Wire.requestFrom(add, 2);    // request two bytes from DS1621 (0.5 deg. resolution)

    d1 = Wire.read();           // get first byte
    d2 = Wire.read();    // get second byte

    temp = d1;

    if (d2)             // if there is a 0.5 deg difference
        temp += 0.5;

    Serial.println(temp);

}
