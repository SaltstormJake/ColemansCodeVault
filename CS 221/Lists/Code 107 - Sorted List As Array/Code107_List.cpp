//---------------------------------------------------------------
// File: Code107_List.cpp
// Purpose: Implementation file for a demonstration of a sorted  
//          list implemented as an array.
// Programming Language: C++
// Author: Dr. Rick Coleman
// Date: January 7, 2002
//---------------------------------------------------------------
#include "Code107_List.h"

//--------------------------------------------
// Function: Code107_List()
// Purpose: Class constructor
// Returns: void
//--------------------------------------------
Code107_List::Code107_List()
{
     head = -1;
}

//--------------------------------------------
// Function: Code107_List()
// Purpose: Class destructor
// Returns: void
//--------------------------------------------
Code107_List::~Code107_List()
{
     // Nothing to do here since the memory used
     // for the list is freed automatically.
}

//--------------------------------------------
// Function: ClearList()
// Purpose: Remove all items from the list
// Returns: void
//--------------------------------------------
void Code107_List::ClearList()
{
     head = -1; // Reset count to start over
}

//--------------------------------------------
// Function: Insert()
// Purpose: Insert an item into the list in
//          the next open slot.
// Returns: TRUE if insertion was successful
//          or FALSE if the insertion failed.
//--------------------------------------------
int Code107_List::Insert(int key, float f)
{
     int idx, i;

     // Check to see if the list is full
     if(isFull()) return FALSE;

     // Locate where to insert this item in the list
     idx = 0;
     while((idx <= head) && (theList[idx].key < key)) idx++;

     // Move all other items up 1 in list to make room for the
     // new item to be inserted in the correct place
     head++;          // Increment head index
     for(i=head; i>idx; i--)
          theList[i] = theList[i-1];

     // Insert the item into the list
     theList[idx].key = key;
     theList[idx].theData = f;
     return TRUE;
}

//--------------------------------------------
// Function: Delete()
// Purpose: Delete an item from the list and
//          move all others up to close up the 
//          empty space.
// Returns: TRUE if deletion was successful
//          or FALSE if the deletion failed.
//--------------------------------------------
int Code107_List::Delete(int key)
{
     int i, d = 0;

     // Check for empty list
     if(isEmpty()) return FALSE;

     // Search the list for the item to delete
     while((d <= head) && (key != theList[d].key))
     {
          d++;
     }

     // Check to see if the item was found
     if(d > head) return FALSE;  // Not found so return FALSE
     else
     {
          // Move all other items toward the front of the array
          // This also overwrites and "deletes" the task searched for
          for(i = d; i < head; i++)
          {
               theList[i] = theList[i+1]; // Using whole structure copy
          }
          head--; // Reset head
     }
     return TRUE;
}


//--------------------------------------------
// Function: Search()
// Purpose: Search for an item by key and copy
//          the value into the variable pointed to
//          by *retVal.
// Returns: TRUE if search was successful
//          or FALSE if the search failed.
//--------------------------------------------
int Code107_List::Search(int key, float *retVal)
{
     int s = 0;

     while((s <= head) && (key != theList[s].key))
     {
          s++;
     }

     // If item not found return FALSE
     if(s > head) return FALSE;
     else
          *retVal = theList[s].theData; // Copy the data
     return TRUE;
}

//--------------------------------------------
// Function: ListLength()
// Purpose: Return the number of items in the 
//          list.
// Returns: Number of items in list.
// Note: head is the index of the last filled
//     slot.  To get the number of items you must
//     add 1 to the last filled index.
//--------------------------------------------
int Code107_List::ListLength()
{
     return head+1;
}

//--------------------------------------------
// Function: isEmpty()
// Purpose: Return true if the list is empty
// Returns: TRUE if empty, otherwise FALSE
// Note: C has no boolean data type so we use
//     the defined int values for TRUE and FALSE
//     instead.
//--------------------------------------------
int Code107_List::isEmpty()
{
     return (head == -1);
}

//--------------------------------------------
// Function: isFull()
// Purpose: Return true if the list is full
// Returns: TRUE if full, otherwise FALSE
// Note: C has no boolean data type so we use
//     the defined int values for TRUE and FALSE
//     instead.
//--------------------------------------------
int Code107_List::isFull()
{
     return (head >= MAX_SIZE);
}


//--------------------------------------------
// Function: PrintList()
// Purpose: Print all items in the list with
//     their priority.
// Returns: void
//--------------------------------------------
void Code107_List::PrintList()
{
     int i;

     cout << "\n\nItems in the List\n";
     cout << "-----------------------------------------------------------\n";
     cout << "Key\t\tData\n";
     cout << "-----------------------------------------------------------\n";

     for(i=0; i<=head; i++)
     {
          cout << theList[i].key << "\t\t" << theList[i].theData << "\n";
     }
     cout << "-----------------------------------------------------------\n\n";
}