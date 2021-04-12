//===================================================================
// File: SetObject.h
// Purpose: Parent class for objects that can be included in the set.
// Author: Dr. Rick Coleman
//===================================================================
#ifndef SETOBJECT_H
#define SETOBJECT_H

class SetObject
{
    protected:
        int          type;
        char      *description;
        int          key;

    public:
        SetObject *next;        // Pointer to next

        SetObject();            // Class constructors
        ~SetObject();            // Class destructor
        int getType();            // Return the type code
        char *getDesc();        // Return a copy of the description string
        int getKey();            // Return the key
        SetObject *copy();        // Copy the sub class object
        virtual void printData();// Print data in this object 
        (All subclasses must implement the virtual function.)

    protected:
        void setType(int type);        // Set the type.  Can only be called by subclasses
        void setDesc(char *desc);   // Set description. Can only be called by subclasses
        char *dupString(char *str); // Duplicate a character array using dynamic memory
};

#endif