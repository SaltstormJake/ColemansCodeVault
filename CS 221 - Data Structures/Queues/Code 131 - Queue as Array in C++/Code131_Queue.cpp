//---------------------------------------------------------------
// File: Code131_Queue.cpp
// Purpose: Implementation file for a demonstration of a queue  
//		implemented as an array.    Data type: Character
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: February 11, 2002
//---------------------------------------------------------------
#include "Code131_Queue.h"


//--------------------------------------------
// Function: Code131_Queue()
// Purpose: Class constructor
// Returns: void
//--------------------------------------------
Code131_Queue::Code131_Queue()
{
	head = tail = -1;
}

//--------------------------------------------
// Function: Code131_Queue()
// Purpose: Class destructor
// Returns: void
//--------------------------------------------
Code131_Queue::~Code131_Queue()
{
	// Nothing to do here since the memory used
	// for the queue is freed automatically.
}

//--------------------------------------------
// Function: ClearQueue()
// Purpose: Remove all items from the queue
// Returns: void
//--------------------------------------------
void Code131_Queue::ClearQueue()
{
	head = tail = -1; // Reset indices to start over
}

//--------------------------------------------
// Function: Enqueue()
// Purpose: Enqueue an item into the queue.
// Returns: true if enqueue was successful
//		or false if the enqueue failed.
// Note: We let head and tail continuing 
//		increasing and use [head % MAX_SIZE] 
//		and [tail % MAX_SIZE] to get the real
//		indices.  This automatically handles
//		wrap-around when the end of the array
//		is reached.
//--------------------------------------------
bool Code131_Queue::Enqueue(char ch)
{
	// Check to see if the Queue is full
	if(isFull()) return false;

	// Increment tail index
	tail++;
	// Add the item to the Queue
	theQueue[tail % MAX_SIZE] = ch;
	return true;
}

//--------------------------------------------
// Function: Dequeue()
// Purpose: Dequeue an item from the Queue.
// Returns: true if dequeue was successful
//		or false if the dequeue failed.
//--------------------------------------------
char Code131_Queue::Dequeue()
{
	char ch;

	// Check for empty Queue
	if(isEmpty()) return '\0';  // Return null character if queue is empty
	else
	{
		head++;
		ch = theQueue[head % MAX_SIZE];		// Get character to return
		return ch;				// Return popped character
	}
}

//--------------------------------------------
// Function: isEmpty()
// Purpose: Return true if the queue is empty
// Returns: true if empty, otherwise false
//--------------------------------------------
bool Code131_Queue::isEmpty()
{
	return (head == tail);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the queue is full
// Returns: true if full, otherwise false
//--------------------------------------------
bool Code131_Queue::isFull()
{
	// Queue is full if tail has wrapped around
	//	to location of the head.  See note in
	//	Enqueue() function.
	return ((tail - MAX_SIZE) == head);
}