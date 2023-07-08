#include <iostream>
#include <string>

using namespace std;

class Complex
{
    int real, imag;
    friend Complex operator++(Complex &);
    friend Complex operator+(Complex &, Complex &);

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
};

Complex operator++(Complex &c)
{

    ++c.real;
    //++c.imag;
    return c;
}

Complex operator+(Complex &c1, Complex &c2)
{

    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main()
{
    Complex c1, c2;
    c1.setnumber(9, 10);
    c1.display();

    c2.setnumber(8, 9);
    c2.display();

    // now
    ++c1;
    cout << "After incremention of the object: ";
    c1.display();

    Complex c3 = c1 + c2;
    cout << "Final Answer: ";
    c3.display();

    return 0;
}
