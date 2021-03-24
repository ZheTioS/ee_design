#include<SPI.h>
 const byte WHO_AM_I = 0x75;
 const byte READ_FLAG = 0x80;
 const byte ssPIN = 10;

 void setup()
 {
  Serial.begin(9600);
  SPI.begin();
  SPI.beginTransaction(SPISettings(100000,MSBFIRST,SPI_MODE0));
  pinMode(ssPIN,OUTPUT);
 }

void loop()
{
  digitalWrite(ssPIN,LOW);
  SPI.transfer(WHO_AM_I|READ_FLAG);
  byte result = SPI.transfer(0x00);
  digitalWrite(ssPIN,HIGH);
  Serial.println(result);
  delay(1000);
}
