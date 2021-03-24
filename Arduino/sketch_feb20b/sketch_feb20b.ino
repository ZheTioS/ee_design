const int interruptPin = 2;
const int ledPin = 10;
int count = 0; // variable to store number of pushes
unsigned long time = 0; // debounce
unsigned long debounce = 50; // how many ms to "debounce"
int val = 0;
void setup() 
{
attachInterrupt(digitalPintoInterrupt(interruptPin),counter,LOW);
pinMode(ledPin, OUTPUT); // set button to OUTPUT
}
void loop() 
{
analogWrite(ledPin,val);
if (count <= 8){
val = count; // reads the value of the potentiometer (value between 0 and 1023)
val = map(val, 0, 8, 0, 255); // scale it to use it with the servo (value between 0-180)
delay(15); }
else{
count = 0 ;
delay(15);}}

void counter() 
{
// we debounce the button and increase the count
if(millis() - time > debounce) count++; // increase count if time is less than the debounce time
time = millis(); // save time that count was increased
}
