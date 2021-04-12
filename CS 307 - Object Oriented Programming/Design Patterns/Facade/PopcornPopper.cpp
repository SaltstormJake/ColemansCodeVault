//=========================================================================
// PopcornPopper.cpp
// Implementation file defining a popcorn popper for an entertainment center  
//    to be used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#include "PopcornPopper.h"

#include <iostream>
using namespace std;

//------------------------------
// Class constructor
//------------------------------
PopcornPopper::PopcornPopper()
{
}

//------------------------------
// Class destructor
//------------------------------
PopcornPopper::~PopcornPopper()
{
}
	
//------------------------------
// Turn the PopcornPopper on
//------------------------------
void PopcornPopper::on()
{
	cout << "\tThe popcorn popper is now on.\n";
}
			
//------------------------------
// Turn the PopcornPopper off
//------------------------------
void PopcornPopper::off()
{
	cout << "\tThe popcorn popper is now of.\n";
}
			
//------------------------------
// Start the PopcornPopper popping
//------------------------------
void PopcornPopper::pop()
{
	cout << "\tThe popcorn popper is now popping.\n";
}
			
