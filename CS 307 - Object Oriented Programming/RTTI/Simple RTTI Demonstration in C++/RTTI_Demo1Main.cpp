//======================================================================
// RTTI_Demo1Main.cpp
// Purpose: This is the simpliest type of Run Time Type Identification 
//		possible, but it does require that you define all the subclasses 
//		with the appropriate type ID field and that you use virtual 
//		functions to get the type.
// Author: Dr. Rick Coleman
//======================================================================
#include <vector>
#include "CShape.h"
#include "CRectangle.h"
#include "COval.h"
#include "CLine.h"
#include "CPolygon.h"
#include <iostream>

using namespace std;

void main()
{
	vectorsVec;

	// Create some shapes and add to the vector
	sVec.push_back(new CRectangle());
	sVec.push_back(new COval());
	sVec.push_back(new CLine());
	sVec.push_back(new CPolygon());
	sVec.push_back(new CRectangle());
	sVec.push_back(new COval());
	sVec.push_back(new CLine());
	sVec.push_back(new CPolygon());
	sVec.push_back(new CRectangle());
	sVec.push_back(new COval());
	sVec.push_back(new CLine());
	sVec.push_back(new CPolygon());

	// See what we have
	for(vector::iterator it=sVec.begin(); it != sVec.end(); it++)
	{
		cout << "Type = " << (*it)->getType() << ", Class = " << (*it)->getTypeName() << endl;
	}
	// Remember, the iterator is a pointer to the object in the vector, but in this case the
	//  object is itself a pointer to a CShape object.  Thus, the need to dereference the it
	//  pointer (*it) to get the CShape pointer which then must use the pointer operator (->)

}