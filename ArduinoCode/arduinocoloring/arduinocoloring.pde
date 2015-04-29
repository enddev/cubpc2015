//Changes the color of a loaded image by using the arduino potentiometer dial

import org.firmata.*;
import cc.arduino.*; // import arduino library
import processing.serial.*; //import serial library

Arduino arduino;
PImage img;
int dial1=0; //set potentiometer to A0 pin
int[] rgb = {0,0,0};

void setup(){
arduino= new Arduino(this, Arduino.list()[2],57600); //Arduino.list is for the USB port, try 1 or 0 instead of 2 if this doesn’t work; 57600 is the connection speed
arduino.pinMode(dial1, Arduino.INPUT); //similar to arduino, says that the pin is an input
size(320,240); //sets the size of the canvas where drawing will occur
stroke(0); //sets line color to black
int sensorValue = arduino.analogRead(dial1);
showRGB(int(map(sensorValue,0,1023,0,768))); 
img = loadImage("bookfountaincincinati.jpg");
}

void draw(){
  int sensorValue = arduino.analogRead(dial1);
  println(sensorValue);
  showRGB(int(map(sensorValue,0,1023,0,768)));
  //showRGB(int(random(0,769)));
  /*8rgb[0] = 0;
  rgb[1] = 0;
  rgb[2] = 0;*/
  
  loadPixels();
  img.loadPixels();
  for (int y = 0; y < height; y++){
   for(int x = 0; x < width; x++) {
     int loc = x+y*width;
     
     //get current colors of pixels
     float r = red(img.pixels[loc]);
     float g = green(img.pixels[loc]);
     float b = blue(img.pixels[loc]);
     
     r = (r+rgb[0])%256;
     g = (g+rgb[1])%256;
     b = (b+rgb[2])%256;
     
     pixels[loc] = color(r,g,b);
   }
  }
  image(img,0,0);
  updatePixels();
  img.resize(320,240);
}

void showRGB(int col)
{
  int redIntensity;
  int greenIntensity;
  int blueIntensity;

  if (col <= 255)          // zone 1
  {
    redIntensity = 255 - col;    // red goes from on to off
    greenIntensity = col;        // green goes from off to on
    blueIntensity = 0;             // blue is always off
  }
  else if (col <= 511)     // zone 2
  {
    redIntensity = 0;                     // red is always off
    greenIntensity = 255 - (col - 256); // green on to off
    blueIntensity = (col - 256);        // blue off to on
  }
  else // color >= 512       // zone 3
  {
    redIntensity = (col - 512);         // red off to on
    greenIntensity = 0;                   // green is always off
    blueIntensity = 255 - (col - 512);  // blue on to off
  }

  rgb[0] = redIntensity;
  rgb[2] = blueIntensity;
  rgb[1] = greenIntensity;
}
