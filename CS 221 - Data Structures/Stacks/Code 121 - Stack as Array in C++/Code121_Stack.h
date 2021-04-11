//---------------------------------------------------------------
// File: Code121_Stack.h
// Purpose: Header file for a demonstration of a stack implemented 
//		as an array.  Data type: Character
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE121_STACK_H
#define CODE121_STACK_H

#include <iostream>
using namespace std;

#define MAX_SIZE 50                    // Define maximum length of the stack

class Code121_Stack
{
	private:
		int top;                  // Index to top of the stack
		char theStack[MAX_SIZE];  // The stack

	public:
		Code121_Stack();         // Class constructor
		~Code121_Stack();        // Class destuctor
		void ClearStack();       // Remove all items from the stack
		bool Push(char ch);      // Push an item onto the stack
		char Pop();              // Pop an item from the stack
		bool isEmpty();          // Return true if stack is empty
		bool isFull();           // Return true if stack is full
};

#endif // End of stack header