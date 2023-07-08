
#include <iostream>
#include "classesheader.h"
using namespace std;

// Getter methods
int store::getterId()
{
    return id;
}
string store::gettertName()
{
    return name;
}
int store::getterPrice()
{
    return price;
}
int store::getterQuantity()
{
    return quantity;
}

// Setter methods
// capitals word is uesd for set the value.
void store::setterId(int ID)
{
    id = ID;
}
void store::setterName(string NAME)
{
    name = NAME;
}
void store::setterPrice(int PRICE)
{
    price = PRICE;
}
void store::setterQuantity(int QUANTITY)
{
    quantity = QUANTITY;
}

store ::store()
{
    id = 0;
    name = "";
    price = 0;
    quantity = 0;
}

void store ::display()
{
    cout << "ID: " << id << "\n";
    cout << "Name: " << name << "\n";
    cout << "Price: " << price << "\n";
    cout << "Quantity: " << quantity << "\n";
}

// Constructor with arguments
store ::store(int ID, string NAME, int PRICE, int QUANTITY)
{
    id = ID;
    name = NAME;
    price = PRICE;
    quantity = QUANTITY;
}

// Destructor
store::~store()
{
    cout << "Object   destroyed." << endl;
}

// functions
void display_items(store items[], int size)
{
    for (int i = 0; i < size; i++) // this loop will show all those item which is given by user.
    {
        cout << "-----------------------------------------------------------\n";
        cout << "Item " << i + 1 << ":"
             << "\n";
        items[i].display();
        cout << "\n";
    }
}

void update_items(store &i)
{
    int price;
    int quantity;
    int choice;
    cout << "-----------------------------------------------------------\n";
    cout << "What do you want to update:\n ";
    cout << "\n1.Price\n2.Quantity\n"
         << "\n";
    cout << "-----------------------------------------------------------\n";
    cout << "select 1 or 2:\n";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter new price:\n";
        cin >> price;
        i.setterPrice(price);
    }

    else if (choice == 2)
    {
        cout << "Enter new quantity:\n";
        cin >> quantity;
        i.setterQuantity(quantity);
    }
    else
    {
        cout << "Invalid input\n";
    }
}

void search_items(int id, int select, store items[])
{
    int findingSearch = 0;
    for (int i = 0; i < select; i++)
    {
        if (id == items[i].getterId())
        {
            cout << "-----------------------------------------------------------\n";
            display_items(items, id);
            findingSearch = 1;
        }
    }
    if (findingSearch == 0)
        cout << "The item not exist:"
             << "\n";
}
