//========================================================================
// AVSystemFacade.h
// A demonstration of the Facade Design Pattern to control a home theater
//   system.
// Author: Dr. Rick Coleman
//========================================================================
#ifndef AVSYSTEMFACADE_H
#define AVSYSTEMFACADE_H

#include "Amplifier.h"
#include "CDPlayer.h"
#include "DVDPlayer.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"
#include "Tuner.h"
#include "AVSystemFacade.h"

class AVSystemFacade
{
	private:
		Amplifier *amp;
		CDPlayer *cdp;
		DVDPlayer *dvdp;
		PopcornPopper *pp;
		Projector *proj;
		Screen *scn;
		Tuner *tnr;

	public:
		AVSystemFacade();						// Constructor
		~AVSystemFacade();						// Destructor
		void setAmplifier(Amplifier *a);		// Set the Amplifier
		void setCDPlayer(CDPlayer *c);			// Set the CDPlayer
		void setDVDPlayer(DVDPlayer *d);		// Set the DVDPlayer
		void setPopcornPopper(PopcornPopper *p);// Set the PopcornPopper
		void setProjector(Projector *p);		// Set the Projector
		void setScreen(Screen *s);				// Set the Screen
		void setTuner(Tuner *t);				// Set the Tuner
		void playMovie();						// Play a movie
		void endMovie();						// Stop the movie
		void playTuner();						// Play FM music on my favorite station
		void stopTuner();						// Turn the tuner off
		void playCD();							// Play a CD
		void stopCD();							// Stop the CD 
};

#endif