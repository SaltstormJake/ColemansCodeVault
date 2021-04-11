//---------------------------------------------------------------
// File: ListMain.cpp
// Purpose: Main file with tests for a demonstration of an unsorted  
//		list implemented as a linked structure.
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: January 8, 2002
//---------------------------------------------------------------
#include "Code117_List.h"

int main(int argc, char **argv)
{
	Code117_List *theList;
	ListItem *theItem;

     cout << "Simple List Demonstration\n";
     cout << "(Sorted list implemented as a linked structure.)\n\n";
     cout << "Create a list and add a few items to the list";

	theList = new Code117_List(); // Instantiate a list object

	theList->Insert(5, 3.1f); // Note: The argument to the funtion should be a float
	theList->Insert(1, 5.6f); // A constant real number like 3.1 is interpreted as
	theList->Insert(3, 8.3f); // a double unless it is explicitly defined as a float
	theList->Insert(2, 7.4f); // by adding an 'f' to the end of the number.
	theList->Insert(4, 2.5f);

	// Show what is in the list
	theList->PrintList();

	// Test the list length function
	cout << "\nList now contains " << theList->ListLength() << " items.\n\n";

 // Test delete function
     cout << "Testing delete of last item in list.\n";
     theItem = theList->Delete(5);
	 if((theItem != NULL) && (theItem->key == 5))
	 {
		 cout << "\tSuccessfully removed the last item in the list.\n";
		 delete theItem;	// It is now our responsibility to delete it.
	 }
     theList->PrintList();

     // Test delete function
     cout << "Testing delete of first item in list.\n";
     theItem = theList->Delete(1);
	 if((theItem != NULL) && (theItem->key == 1))
	 {
		 cout << "\tSuccessfully removed the first item in the list.\n";
		 delete theItem;	// It is now our responsibility to delete it.
	 }
    theList->PrintList();

     // Test delete function
     cout << "Testing delete of a middle item in list.\n";
     theItem = theList->Delete(3);
	 if((theItem != NULL) && (theItem->key == 3))
	 {
		 cout << "\tSuccessfully removed a middle item from the list.\n";
		 delete theItem;	// It is now our responsibility to delete it.
	 }
     theList->PrintList();

     // Test delete function with a known failure argument
     cout << "Testing failure to find item (key = 6) in delete function.\n";
     if(theList->Delete(6) != NULL)		
          cout << "\tOops! Should not have been able to delete.\n";
     else
          cout << "\tUnable to locate item to delete.\n\n";

     // Test search (known failure)
     cout << "Testing Search function. Search for key 3 (not in the list).\n";
	 theItem = theList->Search(3);
     if((theItem != NULL) && (theItem->key == 3))
	 {
         cout << "\tSearch result for key 3: theData = %f\n\n", theItem->theData;
		 delete theItem;	// It is now our responsibility to delete the duplicate returned.
	 }
     else
          cout << "\tSearch result for key 3: Unable to locate item in list\n\n";

     // Test search (known success)
     cout << "Testing Search function. Search for key 2 (in the list).\n";
	 theItem = theList->Search(2);
     if((theItem != NULL) && (theItem->key == 2))
	 {
         cout << "\tSearch result for key 2: theData = " << theItem->theData << endl << endl;
		 delete theItem;	// It is now our responsibility to delete the duplicate returned.
	 }
     else
          cout << "\tSearch result for key 2: Unable to locate item in list\n\n";

     cout << "\n\nEnd list demonstration...\n\n";


	return 0;
}