//---------------------------------------------------------------
// File: QueueMain.cpp
// Purpose: Main file with tests for a demonstration of a queue 
//        as an array.
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: February 11, 2002
//---------------------------------------------------------------
#include "Code131_Queue.h"
#include <string.h>

int main(int argc, char **argv)
{
    char            testString[MAX_SIZE + 2];
    int                i;
    char            ch;
    Code131_Queue    *Q;

    cout << "Simple Queue Demonstration\n";
    cout << "(Queue implemented as an Array - Queue data type is character.)\n\n";
    cout << "Creating a queue\n";

    Q = new Code131_Queue();
    cout << "Queue created...\n";

    // Test enqueuing and dequing item on a queue
    cout << "Testing enqueue and dequeue of single item.\n";
    Q->Enqueue('A');
    cout << "Enqueued: " << Q->Dequeue() << "\n";
    cout << "...done\n\n";

    // Test queue by enqueing letters in a string
    strcpy(testString, "abcdefghijklmnopqrasuvwxyz"); 

    // Try to Enqueue all letters in the string
    i = 0;
    cout << "Testing enqueuing of string: " << testString << "\n";
    while(testString[i] != '\0')
    {
        if(!Q->Enqueue(testString[i]))
        {
            cout << "Queue is full. Unable to enqueue " << testString[i] << "\n";
        }
        i++;
    }

    cout << "\n\nDone testing enqueue.\n\nNow testing dequeue.\n";
    // Dequeue letters and print them
    cout << "Dequeued letters are...\n";
    while((ch = Q->Dequeue()) != '\0') // Dequeue returns null terminator 
        cout << ch;            // when queue is empty
    
    cout << "\nEnd of queue encountered...\n";

    cout << "\n\n...done.\n";
    return 0;
}