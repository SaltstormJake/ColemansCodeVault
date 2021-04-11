//---------------------------------------------------------------
// File: ToDoList.h
// Purpose: Interface file for the demonstration ToDoList class
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef TODOLIST_H
#define TODOLIST_H

#include <iostream>
using namespace std;

// Define a structure to use as the list item
struct ToDoItem
{
    int     priority;     // Task priority and key
    char    theTask[128]; // Task string;
};

#define MAX_SIZE    50        // Define maximum number of tasks in list

// Class definition
class ToDoList
{
  private:
    ToDoItem    taskList[MAX_SIZE]; // List implemented as an array
    int         lastIdx;            // Index where last item was inserted

  public:
      ToDoList();                            // Class constructor
      ~ToDoList();                           // Class destructor
      void ClearList();                      // Remove all items from the list
      void Insert(char *task, int priority); // Add a task to the list
      void Delete(char *task);               // Delete given a task string
      void Delete(int priority);             // Delete given a priority
      char *Search(int priority);            // Search given a priority
      int  ListLength();                     // Return number of items in list
      bool isEmpty();                        // Return true if list is empty
      bool isFull();                         // Return true if list is full
      char *GetNextTask();                   // Return the next task
      void PrintList();                      // Print all items in the list
};

#endif // End class definition