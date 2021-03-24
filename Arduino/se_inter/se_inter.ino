// To look into interrupt of a micro-controller
// this constant won't change:
const int  buttonPin = 2;    // the pin that the pushbutton is attached to
const int led1 = 5;       // the pin that the LED is attached to
const int led2 = 6;       // the pin that the LED is attached to
const int led3 = 7;       // the pin that the LED is attached to
const int led4 = 8;       // the pin that the LED is attached to
const int led5 = 9;       // the pin that the LED is attached to
const int led6 = 10;       // the pin that the LED is attached to
const int led7 = 11;       // the pin that the LED is attached to
const int led8 = 12;       // the pin that the LED is attached to

// Variables will change:
volatile int buttonPushCounter = 0;   // counter for the number of button presses
volatile int buttonState = 0;         // current state of the button
volatile int lastButtonState = 0;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

  // initialize serial communication:
  Serial.begin(9600);
  // Attach an interrupt to the ISR vector
  attachInterrupt(0, pin_ISR, CHANGE);
}

void loop()
{
  //nothing here
}

void pin_ISR() {
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;
  if (buttonPushCounter == 0) {//for 0th button push, the result is 00000000
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
  }
  if (buttonPushCounter == 1) {//for 1st button push, the result is 00000001
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, HIGH);
  } if (buttonPushCounter == 2) { //for 2nd button push, the result is 00000010
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, LOW);
  } if (buttonPushCounter == 3) { //for 3rd button push, the result is 00000011
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
  } if (buttonPushCounter == 4) { //for 4th button push, the result is 00000100
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
  } if (buttonPushCounter == 5) { //for 5th button push, the result is 00001010
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, LOW);
  }
}
