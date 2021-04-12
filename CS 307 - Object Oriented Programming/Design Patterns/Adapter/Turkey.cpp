//===================================================================================
// Turkey.cpp
// Implementation file defining a class for the Adapter design pattern demonstration.
// Author: Dr. Rick Coleman
//===================================================================================
#include "Turkey.h"

#include <iostream>

using namespace std;

//-----------------------------------
// Class constructor
//-----------------------------------
Turkey::Turkey()
{
}

//-----------------------------------
// Class destructor
//-----------------------------------
Turkey::~Turkey()
{
}
		
//-----------------------------------
// Gobble like a turkey
//-----------------------------------
void Turkey::gobble()
{
	cout << "\tgobble-gobble-gobble-gobble-gobble\n";
}

//-----------------------------------
// Fly like a turkey
//-----------------------------------
void Turkey::fly()
{
	cout << "\tFlutter-flutter-flop\n";
}

//-----------------------------------
// Show yourself, turkey!
//-----------------------------------
void Turkey::display()
{
	cout << "I look like a turkey.\n";
}
