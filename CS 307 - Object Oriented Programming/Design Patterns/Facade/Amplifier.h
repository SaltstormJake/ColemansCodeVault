//=========================================================================
// Amplifier.h
// Interface file defining an amplifier for an entertainment center to be 
//    used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef AMPLIFIER_H
#define AMPLIFIER_H

class Amplifier
{
	public:
		Amplifier();				// Class constructor
		~Amplifier();				// Class destructor
		void on();					// Turn the amplifier on
		void off();					// Turn the amplifier off
		void setCD();				// Set input from CD player
		void setDVD();				// Set input from DVD player
		void setTuner();			// Set input from tuner
		void setStereosound();		// Set sound for CD player and tuner input
		void setSurroundSound();	// Set sound for DVD player input
		void setVolume(int level);	// Set the volume level
};

#endif
