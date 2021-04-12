//====================================================================
// Light.cpp
// Device class for the demonstration of the Command Design Pattern
// Author: Dr. Rick Coleman
//====================================================================
#include "Light.h"
#include <iostream>

using namespace std;

//-----------------------------------
// Default constructor
//-----------------------------------
Light::Light()
{
}

//-----------------------------------
// Destructor
//-----------------------------------
Light::~Light()
{
}

//-----------------------------------
// Turn the light on
//-----------------------------------
void Light::on()
{
	cout << "\tLight is now on.\n";
}

//-----------------------------------
// Turn the light off
//-----------------------------------
void Light::off()
{
	cout << "\tLight is now off.\n";
}

