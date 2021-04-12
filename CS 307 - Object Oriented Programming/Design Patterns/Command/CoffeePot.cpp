//====================================================================
// CoffeePot.cpp
// Device class for the demonstration of the Command Design Pattern
// Author: Dr. Rick Coleman
//====================================================================
#include "CoffeePot.h"
#include <iostream>

using namespace std;

//-----------------------------------
// Default constructor
//-----------------------------------
CoffeePot::CoffeePot()
{
}

//-----------------------------------
// Destructor
//-----------------------------------
CoffeePot::~CoffeePot()
{
}

//-----------------------------------
// Turn the coffee pot on
//-----------------------------------
void CoffeePot::on()
{
	cout << "\tCoffee pot is now perking.\n";
}

//-----------------------------------
// Turn the coffee pot off
//-----------------------------------
void CoffeePot::off()
{
	cout << "\tCoffee pot is now off.\n";
}

