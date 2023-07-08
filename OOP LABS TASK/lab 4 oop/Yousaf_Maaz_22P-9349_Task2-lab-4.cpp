#include<iostream>
#include<cstdlib>
#include<string>
#include<time.h>
using namespace std;

class Dice {
private:
    int value;

public:
    Dice() {
        value = 0;
    }//constructor.

    void roll() 
    {
        int random = (rand() % 6) + 1;
        value = random;

        if (value == 6) {
            cout << "Chakkaaaa" << endl;
        }
        else if (value == 5) {
            cout << "Good one" << endl;
        }
        else if (value == 4) {
            cout << "good" << endl;
        }
        else if (value == 3) {
            cout << "Better next time " << endl;
        }
        else if (value == 2) {
            cout << "not good" << endl;
        }
        else {
            cout << "oops" << endl;
        }
    }

    int getValue() {
        return value;
    }

    void setValue(int newValue) {
        value = newValue;
    }
};

int main() {
    srand(time(0));
    Dice dice;
    char check = 'y';

    while (check == 'y' || check == 'Y') {
        cout<<"---------------------------------------------------\n";
        cout << "Do you want to roll the dice? (Y/N): ";
        cin >> check;
        if (check == 'Y' || check == 'y') {
            dice.roll();
            cout << "Current dice value: " << dice.getValue() << endl;
        }
        else {
            cout << "See you next time!" << endl;
        }
    }
    return 0;
}