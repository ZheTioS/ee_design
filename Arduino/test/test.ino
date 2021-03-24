const int led1 = 3;
const int led2 = 4;
const int led3 = 5;
const int led4 = 6;
const int led5 = 7;
const int led6 = 8;
const int led7 = 9;
const int led8 = 10;
volatile unsigned int current_gear = 0;

void loop()
{
  switch(current_gear)
  {
    case 1:
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      break;
    case 2: 
      digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      break;
    case 3: 
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      break; 
    case 4: 
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,HIGH);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      break;
    case 5: 
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,HIGH);
      digitalWrite(led6,LOW);
      break;
    case 6: 
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,HIGH);
      break;
  }
}
void setup()
{
  attachInterrupt(0,up,RISING); // digital pin 2 // up
}

void up()
{
current_gear++;
delay(250);
}
 
