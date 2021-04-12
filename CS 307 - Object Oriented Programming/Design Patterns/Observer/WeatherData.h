//=================================================================================
// WeatherData.h
// Interface file defining weather data monitor as a subclass of Subject to 
//   demonstrate the Observer Design Pattern.
// Author: Dr. Rick Coleman
//=================================================================================
#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Subject.h"
#include <vector>

using namespace std;

class WeatherData : public Subject
{
	private:
		vector<Observer *>m_vObservers;// Vector of pointers to observer objects
		double m_dTemperature;
		double m_dHumidity;
		double m_dPressure;

	public:
		WeatherData();				// Class default constructor
		~WeatherData();				// Destructor
		void getTemperature();		// Fetch the temperature reading from a sensor
		void getHumidity();			// Fetch the humidity reading from a sensor
		void getPressure();			// Fetch the barametric pressure reading from a sensor

		// Functions called by observers to get data
		double getTemperatureReading();
		double getHumidityReading();
		double getPressureReading();

		// virtual functions inherited from Subject which WeatherData must implement
		virtual void registerObserver(Observer *obs);	// Add an observer
		virtual bool removeObserver(Observer *obs);		// Remove an observer
		virtual void notifyObservers();					// Notify all observers
		
};
#endif