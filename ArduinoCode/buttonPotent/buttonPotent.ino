/* buttonPotent
*  Uses a button to turn on or off a system that uses a potentiometer
*  to contorl the blink rate of a LED.
*/

int sensorPin = 0;    // The potentiometer is connected to
                      // analog pin 0
int redPin = 3; // The LED is connected to digital pin 9
int greenPin = 5;
int bluePin = 6;
int buttonPin = 10;
int buttonPre = HIGH;
int buttonNow = HIGH;
int buttonVal = true;
int ledTimer;

void setup() // this function runs once when the sketch starts up
{ 
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void toggleLED(int light)
{
  if (digitalRead (light) == LOW)
    //analogWrite(light, ledDim);
    digitalWrite(light, HIGH);
  else
    //analogWrite(light, LOW);
    digitalWrite(light, LOW);
    
  ledTimer = millis();
}

void showRGB(int color)
{
  int redIntensity;
  int greenIntensity;
  int blueIntensity;

  if (color <= 255)          // zone 1
  {
    redIntensity = 255 - color;    // red goes from on to off
    greenIntensity = color;        // green goes from off to on
    blueIntensity = 0;             // blue is always off
  }
  else if (color <= 511)     // zone 2
  {
    redIntensity = 0;                     // red is always off
    greenIntensity = 255 - (color - 256); // green on to off
    blueIntensity = (color - 256);        // blue off to on
  }
  else // color >= 512       // zone 3
  {
    redIntensity = (color - 512);         // red off to on
    greenIntensity = 0;                   // green is always off
    blueIntensity = 255 - (color - 512);  // blue on to off
  }

  analogWrite(redPin, redIntensity);
  analogWrite(bluePin, blueIntensity);
  analogWrite(greenPin, greenIntensity);
}

void loop()
{

  int sensorValue;

  sensorValue = analogRead(sensorPin);  
  buttonNow = digitalRead(buttonPin);
  //Serial.println(sensorValue);
  
  if ( buttonPre == LOW && buttonNow == HIGH)
      buttonVal = !buttonVal;
  
  if ( buttonVal)
  {
    if ( (millis() - ledTimer) >= 1000)
    {
      showRGB(sensorValue%768);
    }
      //toggleLED(ledPin);
      
  }
  else
    //digitalWrite(ledPin, LOW);
  {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  }
  
  buttonPre = buttonNow;
                                 
}

