//======================================================================
// Command.h
// Interface class which serves as the parent of all subclasses
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef COMMAND_H
#define COMMAND_H

class Command
{
	public:
		Command();
		~Command();
		virtual void execute();		// Execute the command
};

#endif

