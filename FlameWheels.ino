/*
 Title:        FlameWheels
 Description:  Control a huge flame with wheels.
 Author:       Karl Kangur <karl.kangur@gmail.com>
 Date:         2012-11-09
 Version:      1.0
 Website:      http://robopoly.ch
*/

#include <robopoly.h>
#include <util/delay.h>

#define SPEED       30

// control pins
#define REMOTE_PWR  PB(7)
#define RIGHT       PB(6)
#define LEFT        PB(5)
#define FORWARDS    PB(4)
#define BACKWARDS   PB(3)

void setup()
{
  pinMode(REMOTE_PWR, 1);
  digitalWrite(REMOTE_PWR, 1);
}

void loop()
{
  if(digitalRead(LEFT))
  {
    setSpeed(-SPEED, SPEED);
  }
  else if(digitalRead(RIGHT))
  {
    setSpeed(SPEED, -SPEED);
  }
  else if(digitalRead(FORWARDS))
  {
    setSpeed(SPEED, SPEED);
  }
  else if(digitalRead(BACKWARDS))
  {
    setSpeed(-SPEED, -SPEED );
  }
  else
  {
    setSpeed(0, 0);
  }
  _delay_ms(100);
}
