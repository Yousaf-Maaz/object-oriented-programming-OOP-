#include <iostream>
using namespace std;

class Boat
{
protected:
    int boatlength;

public:
    Boat(int boatlength = 0)
    {
        this->boatlength = boatlength;
    }

    void swim()
    {
        cout << "I am swimming";
    }
};

class Plane
{
protected:
    int maxaltitude; // corrected typo in variable name

public:
    Plane(int maxaltitude = 0)
    {
        this->maxaltitude = maxaltitude; // corrected typo in variable name and removed "|" character
    }

    void fly()
    {
        cout << "I am flying";
    }
};

class Skimmer : protected Boat, protected Plane
{ // corrected class name to start with a capital letter

    int numpassenger;
    string name;

public:
    Skimmer(string name, int numpassenger = 0, int boatlength = 0, int maxaltitude = 0)
        : Boat(boatlength), Plane(maxaltitude)
    {
        this->numpassenger = numpassenger;
        this->name = name;
    }

    void swimandfly()
    {
        swim();
        fly();
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Number of passengers: " << numpassenger << endl;
        cout << "Max altitude: " << maxaltitude << endl; // corrected variable name to match the declaration in the Plane class
        cout << "Boat length: " << boatlength << endl;   // corrected variable name to match the declaration in the Boat class
        swimandfly();
    }
};

int main()
{
    Skimmer s("Yousaf", 2, 40, 1300); // corrected class name to start with a capital letter and added quotes around the name argument
    s.display();
    return 0; // added return statement to end the main function
}
