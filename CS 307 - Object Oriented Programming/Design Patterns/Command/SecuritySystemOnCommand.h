//======================================================================
// SecuritySystemOnCommand.h
// Interface for a class demonstrating a concrete subclass of Command
//   demonstrating the Command Design Pattern
//======================================================================
#ifndef SECURITYSYSTEMONCOMMAND_H
#define SECURITYSYSTEMONCOMMAND_H

#include "Command.h"
#include "SecuritySystem.h"

class SecuritySystemOnCommand : public Command
{
   private:
      SecuritySystem *securitySys;
   public:
      SecuritySystemOnCommand(SecuritySystem *securitySys);
	  ~SecuritySystemOnCommand();
      void execute();
      void undo();
};

#endif