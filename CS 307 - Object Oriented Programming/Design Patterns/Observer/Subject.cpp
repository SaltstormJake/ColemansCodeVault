//=====================================================================================
// Subject.cpp
// Implementation file defining the parent class for all concrete implementations of a
//   subject to demonstrate the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=====================================================================================
#include "Subject.h"
#include <iostream>

using namespace std;

//-------------------------------
// Default constructor
//-------------------------------
Subject::Subject()
{
}

//-------------------------------
// Destructor
//-------------------------------
Subject::~Subject()
{
}

//-------------------------------
// Add an observer
//-------------------------------
void Subject::registerObserver(Observer *obs)
{
	cout << "Subclasses should override the registerObserver function.\n";
}

//-------------------------------
// Remove an observer
//-------------------------------
bool Subject::removeObserver(Observer *obs)
{
	cout << "Subclasses should override the removeObserver function.\n";
	return false;
}

//-------------------------------
// Notify all observers
//-------------------------------
void Subject::notifyObservers()
{
	cout << "Subclasses should override the notifyObservers function.\n";
}

