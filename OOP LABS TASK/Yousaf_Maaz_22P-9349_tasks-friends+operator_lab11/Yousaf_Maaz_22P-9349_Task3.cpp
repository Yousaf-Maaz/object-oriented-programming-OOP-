
#include <iostream>
using namespace std;

class Complex; // forward defination.

class Operations
{
public:
    Complex add(Complex &c1, Complex &c2);
    Complex sub(Complex &c1, Complex &c2);
};

class Complex
{
    int real, imag;
    friend class Operations;

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

Complex Operations::add(Complex &c1, Complex &c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

Complex Operations::sub(Complex &c1, Complex &c2)
{
    Complex c3;
    c3.real = c1.real - c2.real;
    c3.imag = c1.imag - c2.imag;
    return c3;
}

int main()
{
    Complex c1, c2;
    c1.setnumber(1, 2);
    c1.display();

    c2.setnumber(10, 99);
    c2.display();

    Operations op;
    Complex c3 = op.add(c1, c2);
    cout << "Addition result: ";
    c3.display();

    Complex c4 = op.sub(c1, c2);
    cout << "Subtraction result: ";
    c4.display();

    return 0;
}
