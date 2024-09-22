#include <iostream>
#include "base.h" // Include the base header

using namespace std;

int main() {
    // Create a pet object with appropriate parameters
    pet myPet("Buddy", 3, "Male", 30.5, 0.75); // Example parameters
    myPet.print(); // Call the print method

    /*
    // Uncomment if you want to create base objects, but remember they can't be instantiated directly
    base* person1 = new base("Dani", 21, "Female", 140, 5.6);    
    base* person2 = new base("Abdur", 20, "Male", 160, 6.6);
    cout << "Person 1 details:" << endl;
    person1->print();
    cout << endl;
    cout << "Person 2 details:" << endl;
    person2->print();

    // Clean up
    delete person1;
    delete person2;
    */

    return 0;
}
