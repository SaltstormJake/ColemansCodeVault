//=================================================================================
// GPSDisplay.cpp
// Implementation file defining a concrete implementation of an observer to 
//	demonstrate the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#include "GPSDisplay.h"
#include <iostream>
#include "WeatherData.h"

using namespace std;
//---------------------------------------
// Default constructor
//---------------------------------------
GPSDisplay::GPSDisplay()
{
	m_dTemperature = 0.0;
	m_dHumidity = 0.0;
	m_dPressure = 0.0;
}

//---------------------------------------
// destructor
//---------------------------------------
GPSDisplay::~GPSDisplay()
{
}

//---------------------------------------
// Update the data being observed
//---------------------------------------
void GPSDisplay::update(Subject *s)
{
	// Get the latest readings from the observer
	m_dTemperature = ((WeatherData *)s)->getTemperatureReading();
	m_dHumidity = ((WeatherData *)s)->getHumidityReading();
	m_dPressure = ((WeatherData *)s)->getPressureReading();

	// Output the results
	cout << "         /----------\\\n";
	cout << "        / GPSDisplay \\\n";
	cout << "       /    shows     \\\n";
	cout << "      /  readings of:  \\\n";
	cout << "     | Temp.=" << m_dTemperature << "\t\t|\n";
	cout << "     | Hmd.=" << m_dHumidity << "%\t\t|\n";
	cout << "     | Pssr.=" << m_dPressure << "mB\t|\n";
	cout << "     \\__________________/\n\n";
}

