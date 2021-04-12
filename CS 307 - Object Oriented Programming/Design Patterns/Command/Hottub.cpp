//====================================================================
// Hottub.cpp
// Device class for the demonstration of the Command Design Pattern
// Author: Dr. Rick Coleman
//====================================================================
#include "Hottub.h"
#include <iostream>

using namespace std;

//-----------------------------------
// Default constructor
//-----------------------------------
Hottub::Hottub()
{
}

//-----------------------------------
// Destructor
//-----------------------------------
Hottub::~Hottub()
{
}

//-----------------------------------
// Turn the hot tub on
//-----------------------------------
void Hottub::on()
{
	cout << "\tHottub is now on. Water temperature set.  Water jets on.\n";
}

//-----------------------------------
// Turn the hot tub off
//-----------------------------------
void Hottub::off()
{
	cout << "\tHottub is now off.\n";
}

