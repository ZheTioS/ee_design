static byte ldrPin = 7;
//The LDR will be in pin 7
const byte numPins = 8;
//There will be 8 LEDs
int brightness = 0;
//Variable brightness is set 0
byte pins[] = {5, 6, 7, 8, 9, 10, 11, 12};
//The pins where the LEDs are set
void setup() {
  Serial.begin(9600); //To start the code.
}
void loop() {
  brightness = analogRead(ldrPin); //Values read by the pin 7 are storaged in ’brightness’
  Serial.println(brightness); //The values of ’brightness’ are showed on screen
  /*After experimenting, the minimum value for brightness was set to be 70 and the maximum 260*/
  if (brightness < 70) //Ifthe brightness is below 70, all the LEDs arelighted
  {
    digitalWrite(5, 255);
    digitalWrite(6, 255);
    digitalWrite(7, 255);
    digitalWrite(8, 255);
    digitalWrite(9, 255);
    digitalWrite(10, 255);
    digitalWrite(11, 255);
    digitalWrite(12, 255);
  }
  if (brightness >= 70 && brightness < 130) //Ifthe brightness is between 70 and 130, 5 LEDs arelighted
  {
    digitalWrite(5, 255);
    digitalWrite(6, 255);
    digitalWrite(7, 255);
    digitalWrite(8, 255);
    digitalWrite(9, 255);
    digitalWrite(10, 255);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if (brightness >= 130 && brightness < 200) //Ifthe brightness is between 130 and 200, 4 LEDs arelighted
  {
    digitalWrite(5, 255);
    digitalWrite(6, 255);
    digitalWrite(7, 255);
    digitalWrite(8, 255);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if (brightness >= 200 && brightness < 260) //Ifthe brightness is between 200 and 260, 2 LEDs arelighted
  {
    digitalWrite(5, 255);
    digitalWrite(6, 255);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if (brightness >= 260) //If the brightness equal or bigger than 260, no LEDsare lighted
  {
    digitalWrite(5, 0);

    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  delay(100); //Delay of the display on screen
}
