/*
Derived Class 1

(derivedClass.cpp/base.h was built upon Abdul Adeleye's base class program)

@ AJ Enrique Arguello

9/21/24

Objectives: 
- Find a Base class program from other students and create a Derived Class with new attributes and 1 matching Method( ) and then demonstrate using the Base Attributes but the derived virtual Method( ). 

  Create a .cpp File and create Objects from Both. Invoke the Methods 

New Concepts: virtual void, inheritance 
*/

#include <iostream>
#include "base.h" // Include the base header

using namespace std;

int main() {
    // Creates a pet object with appropriate parameters
    pet myPet("Buddy", 3, "Male", 30.5, 0.75);
    myPet.print(); // Calls the print method

    return 0;
}
