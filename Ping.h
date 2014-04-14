/*
Jorg 2013
*/

#ifndef Ping_h
#define Ping_h

#include <Arduino.h>
class Ping
{
	public:
		Ping(int pin);
		long pingen();
	private:
		int pingPin;
};

#endif
