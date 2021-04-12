//=================================================================================
// GPSDisplay.h
// Interface file defining a concrete implementation of an observer to demonstrate
//	the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef GPSDISPLAY_H
#define GPSDISPLAY_H

#include "Observer.h"

class GPSDisplay : public Observer
{
	private:
		double m_dTemperature;
		double m_dHumidity;
		double m_dPressure;

	public:
		GPSDisplay();				// Default constructor
		~GPSDisplay();				// destructor
		void update(Subject *s);	// Update the data being observed
};

#endif;