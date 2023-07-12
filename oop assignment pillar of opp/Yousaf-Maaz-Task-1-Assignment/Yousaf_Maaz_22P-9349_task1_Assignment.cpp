#include <iostream>
#include <string>
#include <bits/stdc++.h>//used because include all the libaries.
using namespace std;

class Zodiac {
private:
    string name;
    string description;
public:
   
       void genrateZodiacData(int day,int  month) 
       {
       {
        // Check the month and day to assign the corresponding zodiac sign name and description
        if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) 
        {
            name = "Aries";
            description = "Adventurous, energetic, courageous, and confident";
        } 
        else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
         {
            name = "Taurus";
            description = "Dependable, persistent, loyal, patient, and generous";
        } 
        else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) 
        {
            name = "Gemini";
            description = "Versatile, expressive, curious, and kind";
        } 
        else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) 
        {
            name = "Cancer";
            description = "Intuitive, sentimental, compassionate, and protective";
        } 
        else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) 
        {
            name = "Leo";
            description = "Charismatic, bold, self-confident, and creative";
        } 
        else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) 
        {
            name = "Virgo";
            description = "Practical, loyal, hardworking, and analytical";
        } 
        else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) 
        {
            name = "Libra";
            description = "Social, diplomatic, gracious, and fair-minded"; 
        } 
        else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        {
            name = "Scorpio";
            description = "Passionate, resourceful, mysterious, and loyal"; 
        } 
        else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        {
            name = "Sagittarius";
            description = "Optimistic, adventurous, honest, and enthusiastic"; 
        } 
        else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        {
            name = "Capricorn";
            description = "Ambitious, responsible, disciplined, and patient"; 
        } 
        else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) 
        {
            name = "Aquarius";
            description = "Innovative, original, independent, and humanitarian"; 
        } 
        else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) 
        {
            name = "Pisces";
            description = "Creative, empathetic, intuitive, and artistic"; 
        }
        else
        {
            cout<<"Invaild input\n";
            exit(0);
        
        }
    }
    
    
    }
    
    void displayPersonality() {
    cout << "Zodiac sign: " << name << endl;
       cout << "Personality traits: " << description << endl;
    }
    
    // Getters for name and description
    string getName() const 
    { 
        return name;
     }
    string getDescription() const 
    { 
        return description;
     }
};

class DateOfBirth {
private:
    int day;
    int month;
    int year;
    Zodiac zodiac;
public:
    DateOfBirth(int d, int m, int y) 
    {   
        day=d;
        month=m;
        year=y;
        zodiac.genrateZodiacData(day, month);
    }
    
    void displayDateOfBirth() const {
        cout << "Date of birth: " << day << "/" << month << "/" << year << endl;
    }
    
    void displayZodiacPersonality() 
 {
        zodiac.displayPersonality();
    }
};

class Person {
private:
    string name;
    DateOfBirth date_of_birth;
public:
    Person(string n, int d, int m, int y) :date_of_birth(d,m,y)  
    {
         name=n;
        // date_of_birth(d, m, y);
    }
    
    void displayZodiacInfo()  {
        cout << "Person's name: " << name << std::endl;
        date_of_birth.displayDateOfBirth();
        date_of_birth.displayZodiacPersonality();
    }
    
    // Getter for name
    string getName() const 
    {
         return name;
     }
};

int main() {
    string name;
    int Day,month,year;


    cout<<"Enter your name:\n";
    cin>>name;
    cout<<"Enter your date of birth\n";
    cout<<"Day:";
    cin>>Day;
    cout<<"Month:";
    cin>>month;
    cout<<"year:";
    cin>>year;
 // Create a Person object
    Person person(name, Day, month, year);
    
    // Display the person's name and zodiac information
    person.displayZodiacInfo();
    
    return 0;
}
