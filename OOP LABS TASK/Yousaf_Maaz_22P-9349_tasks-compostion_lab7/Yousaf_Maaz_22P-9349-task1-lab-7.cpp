#include <iostream>
#include <string>
#include <cstring>

#include <bits/stdc++.h> //this an libaray I have seen in insta coding page. In this libaray all the header file are include I think so...

using namespace std;

// Contact management software..
// we have classes here in this problem
//  contact book
//  contact
//  DOB

class DoB
{

    int Day;
    int Month;
    int year;

public:
    // constructor
    DoB(int d = 0, int m = 0, int y = 0)
    {
        Day = m;
        Month = m;
        year = y;
    }

    // setter methods

    void setday(int D)

    {
        if (D > 0 && D < 32)
            this->Day = D;
        else
            this->Day = 0;
    }

    void setmonth(int M)

    {
        if (M > 0 && M < 13)
            this->Month = M;
        else
            this->Month = 0;
    }

    void setyear(int y)

    {
        if (y > 0 && y < 2024)
            this->year = y;
        else
            this->year = 0;
    }

    // getter methods

    int getday()

    {
        return Day;
    }

    int getmonth()

    {
        return Month;
    }

    int getyear()

    {
        return year;
    }
};

class Contact
{

    string name;
    string phone_no;
    string email;
    DoB Brithday; // compostion  a object.

public:
    // constructor...
    Contact(string n = "", string p = "", string e = "")
    {
        name = n;
        phone_no = p;
        email = e;
    }

    // setter methods

    void setname(string n)
    {
        this->name = n;
    }

    void setphoneno(string p)
    {
        this->phone_no = p;
    }

    void setemail(string e)
    {
        this->email = e;
    }
    void setbrithday(int d, int m, int y)
    {
        Brithday.setday(d);
        Brithday.setmonth(m);
        Brithday.setyear(y);
    }

    // getter methods

    string getname()
    {
        return name;
    }

    string getphone_no()
    {
        return phone_no;
    }

    string getemail()
    {
        return email;
    }

    // DoB getDoB()
    // {
    // //     //return to_string(Brithday.getday()) + "/" + to_string(Brithday.getmonth()) + "/" +
    // // to_string(Brithday.getyear());
    //              return Brithday;
    // }

    int get_d()
    {
        return Brithday.getday();
    }

    int get_m()
    {
        return Brithday.getmonth();
    }

    int get_y()
    {
        return Brithday.getyear();
    }
};

class contactBook
{

    Contact array_contacts[5];

public:
    void set__contactBook(int i, string n, string p, string e, int d, int m, int y)
    {
        array_contacts[i].setname(n);
        array_contacts[i].setphoneno(p);
        array_contacts[i].setemail(e);

        array_contacts[i].setbrithday(d, m, y);
    }

    string get_name(int i)
    {
        return array_contacts[i].getname();
    }

    string get_phone(int i)
    {
        return array_contacts[i].getphone_no();
    }

    string get_email(int i)
    {
        return array_contacts[i].getemail();
    }

    int get_day(int i)
    {
        return array_contacts[i].get_d();
    }

    int get_month(int i)
    {
        return array_contacts[i].get_m();
    }

    int get_year(int i)
    {
        return array_contacts[i].get_y();
    }

    // the one method which is mention in problem of printing all data
    void print_data()
    {
        cout << "\n-------------------------------------\n";
        cout << "This all the list of contacts:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "\n_____________________________________________\n";
            cout << "Name: " << array_contacts[i].getname() << endl;
            cout << "Number: " << array_contacts[i].getphone_no() << endl;
            cout << "Email: " << array_contacts[i].getemail() << endl;
            cout << "Date of birth: " << get_day(i) << "/" << get_month(i) << "/" << get_year(i) << endl
                 << endl;
        }
    }

    // the method of same month of brith..
    void print_same_monthofbrith(int m)
    {
        cout << "\n-------------------------------------\n";
        cout << "All those with the same month of brith\n";
        for (int i = 0; i < 5; i++)
        {
            if (array_contacts[i].get_m() == m)
                cout << array_contacts[i].getname() << endl;
        }
    }
};

int main()
{

    string n;
    string e;
    string Phone_no;
    int d;
    int m;
    int y;
    contactBook list;
    for (int i = 0; i < 5; i++)
    {
        cout << "\n-------------------------------------\n";
        cout << "Enter name: " << endl;
        cin >> n;
        cout << "Enter email: " << endl;
        cin >> e;
        cin.ignore();
        cout << "Enter number: " << endl;
        cin >> Phone_no;
        cout << "Enter day of your birth:" << endl;
        cin >> d;
        cout << "Enter month of your birth: " << endl;
        cin >> m;
        cout << "Enter year of your birth: " << endl;
        cin >> y;
        list.set__contactBook(i, n, Phone_no, e, d, m, y);
    }

    list.print_data();
    cout << "Enter the month which you want to find same month of brith of contacts:\n";
    cin >> m;
    list.print_same_monthofbrith(m);

    return 0;
}
