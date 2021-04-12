//===================================================================================
// RubberDuckie.cpp
// Implementation file defining a class for the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#include "RubberDuckie.h"
#include "Squeak.h"
#include "FlyNoWay.h"

#include <iostream>

using namespace std;

//-----------------------------------
// Class constructor
//-----------------------------------
RubberDuckie::RubberDuckie()
{
	this->SetQuackBehavior(new Squeak());
	this->SetFlyBehavior(new FlyNoWay());
}

//-----------------------------------
// Class destructor
//-----------------------------------
RubberDuckie::~RubberDuckie()
{
}
					
//-----------------------------------
// All ducks swim. Maybe?
//-----------------------------------
void RubberDuckie::Swim()
{
	cout << "Rubber duckies can't swim, but we can float.\n";
}

//-----------------------------------
// Show yourself, duck!
//-----------------------------------
void RubberDuckie::display()
{
	cout << "I look like a rubber duckie.\n";
}
