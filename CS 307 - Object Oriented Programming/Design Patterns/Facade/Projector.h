//=========================================================================
// Projector.h
// Interface file defining a Projector for an entertainment center to be used
//    in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef PROJECTOR_H
#define PROJECTOR_H

class Projector
{
	public:
		Projector();			// Class constructor
		~Projector();			// Class destructor
		void on();				// Turn the projector on
		void off();				// Turn the projector off
		void TVMode();			// Project TV signal
		void WideScreenMode();	// Project DVD signal
};

#endif
