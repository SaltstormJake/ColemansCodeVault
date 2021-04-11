//---------------------------------------------------------------
// File: Code121_Stack.cpp
// Purpose: Implementation file for a demonstration of a stack  
//		implemented as an array.    Data type: Character
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: January 21, 2002
//---------------------------------------------------------------
#include "Code121_Stack.h"


//--------------------------------------------
// Function: Code121_Stack()
// Purpose: Class constructor
// Returns: void
//--------------------------------------------
Code121_Stack::Code121_Stack()
{
	top = -1;
}

//--------------------------------------------
// Function: Code121_Stack()
// Purpose: Class destructor
// Returns: void
//--------------------------------------------
Code121_Stack::~Code121_Stack()
{
	// Nothing to do here since the memory used
	// for the stack is freed automatically.
}

//--------------------------------------------
// Function: ClearStack()
// Purpose: Remove all items from the stack
// Returns: void
//--------------------------------------------
void Code121_Stack::ClearStack()
{
	top = -1; // Reset count to start over
}

//--------------------------------------------
// Function: Push()
// Purpose: Push an item onto the stack.
// Returns: true if push was successful
//		or false if the push failed.
//--------------------------------------------
bool Code121_Stack::Push(char ch)
{
	// Check to see if the stack if full
	if(isFull()) return false;

	// Increment head index
	top++;
	// Add the item to the stack
	theStack[top] = ch;
	return true;
}

//--------------------------------------------
// Function: Pop()
// Purpose: Pop an item from the Stack.
// Returns: true if pop was successful
//		or false if the pop failed.
//--------------------------------------------
char Code121_Stack::Pop()
{
	char ch;

	// Check for empty Stack
	if(isEmpty()) return '\0'; // Return null character if stack is empty
	else
	{
		ch = theStack[top]; // Get character to return
		top--;              // Decrement top index
		return ch;          // Return popped character
	}
}

//--------------------------------------------
// Function: isEmpty()
// Purpose: Return true if the stack is empty
// Returns: true if empty, otherwise false
//--------------------------------------------
bool Code121_Stack::isEmpty()
{
	return (top == -1);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the stack is full
// Returns: true if full, otherwise false
//--------------------------------------------
bool Code121_Stack::isFull()
{
	return (top >= MAX_SIZE);
}