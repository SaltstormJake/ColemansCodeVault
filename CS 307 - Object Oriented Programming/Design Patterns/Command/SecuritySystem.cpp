//====================================================================
// SecuritySystem.cpp
// Device class for the demonstration of the Command Design Pattern
// Author: Dr. Rick Coleman
//====================================================================
#include "SecuritySystem.h"
#include <iostream>

using namespace std;

//-----------------------------------
// Default constructor
//-----------------------------------
SecuritySystem::SecuritySystem()
{
}

//-----------------------------------
// Destructor
//-----------------------------------
SecuritySystem::~SecuritySystem()
{
}

//-----------------------------------
// Turn the security system on
//-----------------------------------
void SecuritySystem::on()
{
	cout << "\tSecurity System is now armed. You have 30 seconds to exit.\n";
}

//-----------------------------------
// Turn the security system off
//-----------------------------------
void SecuritySystem::off()
{
	cout << "\tSecurity System is now off.\n";
}

