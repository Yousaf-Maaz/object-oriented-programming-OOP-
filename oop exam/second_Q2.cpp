#include <iostream>

#include <bits/stdc++.h>

using namespace std;

class Posts
{

    string title;
    string description;

public:
    Posts(string title = "", string description = "")
    {

        this->title = title;
        this->description = description;
    }
};

class userAccount
{
protected:
    string username;
    string password;
    Posts array[5];

public:
    userAccount(string u = "", string p = "")
    {
        username = u;
        password = p;
    }
    string getusername()
    {
        return username;
    }

    string getpassword()
    {
        return password;
    }

    void virtual displayinfo()
    {
        cout << "useername:" << username << "password" << password << endl;
    }
    void allposts()
    {

        for (int i = 0; i < 4; i++)
        {
            cout << "posts";
            // cout<<ab[i];
        }
    }

    void addpost()
    {

        cout << "Add post" << endl;
        for (int i = 0; i < 5; i++)
        {
            // cin>>array[i];
        }
    }
};

class PersonalAccount : public userAccount
{
    string gender;

public:
    PersonalAccount(string g = "", string u, string p) : userAccount(u, p)
    {
        gender = g;
    }
    void displayinfo()
    {
        displayinfo();
        cout << "Gender" << gender << endl;
    }
};

class Businessaccount : public userAccount
{
    string revenue;

public:
    Businessaccount(string r = "", string u, string p) : userAccount(u, p)
    {
        revenue = r;
    }
    void displayinfo()
    {
        displayinfo();
        cout << "Revenue" << revenue << endl;
    }
};

int main()
{
    userAccount *p = new PersonalAccount;
    userAccount *b = new Businessaccount;
    int choice;

    cout << "1.Add personal account:" << endl;
    cout << "2.Add business account:" << endl;
    cout << "3.exit:" << endl;

    cout << "Enter 1,2,3" << endl;
    cin >> choice;
    while (choice != 3)
    {

        if (choice == 1)
        {
            string name;
            cout << "Enter username:";
            cin >> name;
            string pass;
            cout << "Enter your passward:";
            cin >> pass;
            cout << "ADD posts" << endl;
            p->addpost();
            cout << "display";
            p->displayinfo();
        }
        else if (choice == 2)
        {
            cout << "Add post" << endl;
            b->addpost();
            cout << "Display" << endl;
            b->displayinfo();
        }

        else if (choice = 3)
        {
            return 0;
        }
    }

    p->allposts();
    b->allposts();

    return 0;
}
