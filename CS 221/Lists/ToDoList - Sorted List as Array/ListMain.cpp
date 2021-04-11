//---------------------------------------------------------------
// File: ListMain.cpp
// Purpose: Demonstrate use of the ToDoList class
// Author: Dr. Rick Coleman
// Date: December, 2001
//---------------------------------------------------------------
#include <iostream>
#include "ToDoList.h"
#include <string.h>

using namespace std;

int main(int argc, char **argv)
{
    ToDoList *theList;

    cout << "Simple List Demonstration\n";
    cout << "(List implemented as an Array - Do not try this at home)\n\n";
    cout << "Create a list and add a few tasks to the list";

    theList = new ToDoList();

    theList->Insert("This is task 1", 5);
    theList->Insert("This is task 2", 1);
    theList->Insert("This is task 3", 3);
    theList->Insert("This is task 4", 2);
    theList->Insert("This is task 5", 4);

    // Show what is in the list
    theList->PrintList();

    // Test the list length function
    cout << "\nList now contains " << theList->ListLength() << " items.\n\n";

    // Test delete function 1
    cout << "Testing delete function 1.\n";
    theList->Delete("This is task 4");
    theList->PrintList();
    // Test delete function 2
    cout << "Testing delete function 2.\n";
    theList->Delete(5);
    theList->PrintList();

    // Test both delete functions with a know failure argument
    cout << "Testing failure in delete function 1.\n";
    theList->Delete("This is task 4");
    cout << "\n";
    cout << "Testing failure in delete function 2.\n";
    theList->Delete(5);
    cout << "\n";

    // Test search
    cout << "Testing Search function\n";
    cout << "Search result: " << theList->Search(4) << "\n\n";

    // Testing get next task
    cout << theList->GetNextTask();
    cout << "\n";
    cout << theList->GetNextTask();
    cout << "\n";
    cout << theList->GetNextTask();
    cout << "\n";
    cout << theList->GetNextTask();
    cout << "\n";

    cout << "\n\nEnd list demonstration...";

    return 0;
}