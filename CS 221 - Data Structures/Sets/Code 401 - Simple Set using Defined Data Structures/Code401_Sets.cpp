//=================================================================== 
// File: Code401_Sets.cpp 
// Purpose: Main file for a demonstration of a set class. 
// Author: Dr. Rick Coleman 
//=================================================================== 
#include "SetItems.h" 
#include "Set.h" 
#include <iostream>

using namespace std;

int main(int argc, char **argv) 
{
     Set *Set1, *Set2, *aSet;
     SetItem *newItem;
     // In this demonstration we will create two sets.  The first contains
     //   int 1, int 2, long 4, float 5.6.  The second contains int 1, long 2,
     //   float 3.4, double 4.5
     Set1 = new Set();
     // Add item 1 to this set
     newItem = new SetItem();
     newItem->itemType = INTEGER;
     newItem->next = NULL;
     newItem->setMember = new IntStruct();
     ((IntStruct *)(newItem->setMember))->data = 1;
     ((IntStruct *)(newItem->setMember))->key = 1;
     Set1->addItem(newItem);
     // Add item 2 to this set
     newItem = new SetItem();
     newItem->itemType = INTEGER;
     newItem->next = NULL;
     newItem->setMember = new IntStruct();
     ((IntStruct *)(newItem->setMember))->data = 2;
     ((IntStruct *)(newItem->setMember))->key = 2;
     Set1->addItem(newItem);
     // Add item 3 to this set
     newItem = new SetItem();
     newItem->itemType = LONG;
     newItem->next = NULL;
     newItem->setMember = new LongStruct();
     ((LongStruct *)(newItem->setMember))->data = 4L;
     ((LongStruct *)(newItem->setMember))->key = 1;
     Set1->addItem(newItem);
     // Add item 4 to this set
     newItem = new SetItem();
     newItem->itemType = FLOAT;
     newItem->next = NULL;
     newItem->setMember = new FloatStruct();
     ((FloatStruct *)(newItem->setMember))->data = 5.6F;
     ((FloatStruct *)(newItem->setMember))->key = 1;
     Set1->addItem(newItem);

     Set2 = new Set();    
     // Add item 1 to this set
     // (Note: it is identical to the INTEGER in set 1)
     newItem = new SetItem();
     newItem->itemType = INTEGER;
     newItem->next = NULL;
     newItem->setMember = new IntStruct();
     ((IntStruct *)(newItem->setMember))->data = 1;
     ((IntStruct *)(newItem->setMember))->key = 1;
     Set2->addItem(newItem);
     // Add item 2 to this set
     newItem = new SetItem();
     newItem->itemType = LONG;
     newItem->next = NULL;
     newItem->setMember = new LongStruct();
     ((LongStruct *)(newItem->setMember))->data = 2L;
     ((LongStruct *)(newItem->setMember))->key = 1;
     Set2->addItem(newItem);
     // Add item 3 to this set
     newItem = new SetItem();
     newItem->itemType = FLOAT;
     newItem->next = NULL;
     newItem->setMember = new FloatStruct();
     ((FloatStruct *)(newItem->setMember))->data = 3.4F;
     ((FloatStruct *)(newItem->setMember))->key = 1;
     Set2->addItem(newItem);
     // Add item 4 to this set
     newItem = new SetItem();
     newItem->itemType = DOUBLE;
     newItem->next = NULL;
     newItem->setMember = new DoubleStruct();
     ((DoubleStruct *)(newItem->setMember))->data = 4.5;
     ((DoubleStruct *)(newItem->setMember))->key = 1;
     Set2->addItem(newItem);

      // Print both Sets
     cout << "Set 1 contains \n";
     Set1->PrintSet();
     cout << "\nSet 2 contains \n";
     Set2->PrintSet();
      // Create and print a union of the two
     aSet = Set1->Union(Set2);
     cout << "Union of Set 1 and Set 2 contains \n";
     aSet->PrintSet();
      // Delete that set to avoid a memory leak
     delete aSet;

      // Create and print an intersection of the two
     aSet = Set1->Intersection(Set2);
     cout << "Intersection of Set 1 and Set 2 contains \n";
     aSet->PrintSet();
      // Delete that set to avoid a memory leak
     delete aSet;
      // Create and print a difference of the two
     aSet = Set1->Difference(Set2);
     cout << "Difference of Set 1 and Set 2 contains \n";
     aSet->PrintSet();
     delete Set1;
     delete Set2;
     delete aSet;
     return 0; 
} 