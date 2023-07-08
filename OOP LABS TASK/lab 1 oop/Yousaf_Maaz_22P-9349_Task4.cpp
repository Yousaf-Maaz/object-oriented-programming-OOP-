#include<iostream>
using namespace std;
int main()
{
    int limit;
    cout<<"enter how many  lines do you want ";
    cin>>limit;
    
    for(int i=0;i<limit-1;i++)
    {
    
        for(int j=0;j<=i;j++)
    cout<<"*";
    cout<<endl;
    }

    for(int i=limit;i>0;i--)
    {
    
        for(int j=i;j>0;j--)
    cout<<"*";
    cout<<endl;
    }
    

    return 0;

}