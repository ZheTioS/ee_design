#include <Servo.h>

Servo myservo;  // create servo object to control a servo
const int interruptPin = 2;
int count = 0;    // variable to store number of pushes
unsigned long time = 0;      // debounce
unsigned long debounce = 50;  // how many ms to "debounce"
//Dynamic Variables
volatile int buttonPushCounter = 0; // counter for the number of button presses
volatile int buttonState = 0; // current state of the button
volatile int lastButtonState = 0; // previous state of the button

void setup()
{
  attachInterrupt(digitalPinToInterrupt(interruptPin),pin_ISR, CHANGE);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop()
{
  myservo.write(buttonPushCounter * 30);
  if (buttonPushCounter <6)
  {
    Serial.print("count = ");
    Serial.println(buttonPushCounter);
    delay(1000);
  }
  else
  {
    buttonPushCounter = 0 ;
    Serial.print("count = ");
    Serial.println(buttonPushCounter);
    delay(1000);
  }
}
//void addcount()
//{
//  // we debounce the button and increase the count
//  if (millis() - time > debounce)
//    count++;
//  time = millis();
//}

void pin_ISR() {
  // read the pushbutton input pin:
  buttonState = digitalRead(interruptPin);
  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    }
    else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
// save the current state as the last state, for next time through the loop
lastButtonState = buttonState;
}
