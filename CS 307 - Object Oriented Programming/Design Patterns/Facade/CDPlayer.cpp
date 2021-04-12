//=========================================================================
// CDPlayer.pp
// Implementation file defining a CD player for an entertainment center to  
//    be used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#include "CDPlayer.h"

#include <iostream>
using namespace std;

//------------------------------
// Class constructor
//------------------------------
CDPlayer::CDPlayer()
{
}

//------------------------------
// Class destructor
//------------------------------
CDPlayer::~CDPlayer()
{
}
		
//------------------------------
// Turn the CD Player on
//------------------------------
void CDPlayer::on()
{
	cout << "\tThe CD player is now on.\n";
}
			
//------------------------------
// Turn the CD Player off
//------------------------------
void CDPlayer::off()
{
	cout << "\tThe CD player is now of.\n";
}

//------------------------------
// Play the CD
//------------------------------
void CDPlayer::play()
{
	cout << "\tThe CD player is now playing.\n";
}

//------------------------------
// Pause the CD
//------------------------------
void CDPlayer::pause()
{
	cout << "\tThe CD player is now paused.\n";
}

//------------------------------
// Stop the CD
//------------------------------
void CDPlayer::stop()
{
	cout << "\tThe CD player is now stopped.\n";
}

//------------------------------
// Eject the CD
//------------------------------
void CDPlayer::eject()
{
	cout << "\tThe CD player has ejected the CD.\n";
}
