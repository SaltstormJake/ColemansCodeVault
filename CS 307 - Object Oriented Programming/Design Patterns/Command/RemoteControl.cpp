//=============================================================================
// RemoteControl.h
// Implementation for a class demonstrating a controller class which executes
//   commands demonstrating the Command Design Pattern
//=============================================================================
#include "RemoteControl.h"
#include <iostream>

using namespace std;

//--------------------------------
// Default constructor
//--------------------------------
RemoteControl::RemoteControl()
{
	// Initialize all pointers to NULL
	for(int i=0; i<7; i++)
	{
		onCommands[i] = NULL;
		offCommands[i] = NULL;
		buttonStates[i] = 0; // All off
	}
	undoCommand = NULL;
	undoSlot = -1;
}

//--------------------------------
// Destructor
//--------------------------------
RemoteControl::~RemoteControl()
{
	// Destroy all commands
	for(int i=0; i<7; i++)
	{
		if(onCommands[i] != NULL)
			delete onCommands[i];
		if(offCommands[i] != NULL)
			delete offCommands[i];
	}
}

//--------------------------------
// Set an on and off command
// Args: Slot - slot number, dec 
//    by 1 to get index in array
//--------------------------------
void RemoteControl::setCommand(int slot, Command *onCommand, Command *offCommand)
{
	onCommands[slot-1] = onCommand;
	offCommands[slot-1] = offCommand;
}

//--------------------------------
// Execute an on command
// Args: Slot - slot number, dec 
//    by 1 to get index in array
//--------------------------------
void RemoteControl::onButtonPushed(int slot)
{
	if(onCommands[slot-1] != NULL)
	{
		onCommands[slot-1]->execute();
		undoCommand = offCommands[slot-1]; // Set appropriate undo command
		undoSlot = slot - 1;
		buttonStates[slot-1] = 1;
	}
}

//--------------------------------
// Execute an off command
// Args: Slot - slot number, dec 
//    by 1 to get index in array
//--------------------------------
void RemoteControl::offButtonPushed(int slot)
{
	if(offCommands[slot-1] != NULL)
	{
		offCommands[slot-1]->execute();
		undoCommand = onCommands[slot-1]; // Set appropriate undo command
		undoSlot = slot - 1;
		buttonStates[slot-1] = 0;
	}
}

//--------------------------------
// Execute an undo command
//--------------------------------
void RemoteControl::undoButtonPushed()
{
	if(undoCommand != NULL)
		undoCommand->execute();
	// The next code is just for the display and really
	//   has nothing to do with the Command Design Pattern
	buttonStates[undoSlot] = (buttonStates[undoSlot] == 0) ? 1 : 0;
}

//--------------------------------
// Just give us something to see
//--------------------------------
void RemoteControl::drawRemoteControl()
{
	cout << "+---------------------------+" << endl;
	cout << "|    Auto-Home Controller   |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|               ON   OFF    |" << endl;
	cout << "| Slot 1        _     _     |" << endl;
	if(buttonStates[0] == 0)
		cout << "|   Light      |_|   |0|    |" << endl;
	else
		cout << "|   Light      |0|   |_|    |" << endl;
	cout << "| Slot 2        _     _     |" << endl;
	if(buttonStates[1] == 0)
		cout << "|   Stereo     |_|   |0|    |" << endl;
	else
		cout << "|   Stereo     |0|   |_|    |" << endl;
	cout << "| Slot 3        _     _     |" << endl;
	if(buttonStates[2] == 0)
		cout << "|   Coffee Pot |_|   |0|    |" << endl;
	else
		cout << "|   Coffee Pot |0|   |_|    |" << endl;
	cout << "| Slot 4        _     _     |" << endl;
	if(buttonStates[3] == 0)
		cout << "|   Hot tub    |_|   |0|    |" << endl;
	else
		cout << "|   Hot tub    |0|   |_|    |" << endl;
	cout << "| Slot 5        _     _     |" << endl;
	if(buttonStates[4] == 0)
		cout << "|   Sprinkler  |_|   |0|    |" << endl;
	else
		cout << "|   Sprinkler  |0|   |_|    |" << endl;
	cout << "| Slot 6        _     _     |" << endl;
	if(buttonStates[5] == 0)
		cout << "|   TV         |_|   |0|    |" << endl;
	else
		cout << "|   TV         |0|   |_|    |" << endl;
	cout << "| Slot 7        _     _     |" << endl;
	if(buttonStates[6] == 0)
		cout << "|   Security   |_|   |0|    |" << endl;
	else
		cout << "|   Security   |0|   |_|    |" << endl;
	cout << "|                  _        |" << endl;
	cout << "|         UNDO    |_|       |" << endl;
	cout << "|                           |" << endl;
	cout << "+---------------------------+" << endl;
}
	
