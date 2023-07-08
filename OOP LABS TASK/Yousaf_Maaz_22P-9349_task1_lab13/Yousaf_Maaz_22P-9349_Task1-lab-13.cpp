#include <iostream>
#include <vector>
using namespace std;

class Item
{
public:
    string name;
    double price;

    Item(string name, double price)
    {
        this->name = name;
        this->price = price;
    }
};

class Cart
{
private:
    vector<Item> items;

public:
    void addItem(Item item)
    {
        items.push_back(item);
    }

    void removeItem(int index)
    {
        items.erase(items.begin() + index);
    }

    void clearCart()
    {
        items.clear();
    }

    void exchangeItem(int index, Item newItem)
    {
        items[index] = newItem;
    }

    bool isEmpty()
    {
        return items.empty();
    }

    void displayCart()
    {
        cout << "Cart: " << endl;
        for (int i = 0; i < items.size(); i++)
        {
            cout << i + 1 << ". " << items[i].name << " - Rs" << items[i].price << endl;
        }
    }
};

int main()
{
    Cart cart;
    vector<Item> products = {Item("jucie ", 150), Item("toffees ", 100), Item("football", 1050)};
    int choice;

    do
    {
        cout << "\n----------------------------------------------\n";
        cout << "Menu: " << endl;
        cout << "1. Add item" << endl;
        cout << "2. Remove item" << endl;
        cout << "3. Clear cart" << endl;
        cout << "4. Exchange item" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Products: " << endl;
            for (int i = 0; i < products.size(); i++)
            {
                cout << i + 1 << ". " << products[i].name << " - Rs -" << products[i].price << endl;
            }
            int productChoice;
            cout << "Enter the product number to add to the cart : ";
            cin >> productChoice;
            cart.addItem(products[productChoice - 1]);
            break;
        }
        case 2:
        {
            if (cart.isEmpty())
            {
                cout << "Your cart is empty. You cannot remove anything" << endl;
                break;
            }
            cart.displayCart();
            int itemChoice;
            cout << "Enter the item number to remove from the cart : ";
            cin >> itemChoice;
            cart.removeItem(itemChoice - 1);
            break;
        }
        case 3:
        {
            if (cart.isEmpty())
            {
                cout << "Your cart is empty. You cannot clear anything" << endl;
                break;
            }
            cart.clearCart();
            break;
        }
        case 4:
        {
            if (cart.isEmpty())
            {
                cout << "Your cart is empty. You cannot exchange anything" << endl;
                break;
            }
            cart.displayCart();
            int itemChoice;
            cout << "Enter the item number to exchange: ";
            cin >> itemChoice;

            cout << "Products: " << endl;
            for (int i = 0; i < products.size(); i++)
            {
                cout << i + 1 << ". " << products[i].name << " - $" << products[i].price << endl;
            }
            int productChoice;
            cout << "Enter the product number to exchange with: ";
            cin >> productChoice;

            cart.exchangeItem(itemChoice - 1, products[productChoice - 1]);
            break;
        }
        case 5:
        {
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (choice != 5);

    return 0;
}
