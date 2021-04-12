//=========================================================================
// CDPlayer.h
// Interface file defining a CD player for an entertainment center to be 
//    used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef CDPLAYER_H
#define CDPLAYER_H

class CDPlayer
{
	public:
		CDPlayer();				// Class constructor
		~CDPlayer();			// Class destructor
		void on();				// Turn the CD Player on
		void off();				// Turn the CD Player off
		void play();				// Play the CD
		void pause();			// Pause the CD
		void stop();				// Stop the CD
		void eject();			// Eject the CD
};

#endif