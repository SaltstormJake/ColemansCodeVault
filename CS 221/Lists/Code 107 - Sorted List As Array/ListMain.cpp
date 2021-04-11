//---------------------------------------------------------------
// File: ListMain.cpp
// Purpose: Main file with tests for a demonstration of a sorted  
//          list implemented as an array.
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: January 7, 2002
//---------------------------------------------------------------
#include "Code107_List.h"

int main(int argc, char **argv)
{
     float           f;
     Code107_List *theList;

     cout << "Simple List Demonstration\n";
     cout << "(List implemented as an Array - Do not try this at home)\n\n";
     cout << "Create a list and add a few tasks to the list";

     theList = new Code107_List(); // Instantiate a list object

     theList->Insert(5, 3.1f); // Note: The argument to the funtion should be a float
     theList->Insert(1, 5.6f); // A constant real number like 3.1 is interpreted as
     theList->Insert(3, 8.3f); // a double unless it is explicitly defined as a float
     theList->Insert(2, 7.4f); // by adding an 'f' to the end of the number.
     theList->Insert(4, 2.5f);

     // Show what is in the list
     theList->PrintList();

     // Test the list length function
     cout << "\nList now contains " << theList->ListLength() << "items.\n\n";

     // Test delete function
     cout << "Testing delete of last item in list.\n";
     theList->Delete(5);
     theList->PrintList();

     // Test delete function
     cout << "Testing delete of first item in list.\n";
     theList->Delete(1);
     theList->PrintList();

     // Test delete function
     cout << "Testing delete of a middle item in list.\n";
     theList->Delete(3);
     theList->PrintList();

     // Test delete function with a known failure argument
     cout << "Testing failure in delete function.\n";
     if(theList->Delete(5))
          cout << "Oops! Should not have been able to delete.\n\n";
     else
          cout << "Unable to locate item to delete.\n\n";

     // Test search (known failure)
     cout << "Testing Search function. Search for key 3\n";
     if(theList->Search(3, &f))
          cout << "Search result: theData = " << f << "\n\n";
     else
          cout << "Search result: Unable to locate item in list\n\n";

     // Test search (known success)
     cout << "Testing Search function. Search for key 2\n";
     if(theList->Search(2, &f))
          cout << "Search result: theData = " << f << "\n";
     else
          cout << "Search result: Unable to locate item in list\n";

     cout << "\n\nEnd list demonstration...";

     return 0;
}