const int LDRPin = 0;
const int LEDPin = 9;
int intensity = 0;
int tmp = 0;

void setup()
{
  Serial.begin(9600); // initiate Serial monitor for troubleshooting
  pinMode(LEDPin, OUTPUT); // set button to OUTPUT
  pinMode(LDRPin, INPUT); // set ldr to INPUT
}

void loop()
{
  intensity = analogRead(LDRPin); // read LDR pin light level
  Serial.println(intensity); // print brightness to Serial monitor for troubleshooting
  analogWrite(LEDPin, tmp); // set LED to brightness value 'tmp'
  tmp = intensity; // reads the value of the potentiometer (value between 0 and 1023)
  tmp = map(tmp, 255, 0, 0, 255); // scale it to use it with the servo (value between 0 and 180)
  delay(15); // delay before begining loop again
}
