#include<iostream>
using namespace std;
int main()
{
   int secs,hours,mins;;
   cout<<"Enter seconds:";
   cin>>secs;
   
  hours = secs/3600; //hour contain 3600.
	        
secs=secs%3600;
mins=secs/60;
secs=secs%60;
   
    cout<<hours<<"hours:"<<mins<<"minutes:"<<secs<<"seconds:";

    return 0;
	

}