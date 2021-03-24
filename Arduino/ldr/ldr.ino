// to experiment with LDR
int sensorPin = A1; // select the input pin for LDR
int led1 = 3;//digital pin D3
int led2 = 4;//digital pin D4
int led3 = 5;//digital pin D5
int led4 = 6;//digital pin D6
int led5 = 7;//digital pin D7
int led6 = 8;//digital pin D8
int led7 = 9;//digital pin D9
int led8 = 10;//digital pin D10
int sensorValue = 0; // variable to store the value coming from the sensor
void setup() {
Serial.begin(9600); //sets serial port for communication
pinMode(led1,OUTPUT);//set digital input as OUTPUT
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(sensorPin,INPUT);//A1 input as INPUT
}
void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

//The range for LDR is from 0 tu 160
if (sensorValue <20){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led8,HIGH);}

if (sensorValue>20 && sensorValue <50){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);}

if (sensorValue>50 && sensorValue <80){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);}

if (sensorValue>80 && sensorValue <110){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);}

if (sensorValue > 150){
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
}
}
