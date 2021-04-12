//===================================================================================
// MallardDuck.cpp
// Implementation file defining a class for the Strategy design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include <iostream>

using namespace std;

//-----------------------------------
// Class constructor
//-----------------------------------
MallardDuck::MallardDuck()
{
	this->SetQuackBehavior(new Quack());
	this->SetFlyBehavior(new FlyWithWings());
}

//-----------------------------------
// Class destructor
//-----------------------------------
MallardDuck::~MallardDuck()
{
}
			
//-----------------------------------
// All ducks swim. Maybe?
//-----------------------------------
void MallardDuck::Swim()
{
	cout << "I swim like a mallard duck\n";
}

//-----------------------------------
// Show yourself, duck!
//-----------------------------------
void MallardDuck::display()
{
	cout << "I look like a mallard duck.\n";
}

