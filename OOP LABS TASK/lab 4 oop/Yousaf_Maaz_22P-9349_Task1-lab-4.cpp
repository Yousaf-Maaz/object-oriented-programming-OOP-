/* Write a class name Account, having the data members name, and balance
(declared as private). The class should contains methods depositAmount()
and withdrawAmount(). They both will take the amount as an argument and
peforms the transactions by updating the balance. While withdrawing the
amount check if the amount is less than or equal to balance or not, and do
accordingly. The class should contain the getter and setter methods for both
the data members. Outside the class you must create a function named
createAccount(), that creates an object of a class initialize the values(using
setter methods of the class). And returns the object back to main. After that
you should perform the rest of the transactions. Your program should be
menu driven in a loop. Where the choices must be:
1. Display Balance
2. Deposit Amount
3. Withdraw Amount
4. Exit
*/
#include<iostream>
#include<string>
using namespace std;
class classAccount{

   float balance=0;
    string name;

public:
void setname(string n)
{
    name=n;
}
void setbalance(float b)
{
    balance=b;
}
void getname(string n)
{
    //cout<<"Enter your name:"<<;
    cin>>n;
}
void getbalance(float b )
{ 
    //cout<<"Enter the balance:";
    cin>>b ;
    
}
float display()
{
    return balance;
}
void depositAmount(float paise)
{
   balance=balance+paise;
   //cout<<"baalance is::"<<balance;
}
void withdrawAmount(float paise)
{   
    if (paise<=balance)
    {
        balance=balance-paise;
    cout<<"withdraw;;"<<balance;
}
else
{
    cout<<"Your balance is low sorry....";
    cout<<"I will capture your Atm  card I am very strick\n";
}
}
};
classAccount createAccount();
int main()
{
    classAccount a;
    float amount;

    a = createAccount();

    while (true) {
        cout<<"---------------------------------------------";
        cout << "\nDisplay menu" << endl;
        cout << "1. Display Balance" << endl;
        cout << "2. Deposit Amount" << endl;
        cout << "3. Withdraw Amount" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: " << a.display() << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                a.depositAmount(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                a.withdrawAmount(amount);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid input. Try again." << endl;
                break;
        }
    }

    return 0;
}

classAccount createAccount()
{ 
    classAccount data;
    string name;
    float bba;
     cout<<"Enter your name:";
     cin>>name;
     cout<<"Enter the balance ";
     cin>>bba;
     data.setname(name);
     data.setbalance(bba);


     return data;

}
