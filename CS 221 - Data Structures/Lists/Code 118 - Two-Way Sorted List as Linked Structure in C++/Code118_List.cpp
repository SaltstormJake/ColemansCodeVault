//---------------------------------------------------------------------
// File: Code118_List.cpp
// Purpose: Header file for a demonstration of a sorted list 
//		implemented as a implemented as a two-way (double) linked list.
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------------
#include "Code118_List.h"

//--------------------------------------------
// Function: Code118_List()
// Purpose: Class constructor
// Returns: void
//--------------------------------------------
Code118_List::Code118_List()
{
	head = NULL;
}

//--------------------------------------------
// Function: Code118_List()
// Purpose: Class destructor
// Returns: void
//--------------------------------------------
Code118_List::~Code118_List()
{
	// Clear the list to free any memory being used
	ClearList();
}

//--------------------------------------------
// Function: ClearList()
// Purpose: Remove all items from the list
// Returns: void
//--------------------------------------------
void Code118_List::ClearList()
{
	ListItem *temp;

	if(!isEmpty())
	{
		temp = head;

		// Scan list and free all nodes
		while(head != NULL)
		{
			temp = head;
			head = head->next;
			delete temp;
		}
	}
}

//--------------------------------------------
// Function: Insert()
// Purpose: Insert an item into the list.
// Returns: true if insertion was successful
//		or false if the insertion failed.
//--------------------------------------------
bool Code118_List::Insert(int key, double f)
{
	ListItem *temp, *newNode;

	// Create a new node and insert the data
	newNode = new ListItem();
	// Check to see if memory allocation failed
	if(newNode == NULL) return false;
	// If all OK then insert the data
	newNode->key = key;
	newNode->theData = f;
	newNode->next = NULL; // Very import to init these pointers to NULL
	newNode->prev = NULL;

	// Check to see if the list is empty
	if(isEmpty())
	{
		// Insert new node as first in the list
		head = newNode;
	}
	else
	{
		// Find location for new node in the list.
		temp = head;
		while((temp->next != NULL) && (temp->key < key))
		{
			temp = temp->next;
		}

		// Check to see if adding at head of list
		if(temp->prev == NULL)
		{
			head->prev = newNode;   // Set former head's prev pointer
			newNode->next = head;
			head = newNode;
		}
		// Check to see if adding at tail of list
		else if((temp->next == NULL) && (newNode->key > temp->key))
		{
			temp->next = newNode;
			newNode->prev = temp;
		}
		else // Insert somewhere else in list
		{
			newNode->prev = temp->prev;	// Set newNode's pointers
			newNode->next = temp;
			temp->prev->next = newNode;	// Set next pointer for node before newNode
			temp->prev = newNode;		// Set prev pointer for node after newNode
		}
	}
	return true; // Signal successful insertion
}

//---------------------------------------------------
// Function: Delete()
// Purpose: Remove and return an item from the list.
// Returns: Item to be removed or NULL if not found.
//---------------------------------------------------
ListItem *Code118_List::Delete(int key)
{
	ListItem *temp;

	// Check for empty list
	if(isEmpty()) return NULL;

	// Search the list for the item to delete
	temp = head;
	// The order of the two conditionals in the while()
	// loop is VERY important.  You want to check first
	// to see if temp is NULL before trying to reference
	// the memory temp is pointing to.  If temp is NULL
	// then, because this is a && (AND) condition the
	// second condition will never be tested.  Testing
	// the second condition when temp==NULL will result
	// in a crash and burn.
	while((temp != NULL) && (key != temp->key))
	{
		temp = temp->next;
	}

	// Check to see if the item was found
	if(temp == NULL) 
		return NULL;  // Not found so return NULL
	else if(temp->prev == NULL) // Check to see if item is first in list
	{
		head = head->next;	// Advance head pointer to next item in the list
		if(head != NULL)	// This wasn't the last node in the list
			head->prev = NULL;	// Set it's prev pointer to NULL
		return temp;		// Dispose of the node removed from the list
	}
	else // Delete node elsewhere in the list
	{
		// Move pointer of node before the one temp points to
		temp->prev->next = temp->next;
		// Check to make sure this is not the last item in the list
		if(temp->next != NULL)
			temp->next->prev = temp->prev;// Move pointer of node after the one temp points to
		return temp; // Dispose of the node removed from the list
	}
	return NULL;	// Should never get here but this is to keep the compiler from giving a warning
}

//--------------------------------------------
// Function: Search()
// Purpose: Search for an item by key and copy
//		the value into the variable pointed to
//		by *retVal.
// Returns: true if search was successful
//		or false if the search failed.
// Note: The search in a double linked list
//      is identical to that in a single
//      linked list.
//--------------------------------------------
ListItem *Code118_List::Search(int key)
{
	ListItem *temp;

	temp = head;
	// See note on the order of the conditional in this
	// while() loop in Delete() function above.
	while((temp != NULL) && (key != temp->key))
	{
		temp = temp->next;
	}

	// If item not found or list is empty return false
	if(temp == NULL) return false;
	else
	{
		ListItem *retItem = new ListItem;
		*retItem = *temp;		// Block copy the structure to return
		retItem->next = retItem->prev = NULL;	// Clear the pointers
		return retItem;			// Return the duplicate copy
	}
}

//--------------------------------------------
// Function: ListLength()
// Purpose: Return the number of items in the 
//		list.
// Returns: Number of items in list.
//--------------------------------------------
int Code118_List::ListLength()
{
	ListItem *temp;
	int count = 0;

	temp = head;
	while(temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return count;
	// An alternate way to do this is to maintain
	// a member variable in this class, e.g. int m_iCount.  
	// This can be incremented each time a node is added 
	// and decremented each time a node is deleted.
}

//--------------------------------------------
// Function: isEmpty()
// Purpose: Return true if the list is empty
// Returns: true if empty, otherwise false
//--------------------------------------------
bool Code118_List::isEmpty()
{
	return (head == NULL);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the list is full
// Returns: true if full, otherwise false
// Note: In theory a linked list cannot be
//  full (unless you run out of memory) so
//	this function defaults to returning false.
//--------------------------------------------
bool Code118_List::isFull()
{
	return false;
}

//--------------------------------------------
// Function: PrintList()
// Purpose: Print all items in the list with
//	their priority.
// Returns: void
//--------------------------------------------
void Code118_List::PrintList()
{
	ListItem *temp;

	cout << "\nItems in the List\n";
	cout << "-----------------------------------------------------------\n";
	cout << "Key\t\tData\n";
	cout << "-----------------------------------------------------------\n";

	if(head == NULL)	// Report no items in the list
	{
		cout << "\t List is currently empty.\n";
	}
	else
	{
		temp = head;
		while(temp != NULL)
		{
			cout << temp->key << "\t\t" << temp->theData << "\n";
			temp=temp->next;
		}
	}
	cout << "-----------------------------------------------------------\n";
}