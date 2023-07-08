#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void passwordcheck(string password);//function
int main()
{
    string name;
    string  password;
    cout<<"Enter your name please:\n";
    //getline(cin,name);
    cin>>name;
    cout<<"\nEnter Your password:\n";
    passwordcheck(password);//as per instruction all the tasks done in function..
    return 0;
}
void passwordcheck(string password)
{
      while (password.length()<=8)
    {
       cout<<"pass must be 8 character long with at least 1 special symbol\n";
       cin>>password ;
        for(int i=0;i<password.length();i++)
        {
           if (password[i]=='%' || password[i]=='^' || password[i]=='!' || password[i]=='&' || password[i]=='*'  || password[i]=='$' || password[i]=='@' || password[i]=='#' || password[i]=='+' || password[i]=='?' )
           cout<<"Enter the old password again to display a secret message.\n";
        }
    }
    string againpass;
    cin>>againpass;
    if (password==againpass)
    {
        cout<<"You know what? You can be a great programmer. Keep Coding!";
    }
    else{
        cout<<"\n___________________________\n";
    cout<<"Oops Invaid input";
    }
    return;
}
    
 