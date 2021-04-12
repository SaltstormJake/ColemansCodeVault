//=========================================================================
// DVDPlayer.pp
// Implementation file defining a DVD player for an entertainment center to  
//    be used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#include "DVDPlayer.h"

#include <iostream>
using namespace std;

//------------------------------
// Class constructor
//------------------------------
DVDPlayer::DVDPlayer()
{
}

//------------------------------
// Class destructor
//------------------------------
DVDPlayer::~DVDPlayer()
{
}
		
//------------------------------
// Turn the DVD Player on
//------------------------------
void DVDPlayer::on()
{
	cout << "\tThe DVD player is now on.\n";
}
			
//------------------------------
// Turn the DVD Player off
//------------------------------
void DVDPlayer::off()
{
	cout << "\tThe DVD player is now off.\n";
}

//------------------------------
// Play the DVD
//------------------------------
void DVDPlayer::play()
{
	cout << "\tThe DVD player is now playing.\n";
}

//------------------------------
// Pause the DVD
//------------------------------
void DVDPlayer::pause()
{
	cout << "\tThe DVD player is now paused.\n";
}

//------------------------------
// Stop the DVD
//------------------------------
void DVDPlayer::stop()
{
	cout << "\tThe DVD player is now stopped.\n";
}

//------------------------------
// Eject the DVD
//------------------------------
void DVDPlayer::eject()
{
	cout << "\tThe DVD player has ejected the DVD.\n";
}
	
//------------------------------
// Output surround sound audio
//------------------------------
void DVDPlayer::setSurroundAudio()
{
	cout << "\tThe DVD player is now set to output surround sound.\n";
}

//------------------------------
// Output stereo audio
//------------------------------
void DVDPlayer::setTwoChannelAudio()
{
	cout << "\tThe DVD player is now set to output 2-channel stereo sound.\n";
}

