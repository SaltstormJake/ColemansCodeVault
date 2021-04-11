//---------------------------------------------------------------
// File: Code102_List.h
// Purpose: Header file for a demonstration of an unsorted list 
//		implemented as an array.
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#ifndef CODE102_LIST_H
#define CODE102_LIST_H

#include <iostream>

using namespace std;

// Define a structure to use as the list item
struct ListItem
{
     int     key;		
     float   theData;
};

#define MAX_SIZE  50     // Define maximum length of the list

class Code102_List
{
	private:
		int head;                     // Index to head of the list
		ListItem theList[MAX_SIZE];   // The list

	public:
		Code102_List();               // Class constructor
		~Code102_List();              // Class destuctor
		void ClearList();             // Remove all items from the list
		bool Insert(int key, float f);// Add an item to the list
		bool Delete(int key);         // Delete an item from the list
		bool Search(int key, float *retVal); // Search for an item in the list
		int ListLength();             // Return number of items in list
		bool isEmpty();               // Return true if list is empty
		bool isFull();                // Return true if list is full
		void PrintList();             // Print all items in the list
};
#endif // End of list header
