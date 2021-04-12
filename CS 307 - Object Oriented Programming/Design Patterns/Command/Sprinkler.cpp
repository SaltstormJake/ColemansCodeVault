//====================================================================
// Sprinkler.cpp
// Device class for the demonstration of the Command Design Pattern
// Author: Dr. Rick Coleman
//====================================================================
#include "Sprinkler.h"
#include <iostream>

using namespace std;

//-----------------------------------
// Default constructor
//-----------------------------------
Sprinkler::Sprinkler()
{
}

//-----------------------------------
// Destructor
//-----------------------------------
Sprinkler::~Sprinkler()
{
}

//-----------------------------------
// Turn the sprinkler on
//-----------------------------------
void Sprinkler::on()
{
	cout << "\tSprinkler is now on to water the lawn.\n";
}

//-----------------------------------
// Turn the sprinkler off
//-----------------------------------
void Sprinkler::off()
{
	cout << "\tSprinkler is now off.\n";
}

