//---------------------------------------------------------------
// File: Code126_Stack.c
// Purpose: Implementation file for a demonstration of a stack  
//		implemented as a linked structure.  Data type: Character
// Programming Language: C
// Author: Dr. Rick Coleman
// Date: January 21, 2002
//---------------------------------------------------------------
#include <stdlib.h>	// To get access to malloc()
#include "Code126_Stack.h"

// Declare this as static so no code outside of this source
// can access it.
static struct StackItem *top;	// Declare global pointer to top of the stack

//--------------------------------------------
// Function: InitStack()
// Purpose: Initialize stack to empty. Use only
//		with a new stack.
// Precondition: Stack must not contain any
//		nodes. 
// Returns: void
//--------------------------------------------
void InitStack()
{
	top = NULL;
}

//--------------------------------------------
// Function: ClearStack()
// Purpose: Remove all items from the stack
// Returns: void
//--------------------------------------------
void ClearStack()
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
			free(temp);
		}
	}
}

//--------------------------------------------
// Function: Push()
// Purpose: Push an item onto the stack.
// Returns: TRUE if push was successful
//		or FALSE if the push failed.
//--------------------------------------------
int Push(char ch)
{
	struct StackItem *newNode;

	// Create a new node and insert the data
	newNode = (struct StackItem *)malloc(sizeof(struct StackItem));
	// Check to see if memory allocation failed
	if(newNode == NULL) return FALSE;
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
	return TRUE; // Signal successful push
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
	struct StackItem	*temp;

	// Check for empty stack
	if(isEmpty()) return '\0'; // Return null character if empty

	// Remove the top item from the stack
	temp = top;
	top = top->next;

	// Copy the data from the top item for return
	ch = temp->ch;

	// Free the removed node
	free(temp);

	// Return the popped character
	return ch;
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
	return (top == NULL);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the stack is full
// Returns: TRUE if full, otherwise FALSE
// Note: In theory a linked stack cannot be
//  full (unless you run out of memory) so
//	this function defaults to returning FALSE.
//--------------------------------------------
int isFull()
{
	return FALSE;
}