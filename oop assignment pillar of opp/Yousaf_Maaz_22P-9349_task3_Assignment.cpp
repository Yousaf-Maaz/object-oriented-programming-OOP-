#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Character {
public:
    string name;
    virtual void attack() 
    {
        
    }
};

class Warrior : public Character {
public:
    int strength;
    Warrior(string n, int s) {
        name = n;
        strength = s;
    }
    void attack() override {
        cout << name << " attacks with strength " << strength << endl;
    }
};

class Mage : public Character {
public:
    int intelligence;
    Mage(string n, int i) {
        name = n;
        intelligence = i;
    }
    void attack() override {
        cout << name << " attacks with fireballs using  intelligence " << intelligence << endl;
    }
};

class Thief : public Character {
public:
    int agility;
    Thief(string n, int a) {
        name = n;
        agility = a;
    }
    void attack() override {
        cout << name << " attacks with daggers using agility " << agility << endl;
    }
};

int main() {
    string warriorname;
    int strength;
    string  magename;
    int intelligence;
    string thiefname;
    int agility;
    cout << "---------------------------------------------\n";
    cout << "Enter the warrior name:" << endl;
    cin >> warriorname;
    cout << "---------------------------------------------\n";
    cout << "Enter the warrior strength:" << endl;
    cin >> strength;
    Character* w = new Warrior(warriorname, strength);

    cout << "---------------------------------------------\n";
    cout << "Enter the mage name:" << endl;
    cin >> magename;
    cout << "---------------------------------------------\n";
    cout << "Enter the mage intelligence:" << endl;
    cin >> intelligence;
    Character* m = new Mage(magename, intelligence);

    cout << "---------------------------------------------\n";
    cout << "Enter the thief name:" << endl;
    cin >> thiefname;
    cout << "---------------------------------------------\n";
    cout << "Enter the thief agility:" << endl;
    cin >> agility;
    Character* t = new Thief(thiefname, agility);

    cout << "---------------------------------------------\n";
    w->attack();
    m->attack();
    t->attack();
    cout << "---------------------------------------------\n";

    delete w;
    delete m;
    delete t;

    return 0;
}
