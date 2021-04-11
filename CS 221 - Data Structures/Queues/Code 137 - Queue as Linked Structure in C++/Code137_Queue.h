//---------------------------------------------------------------
// File: Code137_Queue.h
// Purpose: Header file for a demonstration of a queue implemented 
//        as a linked structure.  Data type: Character
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE137_QUEUE_H
#define CODE137_QUEUE_H

#include <iostream>
using namespace std;

struct QNode
{
    char  ch;
    QNode *next;
};

class Code137_Queue
{
    private:
        QNode *head, *tail;         // Pointers to head and tail of the queue

    public:
        Code137_Queue();            // Class constructor
        ~Code137_Queue();           // Class destuctor
        void ClearQueue();          // Remove all items from the queue
        bool Enqueue(char ch);      // Enter an item in the queue
        char Dequeue();             // Remove an item from the queue
        bool isEmpty();             // Return true if queue is empty
        bool isFull();              // Return true if queue is full
};

#endif // End of queue header