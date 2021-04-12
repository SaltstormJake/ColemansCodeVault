//======================================================================================
// Turkey.h
// Interface file defining a parent class for the Adapter design pattern demonstration.
// Author: Dr. Rick Coleman
//======================================================================================
#ifndef TURKEY_H
#define TURKEY_H

class Turkey
{
	public:
		Turkey();			// Class constructor
		~Turkey();			// Class destructor
		void gobble();		// Gobble like a turkey
		void fly();			// Fly in short hops
		void display();		// Show yourself, turkey!
};

#endif