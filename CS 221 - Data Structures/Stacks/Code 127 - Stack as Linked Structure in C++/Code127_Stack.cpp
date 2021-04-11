//---------------------------------------------------------------
// File: Code127_Stack.cpp
// Purpose: Implementation file for a demonstration of a stack  
//		implemented as a linked structure.  Data type: Character
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: January 21, 2002
//---------------------------------------------------------------
#include "Code127_Stack.h"

//--------------------------------------------
// Function: Code127_Stack()
// Purpose: Class constructor.
//--------------------------------------------
Code127_Stack::Code127_Stack()
{
	top = NULL;
}

//--------------------------------------------
// Function: ~Code127_Stack()
// Purpose: Class destructor
//--------------------------------------------
Code127_Stack::~Code127_Stack()
{
	ClearStack();
}

//--------------------------------------------
// Function: ClearStack()
// Purpose: Remove all items from the stack
// Returns: void
//--------------------------------------------
void Code127_Stack::ClearStack()
{
	struct StackItem *temp;

	if(!isEmpty())
	{
		temp = top;

		// Scan stack and free all nodes
		while(top != NULL)
		{
			temp = top;
			top = top->next;
			delete temp;
		}
	}
}

//--------------------------------------------
// Function: Push()
// Purpose: Push an item onto the stack.
// Returns: true if push was successful
//		or false if the push failed.
//--------------------------------------------
bool Code127_Stack::Push(char ch)
{
	StackItem *newNode;

	// Create a new node and insert the data
	newNode = new StackItem();
	// Check to see if memory allocation failed
	if(newNode == NULL) return false;
	// If all OK then insert the data
	newNode->ch = ch;
	newNode->next = NULL; // Very important to init this to NULL

	// Check to see if the stack is empty
	if(isEmpty())
	{
		// Push new node as first in the stack
		top = newNode;
	}
	else
	{
		// Push on top of the stack
		newNode->next = top;
		top = newNode;
	}
	return true; // Signal successful push
}

//--------------------------------------------
// Function: Pop()
// Purpose: Pop an item from the Stack.
// Returns: true if pop was successful
//		or false if the pop failed.
//--------------------------------------------
char Code127_Stack::Pop()
{
	char ch;
	struct StackItem	*temp;

	// Check for empty stack
	if(isEmpty()) return '\0'; // Return null character if empty

	// Remove the top item from the stack
	temp = top;
	top = top->next;

	// Copy the data from the top item for return
	ch = temp->ch;

	// Free the removed node
	delete temp;

	// Return the popped character
	return ch;
}

//--------------------------------------------
// Function: isEmpty()
// Purpose: Return true if the stack is empty
// Returns: true if empty, otherwise false
//--------------------------------------------
bool Code127_Stack::isEmpty()
{
	return (top == NULL);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the stack is full.
//		A linked structure can't be full unless
//		you run out of memory.
// Returns: true if full, otherwise false
//--------------------------------------------
bool Code127_Stack::isFull()
{
	return false;
}