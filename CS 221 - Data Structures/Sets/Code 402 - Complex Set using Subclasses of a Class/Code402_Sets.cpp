//===================================================================
// File: Code402_Sets.cpp
// Purpose: Main file for a demonstration of a set class.
// Author: Dr. Rick Coleman
//===================================================================
#include "SetObject.h"
#include "Sets2.h"
#include "Set.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	Set *Set1, *Set2, *aSet;
	SetObject *newItem;

	// In this demonstration we will create two sets.  The first contains
	//   int 1, int 2, long 4, float 5.6.  The second contains int 1, long 2,
	//   float 3.4, double 4.5	

	Set1 = new Set();
	// Add item 1 to this set
	newItem = (SetObject *)(new Triangle(0.0, 0.0, 1.0, 1.0, 1.0, 0.0));
	Set1->addItem(newItem);
	// Add item 2 to this set
	newItem = (SetObject *)(new Rectangle(0.0, 5.0, 5.0, 5.0));
	Set1->addItem(newItem);
	// Add item 3 to this set
	newItem = (SetObject *)(new Circle(5.0, 5.0, 5.0));
	Set1->addItem(newItem);


	Set2 = new Set();
	// Add a duplicate of the last circle in Set 1 to Set 2
	Set2->addItem(Set1->copy(2));
	// Add item 1 to this set
	newItem = (SetObject *)(new Triangle(0.0, 0.0, 2.0, 2.0, 2.0, 0.0));
	Set2->addItem(newItem);
	// Add item 2 to this set
	newItem = (SetObject *)(new Rectangle(0.0, 10.0, 10.0, 10.0));
	Set2->addItem(newItem);
	// Add item 3 to this set
	newItem = (SetObject *)(new Circle(5.0, 5.0, 3.0));
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

	// Delete that set to avoid a memory leadk
	delete aSet;

	// Create and print an intersection of the two
	aSet = Set1->Intersection(Set2);
	cout << "Intersection of Set 1 and Set 2 contains \n";
	aSet->PrintSet();

	// Delete that set to avoid a memory leadk
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