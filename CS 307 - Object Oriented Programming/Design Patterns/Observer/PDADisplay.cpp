//=================================================================================
// PDADisplay.cpp
// Implementation file defining a concrete implementation of an observer to 
//	demonstrate the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#include "PDADisplay.h"
#include <iostream>
#include "WeatherData.h"

using namespace std;
//---------------------------------------
// Default constructor
//---------------------------------------
PDADisplay::PDADisplay()
{
	m_dTemperature = 0.0;
	m_dHumidity = 0.0;
	m_dPressure = 0.0;
}

//---------------------------------------
// destructor
//---------------------------------------
PDADisplay::~PDADisplay()
{
}

//---------------------------------------
// Update the data being observed
//---------------------------------------
void PDADisplay::update(Subject *s)
{
	// Get the latest readings from the observer
	m_dTemperature = ((WeatherData *)s)->getTemperatureReading();
	m_dHumidity = ((WeatherData *)s)->getHumidityReading();
	m_dPressure = ((WeatherData *)s)->getPressureReading();

	// Output the results
	cout << "|--------------------------------------------------|\n";
	cout << "| PDADisplay shows readings of:                    |\n";
	cout << "|\tTemperature = " << m_dTemperature << "\t\t\t   |\n";
	cout << "|\tHumidity = " << m_dHumidity << "%\t\t\t\t   |\n";
	cout << "|\tPressure = " << m_dPressure << "mB\t\t\t   |\n";
	cout << "|--------------------------------------------------|\n\n";
}

