//---------------------------------------------------------------
// File: ListMain.cpp
// Purpose: Main file with tests for a demonstration of a sorted  
//		list implemented as a two-way (double) linked list.
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: February 2012
//---------------------------------------------------------------
#include "Code118_List.h"

int main()
{
	Code118_List *theList;
	ListItem *theItem;

	cout << "Simple Double Linked List Demonstration\n\n";
	cout << "Create a list and add a few items to the list\n";

	theList = new Code118_List(); // Instantiate a list object

	cout << "Adding (4, 2.5) as first item in the list.\n";
	theList->Insert(4, 2.5);	// Insert first item  (4)

	cout << "Adding (1, 5.6) at the head of the list.\n";
	theList->Insert(1, 5.6);	// Insert at head (1 4)

	cout << "Adding (2, 3.1) in the middle of the list.\n";
	theList->Insert(2, 3.1);	// Insert in middle (1 2 4)

	cout << "Adding (3, 8.3) in the middle of the list.\n";
	theList->Insert(3, 8.3);	// Insert in middle (1 2 3 4)

	cout << "Adding (5, 7.4) at the tail of the list.\n";
	theList->Insert(5, 7.4);	// Insert at tail (1 2 3 4 5)

	// Show what is in the list
	theList->PrintList();

	// Test the list length function
	cout << "List now contains " << theList->ListLength() << " items.\n\n";

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