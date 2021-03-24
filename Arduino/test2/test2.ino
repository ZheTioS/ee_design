const int buttonPin = 2;     // the number of the pushbutton pin
const int led1 =  3;      // the number of the LED pin
const int led2 =  4;      // the number of the LED pin
const int led3 =  5;      // the number of the LED pin
const int led4 =  6;      // the number of the LED pin
const int led5 =  7;      // the number of the LED pin
const int led6 =  8;      // the number of the LED pin
const int led7 =  9;      // the number of the LED pin
const int led8 =  10;      // the number of the LED pin

// variables will change:
volatile int buttonPushCounter=0;
volatile int buttonState = 0;         // variable for reading the pushbutton status
volatile int lastButtonState = 0;     // previous state of the button
void setup() {
  // initialize the LED pin as an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  // Attach an interrupt to the ISR vector
  attachInterrupt(0, pin_ISR, CHANGE);
}

void loop() {
  // Nothing here!
}

void pin_ISR() {
  buttonState = digitalRead(buttonPin);
  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
    } else {
      // if the current state is LOW then the button went from on to off:
    }
    // Delay a little bit to avoid bouncing
    delay(250);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;
 if (buttonPushCounter == 4) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }
}
