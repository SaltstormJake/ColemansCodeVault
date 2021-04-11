//---------------------------------------------------------------
// File: Code127_Stack.h
// Purpose: Header file for a demonstration of a stack implemented 
//		as a linked structure.  Data type: Character
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE127_STACK_H
#define CODE127_STACK_H

#include <iostream>
using namespace std;

// Define a structure to be used as the stack item
struct StackItem
{
	char      ch;
	StackItem *next;
};

class Code127_Stack
{
	private:
		StackItem *top;			// Pointer to top of the stack

	public:
		Code127_Stack();					// Class constructor
		~Code127_Stack();				// Class destuctor
		void ClearStack();				// Remove all items from the stack
		bool Push(char ch);				// Push an item onto the stack
		char Pop();				// Pop an item from the stack
		bool isEmpty();					// Return true if stack is empty
		bool isFull();					// Return true if stack is full
};

#endif // End of stack header