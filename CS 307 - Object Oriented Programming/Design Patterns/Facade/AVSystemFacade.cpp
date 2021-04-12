//========================================================================
// AVSystemFacade.cpp
// A demonstration of the Facade Design Pattern to control a home theater
//   system.
// Author: Dr. Rick Coleman
//========================================================================
#include "AVSystemFacade.h"
#include <iostream>

using namespace std;

//----------------------------------
// Constructor
//----------------------------------
AVSystemFacade::AVSystemFacade()
{
}

//----------------------------------
// Destructor
//----------------------------------
AVSystemFacade::~AVSystemFacade()
{
}

//----------------------------------
// Set the Amplifier
//----------------------------------
void AVSystemFacade::setAmplifier(Amplifier *a)
{
	amp = a;
	cout << "\tSetting the amplifier in the AV Facade.\n"; 
}

//----------------------------------
// Set the CDPlayer
//----------------------------------
void AVSystemFacade::setCDPlayer(CDPlayer *c)
{
	cdp = c;
	cout << "\tSetting the CD player in the AV Facade.\n"; 
}

//----------------------------------
// Set the DVDPlayer
//----------------------------------
void AVSystemFacade::setDVDPlayer(DVDPlayer *d)
{
	dvdp = d;
	cout << "\tSetting the DVD player in the AV Facade.\n"; 
}

//----------------------------------
// Set the PopcornPopper
//----------------------------------
void AVSystemFacade::setPopcornPopper(PopcornPopper *p)
{
	pp = p;
	cout << "\tSetting the popcorn popper in the AV Facade.\n"; 
}

//----------------------------------
// Set the Projector
//----------------------------------
void AVSystemFacade::setProjector(Projector *p)
{
	proj = p;
	cout << "\tSetting the projector in the AV Facade.\n"; 
}

//----------------------------------
// Set the Screen
//----------------------------------
void AVSystemFacade::setScreen(Screen *s)
{
	scn = s;
	cout << "\tSetting the screen in the AV Facade.\n"; 
}

//----------------------------------
// Set the Tuner
//----------------------------------
void AVSystemFacade::setTuner(Tuner *t)
{
	tnr = t;
	cout << "\tSetting the tuner in the AV Facade.\n"; 
}

//----------------------------------
// Play a movie
//----------------------------------
void AVSystemFacade::playMovie()
{
	cout << "The AV Facade is setting up to play a movie...\n"; 
	pp->on();
	pp->pop();
	amp->on();
	amp->setDVD();
	amp->setSurroundSound();
	amp->setVolume(7);
	scn->down();
	proj->on();
	proj->WideScreenMode();
	dvdp->on();
	dvdp->setSurroundAudio();
	dvdp->play();
}

//----------------------------------
// Stop the movie
//----------------------------------
void AVSystemFacade::endMovie()
{
	cout << "The AV Facade is ending a movie...\n"; 
	pp->off();
	amp->off();
	scn->up();
	proj->off();
	dvdp->off();
}

//----------------------------------
// Play FM music on my favorite station
//----------------------------------
void AVSystemFacade::playTuner()
{
	cout << "The AV Facade is setting up play music from the tuner...\n"; 
	amp->on();
	amp->setTuner();
	amp->setStereosound();
	amp->setVolume(10);
	tnr->on();
	tnr->setFM();
	tnr->setFrequency(98.2);
}

//----------------------------------
// Turn the tuner off
//----------------------------------
void AVSystemFacade::stopTuner()
{
	cout << "The AV Facade is turning off the tuner...\n"; 
	amp->off();
	tnr->off();
}

//----------------------------------
// Play a CD
//----------------------------------
void AVSystemFacade::playCD()
{
	cout << "The AV Facade is setting up to play music from the CD player...\n"; 
	amp->on();
	amp->setCD();
	amp->setStereosound();
	amp->setVolume(8);
	cdp->on();
	cdp->play();
}

//----------------------------------
// Stop the CD 
//----------------------------------
void AVSystemFacade::stopCD()
{
	cout << "The AV Facade is turning off the CD player...\n"; 
	amp->off();
	cdp->eject();
	cdp->off();
}

