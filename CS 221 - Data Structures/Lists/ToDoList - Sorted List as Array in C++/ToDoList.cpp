//---------------------------------------------------------------
// File: ToDoList.cpp
// Purpose: Implementation file for the ToDoList class
// Author: Dr. Rick Coleman
// Date: January 2002
//---------------------------------------------------------------
#include <cstdlib>    // To get access to malloc()
#include <string.h>
#include "ToDoList.h"

//--------------------------------------------
// Function: ToDoList()
// Purpose: Class constructor
// Returns: N/A
//--------------------------------------------
ToDoList::ToDoList()
{
    lastIdx = -1;
}

//--------------------------------------------
// Function: ~ToDoList()
// Purpose: Class destructor
// Returns: N/A
//--------------------------------------------
ToDoList::~ToDoList()
{
    // Nothing to do.  All memory automatically 
    //   cleared when class is destroyed
}


//--------------------------------------------
// Function: ClearList()
// Purpose: Remove all items from the list
// Returns: void
//--------------------------------------------
void ToDoList::ClearList()
{
    lastIdx = -1; // Just reset count
}

//--------------------------------------------
// Function: Insert()
// Purpose: Insert a task into the list in
//        the correct order.
// Returns: void
//--------------------------------------------
void ToDoList::Insert(char *task, int priority)
{
    int index;

    if(isFull())
    {
        cout << "Cannot add the task: " << task;
        cout << "\n to the list.  List full.\n";
        return;
    }

    // Increment lastIdx
    lastIdx++;

    // Move all items in the list down by 1 until
    // the appropriate location is found
    index = lastIdx;
    while((index > 0) && (taskList[index-1].priority > priority))
    {
        // Move this one down one
        taskList[index] = taskList[index-1];
        index--;
    }
    // When we get here we will have one of the following cases
    // index == 0 because we are inserting the first task
    // index == 0 because all other tasks have been moved down one
    //                so we are inserting a new first priority task
    // index == n because all other tasks have been moved down one
    // index == lastIdx because this task has a larger priority than 
    //                any others already in the list
    // In each case we insert the new task into the list at index 
    taskList[index].priority = priority;
    strcpy(taskList[index].theTask, task);
}

//--------------------------------------------
// Function: Delete()
// Purpose: Delete a task from the list.
// Returns: void
//--------------------------------------------
void ToDoList::Delete(char *task)
{
    int i, d = 0;

    while((d <= lastIdx) && (strcmp(taskList[d].theTask, task) != 0))
    {
        d++;
    }

    if(d > lastIdx)
    {
        cout << "Cannot find task to delete.\n";
    }
    else
    {
        // Move all other tasks toward the front of the array
        // This also overwrites and "deletes" the task searched for
        for(i = d; i < lastIdx; i++)
        {
            taskList[i] = taskList[i+1];
        }
        lastIdx--; // Reset lastIdx
    }
}

//--------------------------------------------
// Function: Delete()
// Purpose: Delete a task from the list given
//    its priority.  Assumes priority is unique.
// Returns: void
//--------------------------------------------
void ToDoList::Delete(int priority)
{
    int i, d = 0;

    while((d <= lastIdx) && (taskList[d].priority != priority))
    {
        d++;
    }

    if(d > lastIdx)
    {
        cout << "Cannot find task to delete.\n";
    }
    else
    {
        // Move all other tasks toward the front of the array
        // This also overwrites and "deletes" the task searched for
        for(i = d; i < lastIdx; i++)
        {
            taskList[i] = taskList[i+1];
        }
        lastIdx--; // Reset lastIdx
    }
}

//--------------------------------------------
// Function: Search()
// Purpose: Search for a task by priority and
//    return a copy of the task string.
//  Note the dynamic creation of a string.
// Returns: Char pointer pointing to a new
//    string containing a copy of the task.
//--------------------------------------------
char *ToDoList::Search(int priority)
{
    int s = 0;
    char *returnStr;

    while((s <= lastIdx) && (taskList[s].priority != priority))
    {
        s++;
    }

    if(s > lastIdx)
    {
        cout << "Task not found.\n\n";
        return ""; // could not find the task
    }
    else
    {
        // Copy the task
        returnStr = (char *)malloc(strlen(taskList[s].theTask) + 1);
        strcpy(returnStr, taskList[s].theTask);
        return returnStr;
    }
}

//--------------------------------------------
// Function: ListLength()
// Purpose: Return the number of items in the 
//        list.
// Returns: Number of items in list
//--------------------------------------------
int ToDoList::ListLength()
{
    return lastIdx+1;
}

//--------------------------------------------
// Function: isEmpty()
// Purpose: Return true if the list is empty
// Returns: True if empty, otherwise false
//--------------------------------------------
bool ToDoList::isEmpty()
{
    return (lastIdx == -1);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the list is full
// Returns: True if full, otherwise false
//--------------------------------------------
bool ToDoList::isFull()
{
    return (lastIdx >= MAX_SIZE);
}

//--------------------------------------------
// Function: GetNextTask()
// Purpose: Return the task string of the task
//    at the head of the list.
//  Note the dynamic creation of a string.
// Returns: Char pointer pointing to a new
//    string containing a copy of the task.
//--------------------------------------------
char *ToDoList::GetNextTask()
{
    int i = 0;
    char *returnStr;

    // Copy the task
    if(isEmpty())
    {
        cout << "List is empty.\n\n";
        return "";
    }
    else
    {
        returnStr = (char *)malloc(strlen(taskList[0].theTask) + 1);
        strcpy(returnStr, taskList[0].theTask);

        // Move all other tasks up
        while(i < lastIdx)
        {
            taskList[i] = taskList[i+1];
            i++;

        }

        lastIdx--;    // Decrement index

        return returnStr;
    }
}

//--------------------------------------------
// Function: PrintList()
// Purpose: Print all tasks in the list with
//    their priority.
// Returns: void
//--------------------------------------------
void ToDoList::PrintList()
{
    int i;

    cout << "\n\nTasks in the List\n";
    cout << "-----------------------------------------------------------\n";
    cout << "Priority\t\tTask\n";
    cout << "-----------------------------------------------------------\n";

    for(i=0; i<=lastIdx; i++)
    {
        cout << taskList[i].priority << "\t\t" << taskList[i].theTask << "\n";
    }
    cout << "-----------------------------------------------------------\n\n";
}