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

void displayall(Animal *s[])
{
cout<<"\nDisplay all of classes "<<endl;
for(int i=0; i<2; i++)
{
s[i]->display();
}
}
int main()
{
Animal *a[2];
a[0]=new Deer("BBB", "color", true);
a[1]=new Zebra("CCC", "black", "circle");
cout<<"Displaying in main"<<endl;
for(int i=0; i<2; i++)
{
a[i]->display();
}
displayall(a);
for (int  i = 0; i < 2; i++)
{
    delete a[i];
    a[i]=NULL;
}


return 0;
}