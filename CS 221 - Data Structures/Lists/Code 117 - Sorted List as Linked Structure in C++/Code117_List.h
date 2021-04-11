//---------------------------------------------------------------
// File: Code117_List.h
// Purpose: Header file for a demonstration of a sorted list 
//		implemented as a linked structure.
// Programming Language: C++
// Author: Dr. Rick Coleman
//---------------------------------------------------------------
#pragma once;

#include <iostream>
using namespace std;

// Define a structure to use as the list item
struct ListItem
{
     int      key;		
     float    theData;
	 ListItem *next;
};

class Code117_List
{
	private:
		ListItem *head;               // Pointer to head of the list

	public:
		Code117_List();               // Class constructor
		~Code117_List();              // Class destuctor
		void ClearList();             // Remove all items from the list
		bool Insert(int key, float f);// Add an item to the list
		ListItem *Delete(int key);   // Remove and return an item from the list
		ListItem *Search(int key); // Search for an item in the list
		int ListLength();             // Return number of items in list
		bool isEmpty();               // Return true if list is empty
		bool isFull();                // Return true if list is full
		void PrintList();             // Print all items in the list
};