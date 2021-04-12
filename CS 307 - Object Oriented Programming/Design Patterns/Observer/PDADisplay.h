//=================================================================================
// PDADisplay.h
// Interface file defining a concrete implementation of an observer to demonstrate
//	the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef PDADISPLAY_H
#define PDADISPLAY_H

#include "Observer.h"

class PDADisplay : public Observer
{
	private:
		double m_dTemperature;
		double m_dHumidity;
		double m_dPressure;

	public:
		PDADisplay();				// Default constructor
		~PDADisplay();				// destructor
		void update(Subject *s);	// Update the data being observed
};

#endif;