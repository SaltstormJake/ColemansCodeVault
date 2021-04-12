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
#include <typeinfo>

using namespace std;

void main()
{
	std::vector<CShape *> sVec;

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
	for(std::vector<CShape *>::iterator it=sVec.begin(); it != sVec.end(); it++)
	{
		cout << "Class = " << typeid(**it).name() << endl;
		// Remember the iterator is a pointer to an object from the vector, which in
		//   this case is also a pointer to a CShape derived class.  To get
		//   the actual instance of the class we must use a double
		//   dereference, i.e. "*it" gives us the pointer to a CShape object
		//   while "**it" gives us the actual object which is what we want to
		//   pass as the argument to typeid().
	}
	// NOTE: Depending on which compiler you use the above call may return
	//       strings in the format "class CRectangle" or just "CRectangle"

}