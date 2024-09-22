/*
Derived Class 1

Author: Abdur Adeleye

@ AJ Enrique Arguello

9/21/24

Objectives: 
- Find a Base class program from other students and create a Derived Class with new attributes and 1 matching Method( ) and then demonstrate using the Base Attributes but the derived virtual Method( ). 

  Create a .cpp File and create Objects from Both. Invoke the Methods 

New Concepts: virtual void, inheritance 
*/

#include <iostream>
#include "base.h" 

using namespace std;

int main() {
    // creates person objects (revised)
    Person person1("Dani", 21, "Female", 140, 5.6);
    Person person2("Abdur", 20, "Male", 160, 6.6);
    
    cout << "Person 1 details:" << endl;
    person1.print(); // calls the print method for person1
    cout << endl;
    
    cout << "Person 2 details:" << endl;
    person2.print(); // Calls the print method for person2
    cout << endl;

    // Creates a pet object with appropriate parameters
    pet myPet("Buddy", 3, "Male", 30.5, 0.75);
    myPet.print(); // Calls the print method for myPet

    return 0;
}
