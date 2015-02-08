/* Multi-blink*/

int led = 10;
int led2 = 9;
int ledDim = 255;
//int led2Dim = 255;
unsigned long ledInterval = 100;
unsigned long led2Interval = 500;
unsigned long ledTimer;
unsigned long led2Timer;

void setup() {
  // initialize pins for output
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  randomSeed(analogRead(0));
}

void toggleLED(int light)
{
  if (digitalRead (light) == LOW)
    //analogWrite(light, ledDim);
    digitalWrite(light, HIGH);
  else
    //analogWrite(light, LOW);
    digitalWrite(light, LOW);
    
  if (light == led)
    ledTimer = millis();
  else
    led2Timer = millis();
}

void loop() {
  if ( (millis() - ledTimer) >= ledInterval)
    toggleLED(led);
    
  if ( (millis() - led2Timer) >= led2Interval)
    toggleLED(led2);
    
  if ( (millis()%5000) == 0)
  {
     led2Interval = random(50,1000); 
     ledInterval = random(50,1000);
  }
  
  if ( (millis()%2400) == 0)
  {
    ledDim = random(1,255);
  }
}
