//========================================================================
// CommandMain.cpp
// A demonstration of the Command Design Pattern.
// Author: Dr. Rick Coleman
//========================================================================
#include "RemoteControl.h"
// Lights
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
// Stereo
#include "Stereo.h"
#include "StereoOnCommand.h"
#include "StereoOffCommand.h"
// Coffee Pot
#include "CoffeePot.h"
#include "CoffeePotOnCommand.h"
#include "CoffeePotOffCommand.h"
// Hot tub
#include "Hottub.h"
#include "HottubOnCommand.h"
#include "HottubOffCommand.h"
// Sprinkler
#include "Sprinkler.h"
#include "SprinklerOnCommand.h"
#include "SprinklerOffCommand.h"
// TV
#include "TV.h"
#include "TVOnCommand.h"
#include "TVOffCommand.h"
// Security System
#include "SecuritySystem.h"
#include "SecuritySystemOnCommand.h"
#include "SecuritySystemOffCommand.h"

#include <iostream>

using namespace std;

void main()
{
	bool done = false;
	int slot, ans;
	Light *light;
	Stereo *stereo;
	CoffeePot *coffeePot;
	Hottub *hottub;
	Sprinkler *sprinkler;
	TV *tv;
	SecuritySystem *securitySys;

	cout << "Creating a Remote Control object.\n";
	RemoteControl *rc = new RemoteControl();
	cout << "Creating a Light object and its two Command objects for slot 1.\n";
	light = new Light();
	rc->setCommand(1, new LightOnCommand(light), new LightOffCommand(light));
	cout << "Creating a Stereo object and its two Command objects for slot 2.\n";
	stereo = new Stereo();
	rc->setCommand(2, new StereoOnCommand(stereo), new StereoOffCommand(stereo));
	cout << "Creating a CoffeePot object and its two Command objects for slot 3.\n";
	coffeePot = new CoffeePot();
	rc->setCommand(3, new CoffeePotOnCommand(coffeePot), new CoffeePotOffCommand(coffeePot));
	cout << "Creating a Hottub object and its two Command objects for slot 4.\n";
	hottub = new Hottub();
	rc->setCommand(4, new HottubOnCommand(hottub), new HottubOffCommand(hottub));
	cout << "Creating a Sprinkler object and its two Command objects for slot 5.\n";
	sprinkler = new Sprinkler();
	rc->setCommand(5, new SprinklerOnCommand(sprinkler), new SprinklerOffCommand(sprinkler));
	cout << "Creating a TV object and its two Command objects for slot 6.\n";
	tv = new TV();
	rc->setCommand(6, new TVOnCommand(tv), new TVOffCommand(tv));
	cout << "Creating a SecuritySystem object and its two Command objects for slot 7.\n";
	securitySys = new SecuritySystem();
	rc->setCommand(7, new SecuritySystemOnCommand(securitySys), new SecuritySystemOffCommand(securitySys));

	rc->drawRemoteControl();
	while(!done)
	{
		cout << "Enter a slot number to toggle a command (0 for undo, -1 to quit)\n";
		cout << "Your choice: ";
		cin >> slot;
		if(slot < 0) done = true;
		else if(slot == 0) 
		{
			rc->undoButtonPushed();
			rc->drawRemoteControl();
		}
		else
		{
			cout << "Push the ON (1) or OFF (2) button?\n";
			cout << "Your choice: ";
			cin >> ans;
			if(ans == 1) rc->onButtonPushed(slot);
			else if(ans == 2) rc->offButtonPushed(slot);
			else
				cout << "Invalid input. Try again...\n\n";
			rc->drawRemoteControl();
		}
	}
}
