// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

int pos = 0;

Servo servo;

void setup()
{
  servo.attach(5);
}

void loop()
{
  
  for (pos = 0; pos <= 180; pos += 1) {
    servo.write(pos);
    delay(15); 
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servo.write(pos);

    delay(15); 
  }
}