//---------------------------------------------------------------
// File: Code112_List.cpp
// Purpose: Implementation file for a demonstration of an unsorted  
//          list implemented as a linked structure.
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#include "Code112_List.h"

//--------------------------------------------
// Function: Code112_List()
// Purpose: Class constructor
// Returns: void
//--------------------------------------------
Code112_List::Code112_List()
{
     head = NULL;
}

//--------------------------------------------
// Function: Code112_List()
// Purpose: Class destructor
// Returns: void
//--------------------------------------------
Code112_List::~Code112_List()
{
     // Clear the list to free any memory being used
     ClearList();
}

//--------------------------------------------
// Function: ClearList()
// Purpose: Remove all items from the list
// Returns: void
//--------------------------------------------
void Code112_List::ClearList()
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
// Purpose: Insert an item into the list at
//          the end of the list.  See alternate
//          code below for insert at the beginning
//          of the list.
// Returns: true if insertion was successful
//          or false if the insertion failed.
//--------------------------------------------
bool Code112_List::Insert(int key, float f)
{
     ListItem *temp, *newNode;

     // Create a new node and insert the data
     newNode = new ListItem();
     // Check to see if memory allocation failed
     if(newNode == NULL) return false;
     // If all OK then insert the data
     newNode->key = key;
     newNode->theData = f;
     newNode->next = NULL; // Very import to init this to NULL

     // Check to see if the list is empty
     if(isEmpty())
     {
          // Insert new node as first in the list
          head = newNode;
     }
     else
     {
          // Find end of the list
          temp = head;
          while(temp->next != NULL)
               temp = temp->next;

          // Add this node to the end of the list
          temp->next = newNode;

          /* Alternate insertion code:
          *  Since this is an unsorted list an alternate
          *  insertion approach is to add the new node at
          *  the head of the list.  To do this replace all
          *  of the code in the else part of this function
          *  with the following:
          * 
          *  newNode->next = head;
          *  head = newNode;
          */
     }
     return true; // Signal successful insertion
}

//--------------------------------------------
// Function: Delete()
// Purpose: Remove and return an item from 
//			the list.
// Returns: Pointer to the item removed or
//				NULL if not found
//--------------------------------------------
ListItem *Code112_List::Delete(int key)
{
     ListItem *temp, *back;

     // Check for empty list
     if(isEmpty()) return NULL;

     // Search the list for the item to delete
     temp = head;
     back = NULL;
     // The order of the two conditionals in the while()
     // look is VERY important.  You want to check first
     // to see if temp is NULL before trying to reference
     // the memory temp is pointing to.  If temp is NULL
     // then, because this is a && (AND) condition the
     // second condition will never be tested.  Testing
     // the second condition when temp==NULL will result
     // in a crash and burn.
     while((temp != NULL) && (key != temp->key))
     {
          back = temp;
          temp = temp->next;
     }

     // Check to see if the item was found
     if(temp == NULL) return NULL;  // Not found so return false
     else if(back == NULL) // Check to see if item is first in list
     {
          head = head->next;
          return temp; // Return the removed item
     }
     else // Delete node elsewhere in the list
     {
          back->next = temp->next;
          return temp; // Return the removed item
     }
     return NULL;     // Should not get here but this keeps the compiler from giving a warning.
}


//--------------------------------------------
// Function: Search()
// Purpose: Search for an item by key and copy
//          the value into the variable pointed to
//          by *retVal.
// Returns: Copy of the node if successful or
//				false if failed.
//--------------------------------------------
ListItem *Code112_List::Search(int key)
{
     ListItem *temp;

     temp = head;
     // See note on the order of the conditional in this
     // while() loop in Delete() function above.
     while((temp != NULL) && (key != temp->key))
     {
          temp = temp->next;
     }

     // If item not found or list is empty return NULL
     if(temp == NULL) return NULL;
     else
	 {
		 ListItem *retItem = new ListItem();
		 *retItem = *temp;		// block copy the entire structure
		 retItem->next = NULL; // clear the pointer
		 return retItem;     // Signal successful search
	 }
}

//--------------------------------------------
// Function: ListLength()
// Purpose: Return the number of items in the 
//          list.
// Returns: Number of items in list.
//--------------------------------------------
int Code112_List::ListLength()
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
     // a static variable at the top of this source
     // code, e.g. int count.  This can be incremented
     // each time a node is added and decremented each
     // time a node is deleted.
}

//--------------------------------------------
// Function: isEmpty()
// Purpose: Return true if the list is empty
// Returns: true if empty, otherwise false
//--------------------------------------------
bool Code112_List::isEmpty()
{
     return (head == NULL);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the list is full
// Returns: true if full, otherwise false
// Note: In theory a linked list cannot be
//  full (unless you run out of memory) so
//     this function defaults to returning false.
//--------------------------------------------
bool Code112_List::isFull()
{
     return false;
}


//--------------------------------------------
// Function: PrintList()
// Purpose: Print all items in the list with
//     their priority.
// Returns: void
//--------------------------------------------
void Code112_List::PrintList()
{
     ListItem *temp;

     cout << "\n\nItems in the List\n";
     cout << "-----------------------------------------------------------\n";
     cout << "Key\t\tData\n";
     cout << "-----------------------------------------------------------\n";

     if(head == NULL)     // Report no items in the list
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
     cout << "-----------------------------------------------------------\n\n";
}