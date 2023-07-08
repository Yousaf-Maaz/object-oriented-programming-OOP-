#include<iostream>
#include<string>
using namespace std;

class Animal
{
protected:
    string name;
    string color;
public:
    Animal(string name="", string color="") {
        this->name = name;
        this->color = color;
    }

    virtual ~Animal() {
        cout << "Animal Object destroyed" << endl;
    }

    virtual void display() = 0;
};

class Deer : public Animal
{
    bool Antlers;

public:
    Deer(string name, string color, bool Antlers) : Animal(name, color) {
        this->Antlers = Antlers;
    }

    void display() {
        cout<<"-----------------------------------------\n";
        cout << "Deer Name: " << name << endl;
        cout << "Deer Color: " << color << endl;
         cout << "Antlers: " << Antlers << endl;
    }

    ~Deer() {
        cout<<"-----------------------------------\n";
        cout << "Deer Object destroyed" << endl;
    }
};

class Zebra : public Animal
{
    string stripe_pattern;

public:
    Zebra(string name, string color, string stripe_pattern="") : Animal(name, color) {
        this->stripe_pattern = stripe_pattern;
    }

    void display() {
        cout<<"-------------------------------------------\n";
        cout << "Zebra Name: " << name << endl;
        cout << "Zebra Color: " << color << endl;
        cout << "Stripe Pattern: " << stripe_pattern << endl;
    }

    ~Zebra() {
        cout << "Zebra Object destroyed" << endl;
    }
};

int main()
{
    Animal *a = new Deer("BBB", "color", true);
    a->display();

    Animal *b = new Zebra("CCC", "black", "circle");
    b->display();

    delete a;
    delete b;

    return 0;
}
