//====================================================================
// Sprinkler.h
// Device class for the demonstration of the Command Design Pattern
// Author: Dr. Rick Coleman
//====================================================================
#ifndef SPRINKLER_H
#define SPRINKLER_H

class Sprinkler
{
	public:
		Sprinkler();
		~Sprinkler();
		void on();
		void off();
};

#endif