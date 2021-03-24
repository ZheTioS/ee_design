#include<SoftwareSerial.h>


#define D2 2
#define D3 3

SoftwareSerial mySerial =  SoftwareSerial(D2, D3);
char c;
void setup()
{
  // put your setup code here, to run once:
  pinMode(D2, INPUT);
  pinMode(D3, OUTPUT);
  Serial.begin(9600);
//  mySerial.begin(38400);
mySerial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  // send a byte with the value 45

  //  int bytesSent = mySerial.write("hello"); //send the string “hello” and return the length of the string.

  if (mySerial.available())
  {
    Serial.write(mySerial.read());
  }
  if (Serial.available())
  {
    mySerial.write(Serial.read());
  }

}
