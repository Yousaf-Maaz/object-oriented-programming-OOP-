#include <iostream>
#include <string>
#include "classesheader.h"
using namespace std;

// main function to be started

int main()

{

  int size, selection;
  cout << "\n-----------------------------------------------------------\n";
  cout << "Enter the total number of items to store: ";
  cin >> size;
  store items[size]; // Create an array of Items of that size

  for (int i = 0; i < size; i++)
  {
    int id;
    string name;
    int price;
    int quantity;
    cout << "-----------------------------------------------------------\n";
    cout << "Enter details for item: " << i + 1 << "\n";
    cout << "ID: ";
    cin >> id;
    items[i].setterId(id);
    cout << "Name: ";
    cin >> name;
    items[i].setterName(name);
    cout << "PRICE:";
    cin >> price;
    items[i].setterPrice(price);
    cout << "QUANTITY:";
    cin >> quantity;
    items[i].setterQuantity(quantity);
  }

  cout << "-----------------------------------------------------------\n";

  int choice;

  while (choice != 0)

  {
    cout << "\n-----------------------------------------------------------\n";
    cout << "Menu:"
         << "\n";
    cout << "1. Display items"
         << "\n";
    cout << "2. Update item details"
         << "\n";
    cout << "3. Search for items by ID"
         << "\n";
    cout << "0. Exit"
         << "\n";
    cout << "-----------------------------------------------------------\n";

    cout << "Enter your choice: ";
    cin >> choice;
    cout << "\n";

    if (choice == 1)
    {
      display_items(items, size);
    }
    else if (choice == 2)
    {
      cout << "Enter item number you want update:\n";
      cin >> selection;
      update_items(items[selection - 1]);
    }
    else if (choice == 3)
    {
      cout << "Enter id for search:\n";
      cin >> selection;
      search_items(selection, size, items);
    }
    else
    {
      cout << "invaild input\n";
    }
  }

  return 0;
}
