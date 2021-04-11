//---------------------------------------------------------------
// File: Code120_Stack.c
// Purpose: Implementation file for a demonstration of a stack  
//		implemented as an array.    Data type: Character
// Programming Language: C
// Author: Dr. Rick Coleman
// Date: January 21, 2002
//---------------------------------------------------------------
#include "Code120_Stack.h"

// Declare these as static so no code outside of this source
// can access them.
static int top;	// Declare global index to top of the stack
static char theStack[MAX_SIZE];	// The stack

//--------------------------------------------
// Function: InitStack()
// Purpose: Initialize stack to empty.
// Returns: void
//--------------------------------------------
void InitStack()
{
	top = -1;
}

//--------------------------------------------
// Function: ClearStack()
// Purpose: Remove all items from the stack
// Returns: void
//--------------------------------------------
void ClearStack()
{
	top = -1; // Reset count to start over
}

//--------------------------------------------
// Function: Push()
// Purpose: Push an item onto the stack.
// Returns: TRUE if push was successful
//		or FALSE if the push failed.
//--------------------------------------------
int Push(char ch)
{
	// Check to see if the Stack is full
	if(isFull()) return FALSE;

	// Increment top index
	top++;
	// Add the item to the Stack
	theStack[top] = ch;
	return TRUE;
}

//--------------------------------------------
// Function: Pop()
// Purpose: Pop an item from the Stack.
// Returns: TRUE if pop was successful
//		or FALSE if the pop failed.
//--------------------------------------------
char Pop()
{
	char ch;

	// Check for empty Stack
	if(isEmpty()) return '\0';  // Return null character if stack is empty
	else
	{
		ch = theStack[top];  // Get character to return
		top--;               // Decrement top index
		return ch;           // Return popped character
	}
}

//--------------------------------------------
// Function: isEmpty()
// Purpose: Return true if the stack is empty
// Returns: TRUE if empty, otherwise FALSE
// Note: C has no boolean data type so we use
//	the defined int values for TRUE and FALSE
//	instead.
//--------------------------------------------
int isEmpty()
{
	return (top == -1);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the stack is full
// Returns: TRUE if full, otherwise FALSE
// Note: C has no boolean data type so we use
//	the defined int values for TRUE and FALSE
//	instead.
//--------------------------------------------
int isFull()
{
	return (top >= MAX_SIZE);
}