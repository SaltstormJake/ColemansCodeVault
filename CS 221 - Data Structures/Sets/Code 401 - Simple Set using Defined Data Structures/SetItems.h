//=================================================================== 
// File: SetItems.h 
// Purpose: Structures defining the types of items that can be added 
//           to a demonstration of a set class. 
// Author: Dr. Rick Coleman 
//=================================================================== 
#ifndef SETITEMS_H 
#define SETITEMS_H  
// Define a structure to use as a set item 
struct SetItem
 {
     int     itemType;   // Identify the type of item this is
     SetItem *next;
     void    *setMember; // pointer to the set member object
 };

// Define some constants for the data types 
#define INTEGER     0 
#define LONG        1 
#define FLOAT       2 
#define DOUBLE      3  
// Define a generic structurd type with key only 
struct KeyStruct
 {
     int     key;
 };  
// Define four structures as item types 
struct IntStruct
 {
     int     key;        // Unique key for this item type
     int     data;
 };  

struct LongStruct
 {
     int     key;        // Unique key for this item type
     long    data;
 };  

struct FloatStruct
 {
     int      key;        // Unique key for this item type
     float    data;
 };

  struct DoubleStruct
 {
     int      key;        // Unique key for this item type
     double   data;
 };

#endif 
