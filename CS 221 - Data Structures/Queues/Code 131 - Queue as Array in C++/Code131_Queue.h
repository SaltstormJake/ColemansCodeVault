//---------------------------------------------------------------
// File: Code131_Queue.h
// Purpose: Header file for a demonstration of a queue implemented 
//        as an array.  Data type: Character
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE131_QUEUE_H
#define CODE131_QUEUE_H

#include <iostream>
using namespace std;

#define MAX_SIZE    25        // Define maximum length of the queue

class Code131_Queue
{
    private:
        int head, tail;           // Index to top of the queue
        char theQueue[MAX_SIZE];  // The queue

    public:
        Code131_Queue();         // Class constructor
        ~Code131_Queue();        // Class destuctor
        void ClearQueue();       // Remove all items from the queue
        bool Enqueue(char ch);   // Enter an item in the queue
        char Dequeue();          // Remove an item from the queue
        bool isEmpty();          // Return true if queue is empty
        bool isFull();           // Return true if queue is full
};

#endif // End of queue header
