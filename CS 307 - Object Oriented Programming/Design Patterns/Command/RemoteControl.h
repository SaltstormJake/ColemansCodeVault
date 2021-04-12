//======================================================================
// RemoteControl.h
// Interface for a class demonstrating a controller class which executes
//   commands demonstrating the Command Design Pattern
//======================================================================
#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "Command.h"

class RemoteControl
{
	private:
		Command *onCommands[7];  // Array of pointers to on Commands
		Command *offCommands[7]; // Array of pointers to off Commands
		Command *undoCommand;    // Pointer to single undo command
		int buttonStates[7];     // 0 = off, 1 = on.  Just for a cute display
		int undoSlot;			 // Just for the cute display

	public:
		RemoteControl();
		~RemoteControl();
		void setCommand(int slot,
			Command *onCommand,
			Command *offCommand);
		void onButtonPushed(int slot);
		void offButtonPushed(int slot);
		void undoButtonPushed();
		void drawRemoteControl();	// Just give us something to see
};

#endif