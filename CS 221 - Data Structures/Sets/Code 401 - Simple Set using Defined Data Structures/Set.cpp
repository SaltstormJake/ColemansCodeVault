//=================================================================== 
// File: Set.cpp 
// Purpose: Implementation file for a demonstration of a set class. 
// Author: Dr. Rick Coleman 
//=================================================================== 
#include "SetItems.h" 
#include "Set.h" 
#include <iostream>

using namespace std;

//------------------------------------------ 
// Class constructor 
//------------------------------------------ 
Set::Set()
{
     head = NULL; 
}  

//------------------------------------------ 
// Class destructor 
//------------------------------------------ 
Set::~Set() 
{
     SetItem *temp;
     temp = head;
     while(temp != NULL)
     {
         head = head->next;          // Advance head
         delete temp->setMember;     // Delete the setMember item structure
         delete temp;                // Delete this list item
         temp = head;
     } 
}  

//------------------------------------------ 
// Add an item to the set. 
// Since order does not matter all new items 
// will be added at the head of the list. 
//------------------------------------------ 
void Set::addItem(SetItem *item) 
{
     item->next = head;
     head = item; 
}  

//------------------------------------------ 
// Remove an item from the set 
//------------------------------------------ 
bool Set::removeItem(int itemType, int key) 
{
     SetItem *back, *temp;
     if(head == NULL) return false; // Nothing to remove
     back = NULL;
     temp = head;
     while(temp != NULL)
     {
         // See if this is the correct type
         if(temp->itemType == itemType)
         {             // Use the generic structure type to fetch the key
             if(key == ((KeyStruct *)(temp->setMember))->key)
             {                 // Found the one to delete
                 if(back == NULL) // Delete head of list
                 {
                     head = head->next;
                 }
                 else
                 {
                     back->next = temp->next;
                 }
                 // Delete the item just removed and its' list node
                 delete temp->setMember;
                 delete temp;
                 // Done so return
                 return true;
             }
             // If that was not the one we are searching for then advance pointers
             back = temp;
             temp = temp->next;
         }
     }
     // If we get here we didn't find the one to remove
     return false; 
}  

//------------------------------------------ 
// Return a new set which is the union of 
// this set and the set passed in as an arg. 
//------------------------------------------ 
Set *Set::Union(Set *aSet) 
{     
     Set *newSet = new Set();
     SetItem *temp;
     int count;
     // Add all the items from this set
     temp = head;
     while(temp != NULL)
     {
         newSet->addItem(this->copy(temp));
         temp = temp->next;
     }
      // Now add all the items from the other set
     count = aSet->itemCount();
     for(int i=0; i<count; i++)
     {
         newSet->addItem(aSet->copy(i));
     }
      return newSet; 
}   

//------------------------------------------ 
// Return a new set which is the intersection 
// of this set and the set passed in as an arg. 
//------------------------------------------ 
Set *Set::Intersection(Set *aSet) 
{
     Set *newSet = new Set();
     SetItem *temp;
      // Add all the items in both sets
     temp = head;
     while(temp != NULL)
     {
         if(aSet->contains(temp))
             newSet->addItem(this->copy(temp));
         temp = temp->next;
     }     return newSet; 
}  

//------------------------------------------ 
// Return a new set which is the difference 
// of this set and the set passed in as an 
// arg. Difference means all itens in this 
// set that are not in the arg set. 
//------------------------------------------ 
Set *Set::Difference(Set *aSet) 
{
     Set *newSet = new Set();
     SetItem *temp;
      // Add all the items in this set but not in the other
     temp = head;
     while(temp != NULL)
     {
         if(!(aSet->contains(temp)))
             newSet->addItem(this->copy(temp));
         temp = temp->next;
     }
     return newSet; 
}  

//------------------------------------------ 
// Return true if this set contains the  
//  indicated item.  We consider a match 
//  if the ItemType, Key, and data value  
//  matches the one in the given item. 
//------------------------------------------ 
bool Set::contains(int itemType, void *item) 
{
     SetItem *temp;
     temp = head;
     while(temp != NULL)
     {
         if((itemType == temp->itemType) &&
              (((KeyStruct *)item)->key == ((KeyStruct *)temp)->key))
         {
             switch(itemType)
             {
                 case INTEGER :
                      if( ((IntStruct *)item)->data == ((IntStruct *)(temp->setMember))->data)
                         return true;
                     break;
                 case LONG :
                      if( ((LongStruct *)item)->data == ((LongStruct *)(temp->setMember))->data)
                         return true;
                     break;
                 case FLOAT :
                      if( ((FloatStruct *)item)->data == ((FloatStruct *)(temp->setMember))->data)
                         return true;
                     break;
                 case DOUBLE :
                      if( ((DoubleStruct *)item)->data == ((DoubleStruct *)(temp->setMember))->data)
                         return true;
                     break;
             }
         }
         // That's not it so advance to next item
         temp = temp->next;
     }
     // If still here we didn't find it
     return false; 
}  

//------------------------------------------ 
// Return true if this set contains the  
//  indicated item.  We consider a match 
//  if the ItemType, Key, and data value  
//  matches the one in the given item. 
//------------------------------------------ 
bool Set::contains(SetItem *item) 
{
     SetItem *temp;
     temp = head;
     while(temp != NULL)
     {
         if((item->itemType == temp->itemType) &&
             (((KeyStruct *)(item->setMember))->key == ((KeyStruct *)(temp->setMember))->key))
         {
             switch(item->itemType)
             {
                 case INTEGER :
                      if( ((IntStruct *)(temp->setMember))->data == ((IntStruct *)(item->setMember))->data)
                         return true;
                     break;
                 case LONG :
                      if( ((LongStruct *)(temp->setMember))->data == ((LongStruct *)(item->setMember))->data)
                         return true;
                     break;
                 case FLOAT :
                      if( ((FloatStruct *)(temp->setMember))->data == ((FloatStruct *)(item->setMember))->data)
                         return true;
                     break;
                 case DOUBLE :
                      if( ((DoubleStruct *)(temp->setMember))->data == ((DoubleStruct *)(item->setMember))->data)
                         return true;
                     break;
             }
         }
         // That's not it so advance to next item
         temp = temp->next;
     }
     // If still here we didn't find it
     return false; 
}

//------------------------------------------ 

// Return the number of items in this set. 

//------------------------------------------ 
int Set::itemCount() 
{
     SetItem *temp;
     int count = 0;
     temp = head;
     while(temp != NULL)
     {
         count++;
         temp = temp->next;
     }
     return count; 
}  

//------------------------------------------ 
// Copy a SetItem structure and its item. 
//------------------------------------------ 
SetItem *Set::copy(SetItem *anItem) 
{
     SetItem *newNode = new SetItem();
     newNode->itemType = anItem->itemType; // Set item type
     newNode->next = NULL;                 // Set next pointer to NULL
     switch(anItem->itemType)
     {
         case INTEGER : // Duplicate an INTEGER item
             newNode->setMember = (void *)(new IntStruct()); // Cast pointer to void type
             // Copy the setMember structure
             *((IntStruct *)(newNode->setMember)) = *((IntStruct *)(anItem->setMember));
             break;
         case LONG : // Duplicate an LONG item 
            newNode->setMember = (void *)(new LongStruct()); // Cast pointer to void type
             // Copy the setMember structure
             *((LongStruct *)(newNode->setMember)) = *((LongStruct *)(anItem->setMember));
             break;
         case FLOAT : // Duplicate an FLOAT item
             newNode->setMember = (void *)(new FloatStruct()); // Cast pointer to void type
             // Copy the setMember structure
             *((FloatStruct *)(newNode->setMember)) = *((FloatStruct *)(anItem->setMember));
             break;
         case DOUBLE : // Duplicate an DOUBLE item
             newNode->setMember = (void *)(new DoubleStruct()); // Cast pointer to void type
             // Copy the setMember structure
             *((DoubleStruct *)(newNode->setMember)) = *((DoubleStruct *)(anItem->setMember));
             break;
     }
     return newNode; 
}  

//------------------------------------------ 
// Copy a SetItem structure and its item at 
//  the given index.  Assuming the index of 
//  of the item at the head of the list is 0. 
//------------------------------------------ 
SetItem *Set::copy(int index) 
{
     SetItem *temp;
     int count = 0;
     SetItem *newNode = new SetItem();
      // Find the item to copy
     temp = head;
     while(temp != NULL)
     {
         if(count == index) break; // terminate while loop
         count++;
         temp = temp->next;
     }
     if(temp == NULL) return NULL; // No node at this index
     newNode->itemType = temp->itemType;
     newNode->next = NULL;
     switch(temp->itemType)
     {
         case INTEGER : // Duplicate an INTEGER item
             newNode->setMember = (void *)(new IntStruct()); // Cast pointer to void type
             // Copy the setMember structure
             *((IntStruct *)(newNode->setMember)) = *((IntStruct *)(temp->setMember));
             break;
         case LONG : // Duplicate an LONG item
             newNode->setMember = (void *)(new LongStruct()); // Cast pointer to void type
             // Copy the setMember structure
             *((LongStruct *)(newNode->setMember)) = *((LongStruct *)(temp->setMember));
             break;
         case FLOAT : // Duplicate an FLOAT item
             newNode->setMember = (void *)(new FloatStruct()); // Cast pointer to void type
             // Copy the setMember structure
             *((FloatStruct *)(newNode->setMember)) = *((FloatStruct *)(temp->setMember));
             break;
         case DOUBLE : // Duplicate an DOUBLE item 
            newNode->setMember = (void *)(new DoubleStruct()); // Cast pointer to void type
             // Copy the setMember structure
             *((DoubleStruct *)(newNode->setMember)) = *((DoubleStruct *)(temp->setMember));
             break;
     }
     return newNode; 
}  

//------------------------------------------ 
// Print all data in this set. 
//------------------------------------------ 
void Set::PrintSet() 
{
     SetItem *temp;
     temp = head;
     cout << "========== Items in Set ==========\n";
     cout << " Type\t\tKey\tValue\n";
      cout << "----------------------------------\n";
     while(temp != NULL)
     {
         switch(temp->itemType)
         {
             case INTEGER :
                 cout << "INTEGER  " << "\t" << ((KeyStruct *)(temp->setMember))->key <<
                    "\t" << ((IntStruct *)(temp->setMember))->data << "\n";
                 break;
             case LONG :
                 cout << "LONG     " << "\t" << ((KeyStruct *)(temp->setMember))->key <<
                    "\t" << ((LongStruct *)(temp->setMember))->data << "\n";
                 break;
             case FLOAT :
                 cout << "FLOAT    " << "\t" << ((KeyStruct *)(temp->setMember))->key <<
                    "\t" << ((FloatStruct *)(temp->setMember))->data << "\n";
                 break;
             case DOUBLE :
                 cout << "DOUBLE   " << "\t" << ((KeyStruct *)(temp->setMember))->key <<
                    "\t" << ((DoubleStruct *)(temp->setMember))->data << "\n";
                 break;
         }
         temp = temp->next;
     }
     cout << "==================================\n\n";
     cout.flush(); 
}  