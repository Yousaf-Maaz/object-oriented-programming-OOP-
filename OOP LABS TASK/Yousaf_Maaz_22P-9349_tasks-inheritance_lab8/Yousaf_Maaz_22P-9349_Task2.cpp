#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

// base class..
class Employee
{
    string name;
    float salary;

public:
    // constructor
    Employee(string name, float salary)
    {
        this->name = name;
        this->salary = salary;
    }
    // setters
    void setname(string n)
    {
        name = n;
    }
    void setsalary(float s)
    {
        salary = s;
    }
    // getters
    string getname()
    {
        return name;
    }
    float getsalary()
    {
        return salary;
    }
    float calcSalary() // due to inheritance
    {
        // just for implementation...
    }
};

// derived class or child class 1

class HourlyEmployee : public Employee
{
    float hourlyRate;
    float hoursWorked;

public:
    // constructor hint inheritance
    HourlyEmployee(float hourlyRate, float hoursWorked, string name, float salary) : Employee(name, salary)
    {
        this->hourlyRate = hourlyRate;
        this->hoursWorked = hoursWorked;
    }
    // setter
    void sethour_rate(float hr)
    {
        hourlyRate = hr;
    }

    void sethour_worked(float Wr)
    {
        hoursWorked = Wr;
    }

    // getter
    float gethour_rate()
    {
        return hourlyRate;
    }

    float gethour_worked()
    {
        return hoursWorked;
    }

    // method for calculation
    float calcSalary()
    {

        return hourlyRate * hoursWorked;
    }
};

// derived or chlid class 2
class SalariedEmployee : public Employee
{

private:
    float annualSalary;

public:
    // constructor
    SalariedEmployee(float annualSalary, string name, float salary) : Employee(name, salary)
    {
        this->annualSalary = annualSalary;
    }

    // getter
    float getAnnualSalary()
    {

        return annualSalary;
    }

    // setter
    void setAnnualSalary(float Annual)
    {
        annualSalary = Annual;
    }

    float calcSalary()
    {
        return annualSalary / 12;
    }
};

// main function
int main()
{
    string name;
    float hourlyRate;
    float hoursWorked;
    float Annaulsalary;

    cout << "****************************************************\n";
    cout << "Enter Hourly employee name: ";
    cin >> name;
    cout << "Enter Hourly rate: ";
    cin >> hourlyRate;
    cout << "Enter Hours worked: ";
    cin >> hoursWorked;

    HourlyEmployee e(hourlyRate, hoursWorked, name, 0);
    e.setname(name);
    e.sethour_rate(hourlyRate);
    e.sethour_worked(hoursWorked);
    cout << "-------------------------------------------------\n";
    cout << "Hourly Employee Details:\n";
    cout << "Employee name: " << e.getname() << endl;
    cout << "Hourly Employee Salary: " << e.calcSalary() << endl;

    cout << "___________________________________________________\n";
    cout << "Enter salaried employee name:";
    cin >> name;
    cout << "Enter annual salary:";
    cin >> Annaulsalary;

    SalariedEmployee emp(Annaulsalary, name, 0);
    emp.setname(name);
    emp.setAnnualSalary(Annaulsalary);

    cout << "-------------------------------------------------\n";
    cout << "Salaried Employee Details:\n";

    cout << "Name:" << emp.getname() << endl;
    cout << "Annual Salary:" << emp.getAnnualSalary() << endl;
    cout << "Slaried Employee Salary:" << emp.calcSalary() << endl;

    cout << "****************************************************\n";

    return 0;
}
