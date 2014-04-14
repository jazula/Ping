#include <Arduino.h>
#include "Ping.h"

Ping::Ping(int pin)
{
	pingPin = pin;
}

long Ping::pingen()
{
  long duration, cm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);
  cm = duration / 29 / 2;
  if (cm < 200 && cm > 2){
    return cm;
  }
  else{
    return -1;
  }
}
