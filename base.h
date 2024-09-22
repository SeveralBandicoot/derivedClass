//
// Created by adele on 9/13/2024.
//
#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <string>
using namespace std;

class base {
    protected:  
        string name;
        int age;
        string gender;
        double weight;
        double height;

    public:
        base(string N, int Age, string Gender, double W, double H) {
            name = N;
            age = Age;
            gender = Gender;
            weight = W;
            height = H;
        }

        //  virtual function
        virtual void print() const = 0; 
};

class pet : public base {
    public: 
        // Constructor for the pet class (needs to call the base class constructor)
        pet(string N, int Age, string Gender, double W, double H) : base(N, Age, Gender, W, H) {}

        // Override the print function
        virtual void print() const override {
            cout << "Pet Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Gender: " << gender << endl;
            cout << "Weight: " << weight << endl;
            cout << "Height: " << height << endl;
        }
};

// New Person class derived from base
class Person : public base {
    public:
        // Constructor for the Person class
        Person(string N, int Age, string Gender, double W, double H) : base(N, Age, Gender, W, H) {}

        // Override the print function
        virtual void print() const override {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Gender: " << gender << endl;
            cout << "Weight: " << weight << endl;
            cout << "Height: " << height << endl;
        }
};

#endif // BASE_H
