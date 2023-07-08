#include <iostream>
#include <string>

using namespace std;

class Complex
{
    int real, imag;
    friend Complex addcomplex(Complex &, Complex &);

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

Complex addcomplex(Complex &c1, Complex &c2)

{
    Complex c3;
    c3.setnumber((c1.real + c2.real), (c1.imag + c2.imag));
    return c3;
}

int main()
{
    Complex c1, c2;
    c1.setnumber(1, 2);
    c1.display();

    c2.setnumber(10, 99);
    c2.display();

    return 0;
}