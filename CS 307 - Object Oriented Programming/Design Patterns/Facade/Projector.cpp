//=========================================================================
// Projector.cpp
// Implementation file defining a Projector for an entertainment center to 
//    be used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#include "Projector.h"

#include <iostream>
using namespace std;

//--------------------------------
// Class constructor
//--------------------------------
Projector::Projector()
{
}

//--------------------------------
// Class destructor
//--------------------------------
Projector::~Projector()
{
}
			
//--------------------------------
// Turn the projector on
//--------------------------------
void Projector::on()
{
	cout << "\tThe projector is now on.\n";
}
					
//--------------------------------
// Turn the projector off
//--------------------------------
void Projector::off()
{
	cout << "\tThe projector is now off.\n";
}
				
//--------------------------------
// Project TV signal
//--------------------------------
void Projector::TVMode()
{
	cout << "\tThe projector is now set for TV input.\n";
}
				
//--------------------------------
// Project DVD signal
//--------------------------------
void Projector::WideScreenMode()
{
	cout << "\tThe projector is now set for wide screen DVD input.\n";
}
	
