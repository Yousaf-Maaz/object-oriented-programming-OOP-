#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  float weight,height;
  cout<<"Enter the weight in kg and height in meters";
  cin>>weight>>height;
   
   float bmi=weight/(height*height);

   cout<<"The BMI is "<<setprecision(4)<<bmi;



    return 0;
}