//======================================================================
// SecuritySystemOffCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef SECURITYSYSTEMOFFCOMMAND_H
#define SECURITYSYSTEMOFFCOMMAND_H

#include "Command.h"
#include "SecuritySystem.h"

class SecuritySystemOffCommand : public Command
{
   private:
      SecuritySystem *securitySys;
   public:
      SecuritySystemOffCommand(SecuritySystem *securitySys);
	  ~SecuritySystemOffCommand();
      void execute();
      void undo();
};

#endif