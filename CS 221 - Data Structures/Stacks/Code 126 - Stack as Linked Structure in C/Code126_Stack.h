//---------------------------------------------------------------
// File: Code126_Stack.h
// Purpose: Header file for a demonstration of a stack implemented 
//		as a linked structure.  Data type: Character
// Programming Language: C
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE126_STACK_H
#define CODE126_STACK_H

#include <stdio.h>

// Define a structure to be used as the stack item
struct StackItem
{
	char             ch;
	struct StackItem *next;
};

// List Function Prototypes
void InitStack();         // Initialize the stack
void ClearStack();        // Remove all items from the stack
int Push(char ch);        // Push an item onto the stack
char Pop();               // Pop an item from the stack
int isEmpty();            // Return true if stack is empty
int isFull();             // Return true if stack is full

// Define TRUE and FALSE if they have not already been defined
#ifndef FALSE
#define FALSE (0)
#endif
#ifndef TRUE
#define TRUE (!FALSE)
#endif

#endif // End of stack header