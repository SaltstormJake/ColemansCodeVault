//---------------------------------------------------------------
// File: Code137_Queue.cpp
// Purpose: Implementation file for a demonstration of a queue  
//        implemented as an array.    Data type: Character
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: February 11, 2002
//---------------------------------------------------------------
#include "Code137_Queue.h"


//--------------------------------------------
// Function: Code137_Queue()
// Purpose: Class constructor
// Returns: void
//--------------------------------------------
Code137_Queue::Code137_Queue()
{
    head = tail = NULL;
}

//--------------------------------------------
// Function: Code137_Queue()
// Purpose: Class destructor
// Returns: void
//--------------------------------------------
Code137_Queue::~Code137_Queue()
{
    ClearQueue();
}

//--------------------------------------------
// Function: ClearQueue()
// Purpose: Remove all items from the queue
// Returns: void
//--------------------------------------------
void Code137_Queue::ClearQueue()
{
    QNode *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    head = tail = NULL; // Reset indices to start over
}

//--------------------------------------------
// Function: Enqueue()
// Purpose: Enqueue an item into the queue.
// Returns: true if enqueue was successful
//        or false if the enqueue failed.
//--------------------------------------------
bool Code137_Queue::Enqueue(char ch)
{
    QNode *temp;

    // Check to see if the Queue is full
    if(isFull()) return false;

    // Create new node for the queue
    temp = new QNode ();
    temp->ch = ch;
    temp->next = NULL;

    // Check for inserting first in the queue
    if(head == NULL)
        head = tail = temp;
    else
    {
        tail->next = temp; // Insert into the queue
        tail = temp;       // Set tail to new last node
    }

    return true;
}

//--------------------------------------------
// Function: Dequeue()
// Purpose: Dequeue an item from the Queue.
// Returns: Character being dequeued or '\0'
//    if dequeue failed.
//--------------------------------------------
char Code137_Queue::Dequeue()
{
    char ch;
    QNode *temp;

    // Check for empty Queue
    if(isEmpty()) return '\0';  // Return null character if queue is empty
    else
    {
        ch = head->ch;        // Get character to return
        temp = head;
        head = head->next;    // Advance head pointer
        delete temp;            // Free old head
        // Check to see if queue is empty
        if(isEmpty())
        {
            head = tail = NULL;        // Reset everything to empty queue
        }
    }
    return ch;                // Return popped character
}

//--------------------------------------------
// Function: isEmpty()
// Purpose: Return true if the queue is empty
// Returns: true if empty, otherwise false
//--------------------------------------------
bool Code137_Queue::isEmpty()
{
    return (head == NULL);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the queue is full
// Returns: true if full, otherwise false
//--------------------------------------------
bool Code137_Queue::isFull()
{
    return false;
}