//=========================================================================
// Screen.h
// Interface file defining a screen for an entertainment center to be used
//    in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef SCREEN_H
#define SCREEN_H

class Screen
{
	public:
		Screen();				// Class constructor
		~Screen();				// Class destructor
		void down();			// Bring the screen down
		void up();				// Raise the screen up
};

#endif
