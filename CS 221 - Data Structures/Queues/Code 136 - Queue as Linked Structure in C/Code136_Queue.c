//---------------------------------------------------------------
// File: Code136_Queue.c
// Purpose: Implementation file for a demonstration of a queue  
//        implemented as a linked structure.    Data type: Character
// Programming Language: C
// Author: Dr. Rick Coleman
// Date: February 11, 2002
//---------------------------------------------------------------
#include "Code136_Queue.h"

// Declare these as static so no code outside of this source
// can access them.
static QNode *head, *tail;    // Declare global pointers to head and tail of queue

//--------------------------------------------
// Function: InitQueue()
// Purpose: Initialize queue to empty.
// Returns: void
//--------------------------------------------
void InitQueue()
{
    head = tail = NULL;
}

//--------------------------------------------
// Function: ClearQueue()
// Purpose: Remove all items from the queue
// Returns: void
//--------------------------------------------
void ClearQueue()
{
    QNode *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    head = tail = NULL; // Reset indices to start over
}

//--------------------------------------------
// Function: Enqueue()
// Purpose: Enqueue an item into the queue.
// Returns: TRUE if enqueue was successful
//        or FALSE if the enqueue failed.
//--------------------------------------------
int Enqueue(char ch)
{
    QNode *temp;

    // Check to see if the Queue is full
    if(isFull()) return FALSE;

    // Create new node for the queue
    temp = (QNode *)malloc(sizeof(QNode));
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

    return TRUE;
}

//--------------------------------------------
// Function: Dequeue()
// Purpose: Dequeue an item from the Queue.
// Returns: TRUE if dequeue was successful
//        or FALSE if the dequeue failed.
//--------------------------------------------
char Dequeue()
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
        free(temp);            // Free old head
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
// Returns: TRUE if empty, otherwise FALSE
// Note: C has no boolean data type so we use
//    the defined int values for TRUE and FALSE
//    instead.
//--------------------------------------------
int isEmpty()
{
    return (head == NULL);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the queue is full.
// Returns: TRUE if full, otherwise FALSE
//--------------------------------------------
int isFull()
{
    return FALSE;
}