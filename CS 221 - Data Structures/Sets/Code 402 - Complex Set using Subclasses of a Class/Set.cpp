//===================================================================
// File: Set.cpp
// Purpose: Implementation file for a demonstration of a set class.
// Author: Dr. Rick Coleman
//===================================================================
#include "SetInfo.h"
#include "SetObject.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
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
    SetObject *temp;
    temp = head;
    while(temp != NULL)
    {
        head = head->next;            // Advance head
        delete temp;                // Delete this object
        temp = head;
    }
}

//------------------------------------------
// Add an item to the set.
// Since order does not matter all new items
// will be added at the tail of the list.
//------------------------------------------
void Set::addItem(SetObject *item)
{
    SetObject *temp;

    if(head == NULL)
    {
        // Add first item to set
        head = item;
        return;
    }
    // Add item at end of the list 
    temp = head;
    while(temp->next != NULL) temp = temp->next;

    temp->next = item;
}

//------------------------------------------
// Remove an item from the set
//------------------------------------------
bool Set::removeItem(int type, int key)
{
    SetObject *back, *temp;

    if(head == NULL) return false; // Nothing to remove

    back = NULL;
    temp = head;
    while((temp != NULL) && (temp->getType() != type) && (temp->getKey() != key))
    {
            back = temp;
            temp = temp->next;
    }
    if(temp != NULL) // found it
    {
        // Found the one to delete
        if(back == NULL) // Delete head of list
            head = head->next;
        else
            back->next = temp->next;
        // Delete the object just removed
        delete temp;
        // Done so return
        return true;
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
    SetObject *temp;
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
        SetObject *theObj =  aSet->copy(i);
        if(theObj != NULL)
            newSet->addItem(aSet->copy(i));
        else
        {
            cout << "Copy returned null in Union\n";
            cout.flush();
        }
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
    SetObject *temp;

    // Add all the items in both sets
    temp = head;
    while(temp != NULL)
    {
        if(aSet->contains(temp))
            newSet->addItem(this->copy(temp));
        temp = temp->next;
    }
    return newSet;
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
    SetObject *temp;

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
//  if the itemType and values both match
//  those in the given item.
//------------------------------------------
bool Set::contains(SetObject *item)
{
    SetObject *temp;
    temp = head;
    while(temp != NULL)
    {
        if(item->getType() == temp->getType())
        {
            switch(item->getType())
            {
                case TRIANGLE : 
                    if((((Triangle *)item)->getPointX(1) == ((Triangle *)temp)->getPointX(1)) && 
                            (((Triangle *)item)->getPointY(1) == ((Triangle *)temp)->getPointY(1)) &&
                       (((Triangle *)item)->getPointX(2) == ((Triangle *)temp)->getPointX(2)) && 
                            (((Triangle *)item)->getPointY(2) == ((Triangle *)temp)->getPointY(2)) &&
                       (((Triangle *)item)->getPointX(3) == ((Triangle *)temp)->getPointX(3)) && 
                            (((Triangle *)item)->getPointY(3) == ((Triangle *)temp)->getPointY(3)))
                       return true;
                    break;
                case RECTANGLE : 
                    if((((Rectangle *)item)->getPointX() == ((Rectangle *)temp)->getPointX()) &&
                       (((Rectangle *)item)->getPointY() == ((Rectangle *)temp)->getPointY()) &&
                       (((Rectangle *)item)->getWidth() == ((Rectangle *)temp)->getWidth()) && 
                       (((Rectangle *)item)->getHeight() == ((Rectangle *)temp)->getHeight()))
                        return true;
                    break;
                case CIRCLE : 
                    if((((Circle *)item)->getCenterX() == ((Circle *)temp)->getCenterX()) && 
                       (((Circle *)item)->getRadius() == ((Circle *)temp)->getRadius()))
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
    SetObject *temp;
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
// Copy a SetObject structure and its item.
//------------------------------------------
SetObject *Set::copy(SetObject *anItem)
{
    SetObject *newObj = NULL;

    newObj = anItem->copy(); // This will call the appropriate copy function
    switch(anItem->getType())
    {
        case TRIANGLE : // Duplicate a TRIANGLE object
            newObj = (SetObject *)(((Triangle *)anItem)->copy()); // This will call the appropriate copy function
            break;
        case RECTANGLE : // Duplicate a RECTANGLE object
            newObj = (SetObject *)(((Rectangle *)anItem)->copy()); // This will call the appropriate copy function
            break;
        case CIRCLE : // Duplicate a CIRCLE object
            newObj = (SetObject *)(((Circle *)anItem)->copy()); // This will call the appropriate copy function
            break;
    }
    
    return newObj;
}

//------------------------------------------
// Copy a SetObject structure and its item at
//  the given index.  Assuming the index of
//  of the item at the head of the list is 0.
//------------------------------------------
SetObject *Set::copy(int index)
{
    SetObject *temp, *newObj = NULL;
    int count = 0;

    // Find the item to copy
    temp = head;
    while(temp != NULL)
    {
        if(count == index) break; // terminate while loop
        count++;
        temp = temp->next;
    }
    if(temp == NULL) return NULL; // No node at this index

    switch(temp->getType())
    {
        case TRIANGLE : // Duplicate a TRIANGLE object
            newObj = (SetObject *)(((Triangle *)temp)->copy()); // This will call the appropriate copy function
            break;
        case RECTANGLE : // Duplicate a RECTANGLE object
            newObj = (SetObject *)(((Rectangle *)temp)->copy()); // This will call the appropriate copy function
            break;
        case CIRCLE : // Duplicate a CIRCLE object
            newObj = (SetObject *)(((Circle *)temp)->copy()); // This will call the appropriate copy function
            break;
    }
    
    return newObj;
}

//------------------------------------------
// Print all data in this set.
//------------------------------------------
void Set::PrintSet()
{
    SetObject *temp;
    temp = head;
    cout << "==================== Objects in Set ====================\n";
    while(temp != NULL)
    {
        switch(temp->getType())
        {
            case TRIANGLE :
                ((Triangle*)(temp))->printData();
                break;
            case RECTANGLE : 
                ((Rectangle*)(temp))->printData();
                break;
            case CIRCLE : 
                ((Circle*)(temp))->printData();
                break;
        }
        temp = temp->next;
    }
    cout << "======================================================\n\n";
    cout.flush();
}