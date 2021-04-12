//===================================================================================
// DecoyDuck.cpp
// Implementation file defining a class for the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#include "QuackBehavior.h"
#include "FlyBehavior.h"
#include "DecoyDuck.h"
#include "MuteDuck.h"
#include "FlyNoWay.h"

#include <iostream>

using namespace std;

//-----------------------------------
// Class constructor
//-----------------------------------
DecoyDuck::DecoyDuck()
{
	this->SetQuackBehavior(new MuteDuck());
	this->SetFlyBehavior(new FlyNoWay());
}

//-----------------------------------
// Class destructor
//-----------------------------------
DecoyDuck::~DecoyDuck()
{
}
		
//-----------------------------------
// All ducks swim. Maybe?
//-----------------------------------
void DecoyDuck::Swim()
{
	cout << "I float like a decoy duck\n";
}

//-----------------------------------
// Show yourself, duck!
//-----------------------------------
void DecoyDuck::display()
{
	cout << "I look like a decoy duck.\n";
}
