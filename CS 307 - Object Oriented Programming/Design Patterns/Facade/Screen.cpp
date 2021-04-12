//=========================================================================
// Screen.pp
// Implementation file defining a screen for an entertainment center to  
//    be used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#include "Screen.h"

#include <iostream>
using namespace std;

//------------------------------
// Class constructor
//------------------------------
Screen::Screen()
{
}

//------------------------------
// Class destructor
//------------------------------
Screen::~Screen()
{
}

//------------------------------
// Bring the screen down
//------------------------------
void Screen::down()
{
	cout << "\tThe screen is now down.\n";
}
			
//------------------------------
// Raise the screen up
//------------------------------
void Screen::up()
{
	cout << "\tThe screen is now up.\n";
}

