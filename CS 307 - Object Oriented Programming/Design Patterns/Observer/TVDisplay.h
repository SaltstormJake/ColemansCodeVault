//=================================================================================
// TVDisplay.h
// Interface file defining a concrete implementation of an observer to demonstrate
//	the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef TVDISPLAY_H
#define TVDISPLAY_H

#include "Observer.h"

class TVDisplay : public Observer
{
	private:
		double m_dTemperature;
		double m_dHumidity;
		double m_dPressure;

	public:
		TVDisplay();				// Default constructor
		~TVDisplay();				// destructor
		void update(Subject *s);	// Update the data being observed
};

#endif;