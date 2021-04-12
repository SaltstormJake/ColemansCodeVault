//===================================================================
// File: Set.h
// Purpose: Header file for a demonstration of a set class.
// Author: Dr. Rick Coleman
//===================================================================
#ifndef SET_H 
#define SET_H  

#include "SetItems.h"

class Set 
{
     private:
         SetItem *head; // Head of linked list of items in the set
      public:
         Set();                          // Constructor
         ~Set();                         // Destructor
         void addItem(SetItem *item);    // Add an item to the set
         bool removeItem(int itemType, int key); // Remove an item from the set
         Set *Union(Set *aSet);          // Return new set-Union this and aSet
         Set *Intersection(Set *aSet);   // Return new set--Intersection this and aSet
         Set *Difference(Set *aSet);     // Return new set--Differrence this and aSet
         bool contains(int itemType, void *item); // Return true if item is in the set
         bool contains(SetItem *item);   // Return true if item in this SetItem is in the set
         int itemCount();                // Return number of items in this set
         SetItem *copy(SetItem *anItem); // Copy an item in the set
         SetItem *copy(int index);       // Copy item at index (item at head = index 0)
         void PrintSet();                // Print all data in this set 
};
#endif 