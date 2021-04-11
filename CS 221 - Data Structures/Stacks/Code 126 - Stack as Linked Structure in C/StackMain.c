//---------------------------------------------------------------
// File: StackMain.c
// Purpose: Main file with tests for a demonstration of a stack  
//		implemented as a linked structure.
// Programming Language: C
// Author: Dr. Rick Coleman
// Date: January 21, 2002
//---------------------------------------------------------------
#include <stdio.h>
#include "Code126_Stack.h"

int main(int argc, char **argv)
{
	char	testString[51];
	int		i;
	char	ch;

	printf("Simple Stack Demonstration\n");
	printf("(Stack implemented as a linked structure - Stack data type is character.)\n\n");
	printf("Creating a stack\n");

	InitStack();
	printf("Stack created...\n");

	// Test pushing and popping first/last item on a stack
	printf("Testing push and pop of single item.\n");
	Push('A');
	printf("Popped: %c\n", Pop());
	printf("...done\n\n");

	// Test stack by reversing the order of letters in a string
	printf("Enter a string to be reversed (50 characters max)");
	gets(testString); // Assume user is smart enought to not exceed the limit

	// Push all letters on the stack
	i = 0;
	while(testString[i] != '\0')
	{
		Push(testString[i]);
		i++;
	}

	// Pop letters and print in reverse
	printf("Your string printed in reverse is...\n");
	while((ch = Pop()) != '\0') // Pop returns null terminator when stack is empty
		printf("%c", ch);

	printf("\n\n...done.\n");
	return 0;
}