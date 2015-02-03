/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

int led = 13;
int led2 = 7;
char myWord[] = "Hello World";
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
  //myWord = Serial.read();
}

// the loop function runs over and over again forever
void loop() {
  for( int i = 0; i < sizeof(myWord); i++)
  {
    Serial.write(myWord[i]);
    playLetter(myWord[i]);
    delay(600);
  }
  delay(800);
}

void playLetter(char letter)
{
  switch (letter) {
    case 'A':
    case 'a':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      break;
    case 'B':
    case 'b':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'C':
    case 'c':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'D':
    case 'd':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
    case 'E':
    case 'e':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'F':
    case 'f':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'G':
    case 'g':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'H':
    case 'h':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'I':
    case 'i':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'J':
    case 'j':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'K':
    case 'k':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'L':
    case 'l':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'M':
    case 'm':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'N':
    case 'n':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'O':
    case 'o':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'P':
    case 'p':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'Q':
    case 'q':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'R':
    case 'r':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'S':
    case 's':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case 'T':
    case 't':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'U':
    case 'u':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'V':
    case 'v':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'W':
    case 'w':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'X':
    case 'x':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'Y':
    case 'y':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case 'Z':
    case 'z':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case ' ':
      delay (800);
    case '1':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case '2':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case '3':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case '4':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
    case '5':
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case '6':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case '7':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case '8':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case '9':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(200);
      digitalWrite(led, LOW);
    case '0':
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
      delay(200);
      digitalWrite(led, HIGH);
      delay(600);
      digitalWrite(led, LOW);
   default:
      break;
  }
}
