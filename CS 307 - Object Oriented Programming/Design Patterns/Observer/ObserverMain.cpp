//=============================================================
// ObserverMain.cpp
// A demonstration of the Observer design pattern in C++
// Author: Dr. Rick Coleman
//=============================================================
#include <string>
#include <iostream>
#include "WeatherData.h"
#include "PDADisplay.h"
#include "TVDisplay.h"
#include "GPSDisplay.h"
#include <time.h>

void main()
{
	WeatherData *wd = new WeatherData();

	// Add two PDADisplay observers
	PDADisplay *pda1 = new PDADisplay();
	PDADisplay *pda2 = new PDADisplay();
	// Add two TVDisplay obserevers
	TVDisplay *tv1 = new TVDisplay();
	TVDisplay *tv2 = new TVDisplay();
	// Add two GPSDisplay observers
	GPSDisplay *gps1 = new GPSDisplay();
	GPSDisplay *gps2 = new GPSDisplay();

	wd->registerObserver(pda1);
	wd->registerObserver(tv1);
	wd->registerObserver(gps1);
	wd->registerObserver(pda2);
	wd->registerObserver(tv2);
	wd->registerObserver(gps2);

	// Run a loop for 10 seconds
	time_t currentTime;
	time_t nextTime;
	int secCount = 15;

	time(&currentTime);
	nextTime = currentTime + 1;
	while(secCount >= 0)
	{
		time(&currentTime); // Get current time
		if(currentTime >= nextTime)
		{
			// Tell the WeatherData to fetch all data
			wd->getHumidity();
			wd->getPressure();
			wd->getTemperature();
			// Tell the WeatherData to notify all observers
			wd->notifyObservers();

			nextTime = currentTime + 1;
			secCount--;  // Decrement run time counter
			// Unsubscribe some observers
			switch(secCount)
			{
				case 1 : 
					cout << ">>>>>>>>> PDA 1 observer is unsubscribing <<<<<<<<<<\n";
					wd->removeObserver(pda1); 
					break;
				case 4 : 
					cout << ">>>>>>>>> TV 2 observer is unsubscribing <<<<<<<<<<\n";
					wd->removeObserver(tv2); 
					break;
				case 7 : 
					cout << ">>>>>>>>> GPS 1 observer is unsubscribing <<<<<<<<<<\n";
					wd->removeObserver(gps1); 
					break;
				case 10 : 
					cout << ">>>>>>>>> PDA 2 observer is unsubscribing <<<<<<<<<<\n";
					wd->removeObserver(pda2); 
					break;
				case 13 : 
					cout << ">>>>>>>>> GPS 2 observer is unsubscribing <<<<<<<<<<\n";
					wd->removeObserver(gps2); 
					break;
			}
		}
	}
}