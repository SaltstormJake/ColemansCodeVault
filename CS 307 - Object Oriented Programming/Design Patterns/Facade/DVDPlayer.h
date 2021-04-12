//=========================================================================
// DVDPlayer.h
// Interface file defining a CD player for an entertainment center to be 
//    used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef DVDPLAYER_H
#define DVDPLAYER_H

class DVDPlayer
{
	public:
		DVDPlayer();				// Class constructor
		~DVDPlayer();				// Class destructor
		void on();					// Turn the CD Player on
		void off();					// Turn the CD Player off
		void play();				// Play the CD
		void pause();				// Pause the CD
		void stop();				// Stop the CD
		void eject();				// Eject the CD
		void setSurroundAudio();	// Output surround sound audio
		void setTwoChannelAudio();  // Output stereo audio
};

#endif