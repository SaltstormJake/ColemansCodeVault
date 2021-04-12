//===================================================================================
// RedheadDuck.cpp
// Implementation file defining a class for the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#include "RedheadDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

#include <iostream>

using namespace std;

//-----------------------------------
// Class constructor
//-----------------------------------
RedheadDuck::RedheadDuck()
{
	this->SetQuackBehavior(new Quack());
	this->SetFlyBehavior(new FlyWithWings());
}

//-----------------------------------
// Class destructor
//-----------------------------------
RedheadDuck::~RedheadDuck()
{
}
			
//-----------------------------------
// All ducks swim. Maybe?
//-----------------------------------
void RedheadDuck::Swim()
{
	cout << "I swim like a redhead duck\n";
}

//-----------------------------------
// Show yourself, duck!
//-----------------------------------
void RedheadDuck::display()
{
	cout << "I look like a redhead duck.\n";
}

