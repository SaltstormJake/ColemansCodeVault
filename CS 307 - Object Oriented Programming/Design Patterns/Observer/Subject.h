//=================================================================================
// Subject.h
// Interface file defining the parent class for all concrete implementations of a
//   subject to demonstrate the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef SUBJECT_H
#define SUBJECT_H

class Observer;	// Forward definition to avoid a circular include with Observer.h

class Subject
{
	public:
		Subject();										// Default constructor
		~Subject();										// Destructor
		virtual void registerObserver(Observer *obs);	// Add an observer
		virtual bool removeObserver(Observer *obs);		// Remove an observer
		virtual void notifyObservers();					// Notify all observers
};
#endif