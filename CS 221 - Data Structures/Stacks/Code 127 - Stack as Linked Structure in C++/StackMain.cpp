//---------------------------------------------------------------
// File: StackMain.cpp
// Purpose: Main file with tests for a demonstration of a stack  
//		implemented as a linked structure.
// Programming Language: C
// Author: Dr. Rick Coleman
// Date: January 21, 2002
//---------------------------------------------------------------
#include "Code127_Stack.h"

int main(int argc, char **argv)
{
	Code127_Stack	*theStack;
	char			testString[51];
	int				i;
	char			ch;

	cout << "Simple Stack Demonstration\n";
	cout << "(Stack implemented as a linked structure - Stack data type is character.)\n\n";
	cout << "Creating a stack\n";

	theStack = new Code127_Stack(); // Instantiate a stack object

	cout << "Stack created...\n";

	// Test pushing and popping first/last item on a stack
	cout << "Testing push and pop of single item.\n";
	theStack->Push('A');
	cout << "Popped: " << theStack->Pop() << "\n";
	cout << "...done\n\n";

	// Test stack by reversing the order of letters in a string
	cout << "Enter a string to be reversed (50 characters max)";
	// Use get() so we can input spaces
	cin.get(testString,50); // Assume user is smart enought to not exceed the limit

	// Push all letters on the stack
	i = 0;
	while(testString[i] != '\0')
	{
		theStack->Push(testString[i]);
		i++;
	}

	// Pop letters and print in reverse
	cout << "Your string printed in reverse is...\n";
	while((ch = theStack->Pop()) != '\0') // Pop returns null terminator when stack is empty
		cout << ch;

	cout << "\n\n...done.\n";
	return 0;
}