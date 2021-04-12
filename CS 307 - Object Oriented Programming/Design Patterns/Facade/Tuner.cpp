//=========================================================================
// Tuner.cpp
// Implementation file defining a Tuner for an entertainment center to be 
//    used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#include "Tuner.h"

#include <iostream>
using namespace std;

//---------------------------------
// Class constructor
//---------------------------------
Tuner::Tuner()
{
}

//---------------------------------
// Class destructor
//---------------------------------
Tuner::~Tuner()
{
}

//---------------------------------
// Turn the tuner on
//---------------------------------
void Tuner::on()
{
	cout << "\tThe tuner is now on...\n";
}

//---------------------------------
// Turn the tuner off
//---------------------------------
void Tuner::off()
{
	cout << "\tThe tuner is now off...\n";
}
		
//---------------------------------
// Tune the AM band
//---------------------------------
void Tuner::setAM()
{
	cout << "\tThe tuner is now set to receive the AM band...\n";
}
			
//---------------------------------
// Tune the FM band
//---------------------------------
void Tuner::setFM()
{
	cout << "\tThe tuner is now set to receive the FM band...\n";
}
				
//---------------------------------
// Tune to this frequency
//---------------------------------
void Tuner::setFrequency(double f)
{
	cout << "\tThe tuner is now set to frequency " << f << "...\n";
}

