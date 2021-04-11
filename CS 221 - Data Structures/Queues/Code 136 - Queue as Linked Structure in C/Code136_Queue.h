//---------------------------------------------------------------
// File: Code136_Queue.h
// Purpose: Header file for a demonstration of a queue implemented 
//        as a linked structure.  Data type: Character
// Programming Language: C
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE136_QUEUE_H
#define CODE136_QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct QNodeType
{
    char    ch;
    struct QNodeType *next;
}QNode;


// List Function Prototypes
void InitQueue();                // Initialize the queue
void ClearQueue();               // Remove all items from the queue
int Enqueue(char ch);            // Enter an item in the queue
char Dequeue();                  // Remove an item from the queue
int isEmpty();                   // Return true if queue is empty
int isFull();                    // Return true if queue is full

// Define TRUE and FALSE if they have not already been defined
#ifndef FALSE
#define FALSE (0)
#endif
#ifndef TRUE
#define TRUE (!FALSE)
#endif

#endif // End of queue header