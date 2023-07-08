#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;

    Animal(string name = "", int age = 0)
    {
        this->name = name;
        this->age = age;
    }

    void speak()
    {
        // for inheritance
    }
};

class Bird : private Animal
{
private:
    int winglength;

public:
    Bird(string name = "", int age = 0, int winglength = 0) : Animal(name, age)
    {
        this->winglength = winglength;
    }
    void speak()
    {

        cout << "I am a bird, I can sing:" << endl;
        cout << "My name is :" << name << endl;
        cout << "MY age is:" << age << endl;
        cout << "Winglength:" << winglength << endl;
    }
};
class Repitle : private Animal
{
private:
    string Habitat;

public:
    Repitle(string Habitat = "", string name = "", int age = 0) : Animal(name, age)
    {
        this->Habitat = Habitat;
    }
    void speak()
    {
        cout << "I am a repilte\n I can creep creep....";
        cout << "My Habitat is :" << Habitat;
        cout << "Name of Repitle:" << name;
        cout << "Age of Repitle:" << age;
    }
};

int main()
{
    string name;
    int age;
    int winglength;
    cout << "Enter the name of Bird:";
    cin >> name;
    cout << "Enter the age plz:";
    cin >> age;
    cout << "Enter the winglength:";
    cin >> winglength;
    Bird b(name, age, winglength);
    b.speak();
    cin.ignore();

    cout << "Enter the name of repitle:";
    cin >> name;
    cout << "Enter the age plz;";
    cin >> age;
    string Habitat;
    cout << "Enter the Habitat:";
    cin >> Habitat;
    Repitle r(Habitat, name, age);
    r.speak();
}
