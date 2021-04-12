//====================================================================
// Stereo.cpp
// Device class for the demonstration of the Command Design Pattern
// Author: Dr. Rick Coleman
//====================================================================
#include "Stereo.h"
#include <iostream>

using namespace std;

//-----------------------------------
// Default constructor
//-----------------------------------
Stereo::Stereo()
{
}

//-----------------------------------
// Destructor
//-----------------------------------
Stereo::~Stereo()
{
}

//-----------------------------------
// Turn the stereo on
//-----------------------------------
void Stereo::on()
{
	cout << "\tStereo is now on. CD player selected.  Volume adjusted.\n";
}

//-----------------------------------
// Turn the stereo off
//-----------------------------------
void Stereo::off()
{
	cout << "\tStereo is now off.\n";
}

