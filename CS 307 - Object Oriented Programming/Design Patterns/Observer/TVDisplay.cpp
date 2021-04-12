//=================================================================================
// TVDisplay.cpp
// Implementation file defining a concrete implementation of an observer to 
//	demonstrate the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#include "TVDisplay.h"
#include <iostream>
#include "WeatherData.h"

using namespace std;
//---------------------------------------
// Default constructor
//---------------------------------------
TVDisplay::TVDisplay()
{
	m_dTemperature = 0.0;
	m_dHumidity = 0.0;
	m_dPressure = 0.0;
}

//---------------------------------------
// destructor
//---------------------------------------
TVDisplay::~TVDisplay()
{
}

//---------------------------------------
// Update the data being observed
//---------------------------------------
void TVDisplay::update(Subject *s)
{
	// Get the latest readings from the observer
	m_dTemperature = ((WeatherData *)s)->getTemperatureReading();
	m_dHumidity = ((WeatherData *)s)->getHumidityReading();
	m_dPressure = ((WeatherData *)s)->getPressureReading();

	// Output the results
	cout << "                        o      o\n";
	cout << "                         \\    /\n";
	cout << "                          \\  /\n";
	cout << "                           \\/\n";
	cout << " /-----------------------------------------------------\\\n";
	cout << "| The TV weather report for today shows a current      |\n";
	cout << "|   temperature reading of " << m_dTemperature << ".\t\t\t       |\n";
	cout << "|   The Humidity is " << m_dHumidity << "%,\t\t\t       |\n";
	cout << "|   and the barametric pressure is " << m_dPressure << "mB\t       |\n";
	cout << "| Stay tuned for more after a word from our sponsor... |\n";
	cout << " \\-----------------------------------------------------/\n";
	cout << " |      O               [==========]               O   |\n";
	cout << " \\-----------------------------------------------------/\n\n";
}

