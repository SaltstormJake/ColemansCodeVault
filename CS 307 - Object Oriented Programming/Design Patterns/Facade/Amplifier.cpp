//=========================================================================
// Amplifier.cpp
// Implementation file defining an amplifier for an entertainment center to  
//    be used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#include "Amplifier.h"

#include <iostream>
using namespace std;

//-----------------------------------
// Class constructor
//-----------------------------------
Amplifier::Amplifier()
{
}

//-----------------------------------
// Class destructor
//-----------------------------------
Amplifier::~Amplifier()
{
}

//-----------------------------------
// Turn the amplifier on
//-----------------------------------
void Amplifier::on()
{
	cout << "\tThe amplifier is now on.\n";
}

//-----------------------------------
// Turn the amplifier off
//-----------------------------------
void Amplifier::off()
{
	cout << "\tThe amplifier is now off.\n";
}

//-----------------------------------
// Set input from CD player
//-----------------------------------
void Amplifier::setCD()
{
	cout << "\tThe amplifier is for CD input/output.\n";
}

//-----------------------------------
// Set input from DVD player
//-----------------------------------
void Amplifier::setDVD()
{
	cout << "\tThe amplifier is for DVD input/output.\n";
}

//-----------------------------------
// Set input from tuner
//-----------------------------------
void Amplifier::setTuner()
{
	cout << "\tThe amplifier is for tuner input/output.\n";
}

//-----------------------------------
// Set sound for CD player and tuner input
//-----------------------------------
void Amplifier::setStereosound()
{
	cout << "\tThe amplifier is for stereo sound output.\n";
}

//-----------------------------------
// Set sound for DVD player input
//-----------------------------------
void Amplifier::setSurroundSound()
{
	cout << "\tThe amplifier is for surround sound output.\n";
}

//-----------------------------------
// Set the volume level
//-----------------------------------
void Amplifier::setVolume(int level)
{
	cout << "\tThe amplifier volume level is set to " << level << "\n";
}

