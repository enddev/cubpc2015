#include <Servo.h>

/* buttonPotent
*  Uses a button to turn on or off a system that uses a potentiometer
*  to contorl the blink rate of a LED.
*/

int sensorPin = 0;    // The potentiometer is connected to
                      // analog pin 0
int buttonPin = 10;
int buttonPre = HIGH;
int buttonNow = HIGH;
int buttonVal = false;
Servo servo;

void setup() // this function runs once when the sketch starts up
{ 
  servo.attach(5);
  Serial.begin(9600);
}

void loop()
{

  int sensorValue;

  sensorValue = analogRead(sensorPin);
  buttonNow = digitalRead(buttonPin);
  //Serial.println(buttonNow); 
 
  if ( buttonPre == LOW && buttonNow == HIGH)
      buttonVal = !buttonVal;
  // if machine is on
  if (buttonVal)
  {  
    // run motor with sensor speed
    servo.write(map(sensorValue, 0, 1023, 0, 180));
  }
  
  buttonPre = buttonNow;
                                 
}

