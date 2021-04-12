//=========================================================================
// Tuner.h
// Interface file defining a Tuner for an entertainment center to be used
//    in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef TURNER_H
#define TURNER_H

class Tuner
{
	public:
		Tuner();					// Class constructor
		~Tuner();					// Class destructor
		void on();					// Turn the tuner on
		void off();					// Turn the tuner off
		void setAM();				// Tune the AM band
		void setFM();				// Tune the FM band
		void setFrequency(double f);// Tune to this frequency
};

#endif
