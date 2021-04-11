//---------------------------------------------------------------
// File: Code120_Stack.h
// Purpose: Header file for a demonstration of a stack implemented 
//		as an array.  Data type: Character
// Programming Language: C
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE120_STACK_H
#define CODE120_STACK_H

#include <stdio.h>

#define MAX_SIZE 50           // Define maximum length of the stack

// List Function Prototypes
void InitStack();             // Initialize the stack
void ClearStack();            // Remove all items from the stack
int Push(char ch);            // Push an item onto the stack
char Pop();                   // Pop an item from the stack
int isEmpty();                // Return true if stack is empty
int isFull();                 // Return true if stack is full

// Define TRUE and FALSE if they have not already been defined
#ifndef FALSE
#define FALSE (0)
#endif
#ifndef TRUE
#define TRUE (!FALSE)
#endif

#endif // End of stack header