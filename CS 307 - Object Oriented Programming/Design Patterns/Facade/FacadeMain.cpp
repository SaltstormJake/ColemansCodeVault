//=============================================================
// FacadeMain.cpp
// A demonstration of the Facade design pattern in C++
// Author: Dr. Rick Coleman
//=============================================================
#include "Amplifier.h"
#include "CDPlayer.h"
#include "DVDPlayer.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"
#include "Tuner.h"
#include "AVSystemFacade.h"

#include <iostream>

using namespace std;

void main()
{
	Amplifier *amp = new Amplifier();
	CDPlayer *cdp = new CDPlayer();
	DVDPlayer *dvdp = new DVDPlayer();
	PopcornPopper *pp = new PopcornPopper();
	Projector *proj = new Projector();
	Screen *scn = new Screen();
	Tuner *tnr = new Tuner();

	cout << "=== Demonstration of the Facade Design Pattern ===\n\n";
	cout << "Before I got my Facade to simplify things if I wanted\n";
	cout << "to watch a movie I had to...\n\n";

	cout << "Turn on the popcorn popper...\n";
	pp->on();
	cout << "Start it popping the popcorn...\n";
	pp->pop();
	cout << "Turn on the amplifier...\n";
	amp->on();
	cout << "Set it to DVD input...\n";
	amp->setDVD();
	cout << "Set it for surround sound...\n";
	amp->setSurroundSound();
	cout << "Set the volume level to 7...\n";
	amp->setVolume(7);
	cout << "Lower the screen...\n";
	scn->down();
	cout << "Turn on the projector...\n";
	proj->on();
	cout << "Set it for wide screen mode...\n";
	proj->WideScreenMode();
	cout << "Turn on the DVD Player...\n";
	dvdp->on();
	cout << "Set it for surround sound...\n";
	dvdp->setSurroundAudio();
	cout << "Set it to play...\n";
	dvdp->play();
	cout << "\n\n";

	cout << "And after the movie, if I wanted to switch to listening\n";
	cout << "  to the FM radio. I had to...\n";
	cout << "Turn off the popcorn popper...\n";
	pp->off();
	cout << "Switch the amplifier to tuner input...\n";
	amp->setTuner();
	cout << "Set it for stereo sound...\n";
	amp->setStereosound();
	cout << "Set the volume level to 10...\n";
	amp->setVolume(10);
	cout << "Raise the screen...\n";
	scn->up();
	cout << "Turn of the projector...\n";
	proj->off();
	cout << "Turn off the DVD Player...\n";
	dvdp->off();
	cout << "Turn on the tuner...\n";
	tnr->on();
	cout << "Set it for FM...\n";
	tnr->setFM();
	cout << "Set the frequency to my favorite FM station...\n";
	tnr->setFrequency(98.2);
	cout << "\n\n";

	cout << "But, then I installed a Facade and connected all my home\n";
	cout << "  theater equipment to it...\n\n";
	AVSystemFacade *avf = new AVSystemFacade();
	avf->setAmplifier(amp);
	avf->setCDPlayer(cdp);
	avf->setDVDPlayer(dvdp);
	avf->setProjector(proj);
	avf->setScreen(scn);
	avf->setTuner(tnr);
	avf->setPopcornPopper(pp);
	cout << "\n\nAnd, now all I have to do to watch a movie is\n";
	cout << "    click \"Watch Movie\"...\n\n";
	avf->playMovie();
	cout << "\n\nAnd when the movie is over I click \"Stop Movie\"...\n\n";
	avf->endMovie();
	cout << "\n\n";
	cout << "To listen to radio music I click \"Play FM\"...\n\n";
	avf->playTuner();
	cout << "\nAnd to switch to listening to a CD I click \"Tuner Off\" and \"Play CD\"\n\n";
	avf->stopTuner();
	avf->playCD();
	cout << "\n\nWhat could be easier?\n";
}