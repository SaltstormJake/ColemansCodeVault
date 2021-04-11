//---------------------------------------------------------------
// File: Code107_List.h
// Purpose: Header file for a demonstration of a sorted list 
//          implemented as an array.
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE107_LIST_H
#define CODE107_LIST_H

#include <iostream>
using namespace std;

// Define a structure to use as the list item
struct ListItem
{
     int       key;          
     float     theData;
};

#define MAX_SIZE     50          // Define maximum length of the list

class Code107_List
{
     private:
          int head;                         // Index to head of the list
          ListItem theList[MAX_SIZE];     // The list

     public:
          Code107_List();                     // Class constructor
          ~Code107_List();                    // Class destuctor
          void ClearList();                   // Remove all items from the list
          int Insert(int key, float f);       // Add an item to the list
          int Delete(int key);                // Delete an item from the list
          int Search(int key, float *retVal); // Search for an item in the list
          int ListLength();                   // Return number of items in list
          int isEmpty();                      // Return true if list is empty
          int isFull();                       // Return true if list is full
          void PrintList();                   // Print all items in the list
};

// Define TRUE and FALSE if they have not already been defined
#ifndef FALSE
#define FALSE (0)
#endif
#ifndef TRUE
#define TRUE (!FALSE)
#endif

#endif // End of list header