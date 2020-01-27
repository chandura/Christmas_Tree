//Code to create and LED based Christmas decoration
//Testing a new branch

const int redleft= 3;
const int greenright = 4;
const int yellow = 5;
const int redright = 6;
const int greenleft = 7;
const int gap=1000;
const int times = 7;

#include <JeeLib.h> // Low power functions library 
ISR(WDT_vect) { Sleepy::watchdogEvent(); } // Setup the watchdog

void setup () {
  Serial.begin(9600); //Open Pin A0 as a serial port 
  
  //Loop round pins number 2 through to 6 and set them as output pins
  for (int pinNumber = 3; pinNumber <8; pinNumber++){
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);}
}

void loop () {
for (int count = 1; count <times; count++){
  digitalWrite(yellow, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
  
  digitalWrite(greenleft, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
  
  digitalWrite(greenright, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
  
  digitalWrite(redleft, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
  
  digitalWrite(redright, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay(gap);

  digitalWrite(yellow, LOW);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
  
  digitalWrite(greenleft, LOW);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
  
  digitalWrite(greenright, LOW);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
  
  digitalWrite(redleft, LOW);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
  
  digitalWrite(redright, LOW);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
}

for (int count = 1; count <times; count++){
  digitalWrite(yellow, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(yellow, LOW);
  digitalWrite(greenleft, HIGH);
  digitalWrite(greenright, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay(gap);
  digitalWrite(greenleft, LOW);
  digitalWrite(greenright, LOW);
  digitalWrite(redleft, HIGH);
  digitalWrite(redright, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(redleft, LOW);
  digitalWrite(redright, LOW);
}

for (int count = 1; count <times; count++){
  digitalWrite(redleft, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(redleft, LOW);
  digitalWrite(greenleft, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(greenleft, LOW);
  digitalWrite(yellow, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(yellow, LOW);
  digitalWrite(greenright, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(greenright, LOW);
  digitalWrite(redright, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(redright, LOW);
}

for (int count = 1; count <times; count++){
  digitalWrite(redleft, HIGH);
  digitalWrite(redright, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(redleft, LOW);
  digitalWrite(redright, LOW);
  digitalWrite(greenleft, HIGH);
  digitalWrite(greenright, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(greenleft, LOW);
  digitalWrite(greenright, LOW);
  digitalWrite(yellow, HIGH);
  Sleepy::loseSomeTime(gap);
  //delay (gap);
  digitalWrite(yellow, LOW);
}

}
