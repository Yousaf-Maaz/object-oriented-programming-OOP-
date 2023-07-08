#include<iostream>
using namespace std;
int main()
{ char burger,check;
int total=0;
cout<<"Hey I am usee360 do you want burger?Y?N\n";
cin>>burger;
if(burger=='Y' || burger=='y')
{
    cout<<"Do you want fries and cold drinks of RS 200. Y/N\n";
 cin>>check;
 if(check=='Y' || check=='y')
 {
 cout<<"Thank you you can pay 700";
 }
 else if(check=='N' || check=='n')
 {
    cout<<"No problem you can pay 500 only.";
 }
 

}
else if(burger=='N' || burger=='n')
{
    cout<<"No problem man Thank you.";
} 
 

 else
 cout<<"invaild input"; 




    return 0;
}
