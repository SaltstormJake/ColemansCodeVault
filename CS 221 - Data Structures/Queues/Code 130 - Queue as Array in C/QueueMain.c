//---------------------------------------------------------------
// File: QueueMain.c
// Purpose: Main file with tests for a demonstration of a queue 
//		as an array.
// Programming Language: C
// Author: Dr. Rick Coleman
// Date: February 11, 2002
//---------------------------------------------------------------
#include "Code130_Queue.h"

int main(int argc, char **argv)
{
	char	testString[MAX_SIZE + 2];
	int		i;
	char	ch;

	printf("Simple Queue Demonstration\n");
	printf("(Queue implemented as an Array - Queue data type is character.)\n\n");
	printf("Creating a queue\n");

	InitQueue();
	printf("Queue created...\n");

	// Test enqueuing and dequing item on a queue
	printf("Testing enqueue and dequeue of single item.\n");
	Enqueue('A');
	printf("Enqueued: %c\n", Dequeue());
	printf("...done\n\n");

	// Test queue by enqueing letters in a string
	strcpy(testString, "abcdefghijklmnopqrasuvwxyz"); 

	// Try to Enqueue all letters in the string
	i = 0;
	printf("Testing enqueuing of string: %s\n", testString);
	while(testString[i] != '\0')
	{
		if(!Enqueue(testString[i]))
		{
			printf("Queue is full. Unable to enqueue %c\n", testString[i]);
		}
		i++;
	}

	printf("\n\nDone testing enqueue.\n\nNow testing dequeue.\n");
	// Dequeue letters and print them
	printf("Dequeued letters are...\n");
	while((ch = Dequeue()) != '\0') // Dequeue returns null terminator 
		printf("%c", ch);			// when queue is empty
	
	printf("\nEnd of queue encountered...\n");

	printf("\n\n...done.\n");
	return 0;
}