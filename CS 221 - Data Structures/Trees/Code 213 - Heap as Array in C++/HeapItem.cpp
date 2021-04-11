//----------------------------------------------------------------
// HeapItem.cpp
// Implementation file for a simple class with which to build 
//          the heap demonstration.
//
// Author: Dr. Rick Coleman
//----------------------------------------------------------------
#include "HeapItem.h"

//-----------------------------------
// Default constructor
//-----------------------------------
HeapItem::HeapItem()
{
     m_iKey = 0;
     m_dData = 0.0;
}

//-----------------------------------
// Constructor
//-----------------------------------
HeapItem::HeapItem(int key, double data)
{
     m_iKey = key;
     m_dData = data;
}

//-----------------------------------
// Destructor
//-----------------------------------
HeapItem::~HeapItem()
{
}

//-----------------------------------
// Return item priority
//-----------------------------------
int HeapItem::getKey()
{
     return m_iKey;
}

//-----------------------------------
// Set the priority key value
//-----------------------------------
void HeapItem::setKey(int key)
{
     m_iKey = key;
}

//-----------------------------------
// Return data item
//-----------------------------------
double HeapItem::getData()
{
     return m_dData;
}

//-----------------------------------
// Set the data item value
//-----------------------------------
void HeapItem::setData(double data)
{
     m_dData = data;
}