/* buttonPotent
*  Uses a button to turn on or off a system that uses a potentiometer
*  to contorl the blink rate of a LED.
*/

int sensorPin = 0;    // The potentiometer is connected to
                      // analog pin 0
int tempPin = 1;
int redPin = 8; // The LED is connected to digital pin 9
int greenPin = 9;
int bluePin = 10;
int buttonPin = 4;
int buttonPre = HIGH;
int buttonNow = HIGH;
int buttonVal = 1; // set to 3 to show cycle otherwise use 1
int tempMin = 60;
int tempMax = 90;
int cycle = 0;
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
  float tempValue;

  sensorValue = analogRead(sensorPin);
  tempValue = analogRead(tempPin)*0.004882814;  
  buttonNow = digitalRead(buttonPin);
  //Serial.println(tempValue);
  
  if ( buttonPre == LOW && buttonNow == HIGH)
      buttonVal = (buttonVal+1)%3;
  
  if ( buttonVal == 2)
  {
    //if ( (millis() - ledTimer) >= 1000)
    //{
      showRGB(map(sensorValue,0,1023,0,768));
    //}
      //toggleLED(ledPin);
      
  }
  // temp sensor
  else if (buttonVal == 1)
  {
    tempValue = ((tempValue - 0.5)*100.0)* (9.0/5.0) + 32.0;
    //Serial.println(tempValue);
    if(tempValue < tempMin)
      tempValue = tempMin;
    else if (tempValue > tempMax)
      tempValue = tempMax;
    //Serial.println(tempValue);
    showRGB(512-map(tempValue, tempMin, tempMax,0,512));
  }
  // cycle through to show progression
  else if (buttonVal == 3)
  {
    showRGB(cycle);
    delay(50);
    if(cycle == 512)
    {
      cycle = 0;
    }
    else
      cycle++;
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

