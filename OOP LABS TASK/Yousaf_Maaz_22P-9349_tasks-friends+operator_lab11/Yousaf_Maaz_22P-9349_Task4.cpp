#include <iostream>
#include <string>

using namespace std;

class Complex
{
    int real, imag;

public:
    void setnumber(int n1, int n2)
    {
        real = n1;
        imag = n2;
    }
    void display()
    {
        cout << "Your number is " << real << "+" << imag << "i" << endl;
    }

    Complex operator++()
    {
        // Overloaded unary operator for incremention..
        ++real;
        return *this;
    }

    Complex operator+(Complex &c)
    {
        // Overloaded binary operator + to add two objects....
        Complex c3;
        c3.real = real + c.real;
        c3.imag = imag + c.imag;
        return c3;
    }
};

int main()
{
    Complex c1, c2;
    c1.setnumber(9, 10);
    c1.display();

    c2.setnumber(8, 9);
    c2.display();

    // now
    ++c1;
    cout << "After adding of the object: ";
    c1.display();

    // now we use to add complex object using operator overload....
    Complex c3 = c1 + c2;
    cout << "Final Answer: ";
    c3.display();

    return 0;
}
