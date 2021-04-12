//===================================================================
// File: Set.h
// Purpose: Header file for a demonstration of a set class.
// Author: Dr. Rick Coleman
//===================================================================
#ifndef SET_H
#define SET_H

#include "SetObject.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

class Set
{
    private:
        SetObject *head; // Head of linked list of items in the set

    public:
        Set();                            // Constructor
        ~Set();                            // Destructor
        void addItem(SetObject *item);    // Add an item to the set
        bool removeItem(int type, int key); // Remove an item from the set
        Set *Union(Set *aSet);            // Return new set-Union this and aSet
        Set *Intersection(Set *aSet);    // Return new set--Intersection this and aSet
        Set *Difference(Set *aSet);        // Return new set--Differrence this and aSet
        bool contains(SetObject *item); // Return true if item in this set
        int itemCount();                // Return number of items in this set
        SetObject *copy(SetObject *anItem); // Copy an item in the set
        SetObject *copy(int index);       // Copy item at index (item at head = index 0)
        void PrintSet();                // Print all data in this set
};


#endif