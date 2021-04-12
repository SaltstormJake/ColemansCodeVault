//=========================================================================
// PopcornPopper.h
// Interface file defining a popcorn popper for an entertainment center to 
//    be used in a demonstration of the Facade Design Pattern
// Author: Dr. Rick Coleman
//=========================================================================
#ifndef POPCORNPOPPER_H
#define POPCORNPOPPER_H

class PopcornPopper
{
	public:
		PopcornPopper();		// Class constructor
		~PopcornPopper();		// Class destructor
		void on();				// Turn the PopcornPopper on
		void off();				// Turn the PopcornPopper off
		void pop();				// Start the PopcornPopper popping
};

#endif
