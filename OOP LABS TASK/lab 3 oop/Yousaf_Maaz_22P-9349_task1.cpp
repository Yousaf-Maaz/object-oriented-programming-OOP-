#include<iostream>
#include<string>
using namespace std;

struct moviedata
{
    string title; 
    string director;
    int yearreleased;
    
};
moviedata  createMovieData();

void displayMoviedata(moviedata a);

int main()
{
    moviedata store1,store2;
   store1= createMovieData();

   cout<<"\n";
   store2=createMovieData();
  
    displayMoviedata(store1);

    displayMoviedata(store2);

    return 0;

}
moviedata  createMovieData()
{
    moviedata a;
    cout<<"-----------------------------------------\n";
    cout<<"Enter the  movie tittle:\n";
    getline(cin,a.title);


    cout<<"-----------------------------------------\n";
    cout<<"Enter the  movie  director:\n";
    getline(cin,a.director);


    cout<<"-----------------------------------------\n";
    cout<<"Enter the first   released year\n";
    cin>>a.yearreleased;
      getchar();

    

    return a;

}
void displayMoviedata(moviedata a)
{

    cout<<"**********************************************\n";
    cout<<a.title;
    cout<<"\n";

     cout<<a.director;
   cout<<"\n";
    

     cout<<a.yearreleased;
    cout<<"\n";
    
    
    


}