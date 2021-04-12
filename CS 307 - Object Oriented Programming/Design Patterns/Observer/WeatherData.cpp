//=================================================================================
// WeatherData.cpp
// Implementation file defining weather data monitor as a subclass of Subject to 
//   demonstrate the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#include <stdlib.h>  // included for the rand and srand functions
#include <time.h>    // included to get the time as a random number seed
#include <iostream>
#include "WeatherData.h"
#include "Observer.h"

using namespace std;

//-------------------------------
// Class default constructor
//-------------------------------
WeatherData::WeatherData()
{
	srand((unsigned int)(time(NULL))); // Seed the random number generator
}

//-------------------------------
// Destructor
//-------------------------------
WeatherData::~WeatherData()
{
}
				
//------------------------------------------------------
// Fetch the temperature reading from a sensor
//------------------------------------------------------
void WeatherData::getTemperature()
{
	// Generate a random temperature between 60 and 90 degrees
	m_dTemperature = (double)((rand() % 30) + 60);
}
		
//------------------------------------------------------
// Fetch the humidity reading from a sensor
//------------------------------------------------------
void WeatherData::getHumidity()
{
	// Generate a random relative humidity between 0 and 100 percent
	m_dHumidity = (double)(rand() % 101);
}
			
//------------------------------------------------------
// Fetch the barametric pressure reading from a sensor
//------------------------------------------------------
void WeatherData::getPressure()
{
	// Generate a random barametric pressure between standard sea level
	//   pressure of 1013.25 millibars plus or minus 10%
	m_dPressure = (1013.25 - 101.325) + (double)(rand() % 202);
}

//------------------------------------------------------
// Pass the temperature reading to an observer
//------------------------------------------------------
double WeatherData::getTemperatureReading()
{
	return m_dTemperature;
}

//------------------------------------------------------
// Pass the humidity reading to an observer
//------------------------------------------------------
double WeatherData::getHumidityReading()
{
	return m_dHumidity;
}

//------------------------------------------------------
// Pass the pressure reading to an observer
//------------------------------------------------------
double WeatherData::getPressureReading()
{
	return m_dPressure;
}


//-------------------------------
// Add an observer
//-------------------------------
void WeatherData::registerObserver(Observer *obs)
{
	m_vObservers.push_back(obs);
	cout << "WeatherData reports new observer registered.\n";
}

//-------------------------------
// Remove an observer
//-------------------------------
bool WeatherData::removeObserver(Observer *obs)
{
	for(vector<Observer *>::iterator it = m_vObservers.begin(); it != m_vObservers.end(); it++)
	{
		if(obs == *it)
		{
			cout << "WeatherData reports observer removed.\n";
			m_vObservers.erase(it);
			return true;
		}
	}
	return false; // If we get here we didn't find the one to remove
}

//-------------------------------
// Notify all observers
//-------------------------------
void WeatherData::notifyObservers()
{
	for(vector<Observer *>::iterator it = m_vObservers.begin(); it != m_vObservers.end(); it++)
	{
		(*it)->update(this);
	}
}
