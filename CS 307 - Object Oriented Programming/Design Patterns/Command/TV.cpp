//====================================================================
// TV.cpp
// Device class for the demonstration of the Command Design Pattern
// Author: Dr. Rick Coleman
//====================================================================
#include "TV.h"
#include <iostream>

using namespace std;

//-----------------------------------
// Default constructor
//-----------------------------------
TV::TV()
{
}

//-----------------------------------
// Destructor
//-----------------------------------
TV::~TV()
{
}

//-----------------------------------
// Turn the TV on
//-----------------------------------
void TV::on()
{
	cout << "\tTV is now on. Channel set to 913.  Volume adjusted.\n";
}

//-----------------------------------
// Turn the TV off
//-----------------------------------
void TV::off()
{
	cout << "\tTV is now off.\n";
}

