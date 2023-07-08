
#include <string>
using std::string;

class store
{
    int id;
    string name;
    int price;
    int quantity;

public:
    // getter methods
    int getterId();
    string gettertName();
    int getterPrice();
    int getterQuantity();

    // setter methods
    void setterId(int ID);
    void setterName(string NAME);
    void setterPrice(int PRICE);
    void setterQuantity(int QUANTITY);

    // defualt constructor..
    store();

    // Display method for cout (console)

    void display();

    // constructor with aruguments.
    store(int ID, string NAME, int PRICE, int QUANTITY);

    // destructor
    ~store();
};

// functions declaration

void display_items(store items[], int size);
void update_items(store &i);
void search_items(int id, int select, store items[]);