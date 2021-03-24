#include<SoftwareSerial.h>

#define D2 2
#define D3 3

SoftwareSerial mySerial =  SoftwareSerial(D2, D3);
const int ledPin = 13;

void setup()
{
  // put your setup code here, to run once:
Serial.begin(9600); // Sets up Serial Monitor for debugging
pinMode(ledPin, OUTPUT); // sets LED as Output
mySerial.begin(9600); // Sets BT serial mode
}

void loop() 
{
if(mySerial.available()>0)
{
char data= mySerial.read(); // reads data from BT serial
switch(data)
{
case '1': digitalWrite(13, HIGH);break; // when 1 is sent, turn on LED
case '0': digitalWrite(13, LOW);break; // when 0 is sent, turn off LED
default : break;
}
Serial.println(data); // Print to serial monitor
}
delay(50); // delay between cycles
}
