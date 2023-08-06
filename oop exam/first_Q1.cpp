#include <iostream>
#include <bits/stdc++.h>
#include <string>
class Rectangle;
class Circle;

using namespace std;

class Shape
{
protected:
    float circlearea;
    float rectanglearea;
    float trianglearea;

public:
    virtual void calArea()
    {
    }
    virtual void Display()
    {
    }
    // Ma'am there is error come at the very end of time and i can't resolve that why i comment it.
    // friend Circle operator>(Rectangle &r)
};

class Circle : public Shape
{
    int radius;
    int circlearea; //

public:
    // friend Circle operator>(Rectangle &r)

    Circle(int radius = 0)
    {
        this->radius = radius;
    }

    void calArea()
    {
        circlearea = 3.14 * (radius * radius);
    }
    void Display()
    {

        cout << "Circle with radius:" << radius << endl;
        cout << "Area of circle is:" << circlearea << endl;
    }

    ~Circle()
    {

        cout << "Circle destory" << endl;
    }
};

class Rectangle : public Shape
{

    int width;
    int length;

public:
    // friend Circle operator>(Rectangle &r);

    Rectangle(int width = 0, int length = 0)
    {
        this->width = width;
        this->length = length;
    }

    void calArea()
    {
        rectanglearea = length * width;
    }

    void Display()
    {
        cout << "Rectangle with width:" << width << endl;
        cout << "Rectangle with length:" << length << endl;
        cout << "The area of Rectanle is:" << rectanglearea << endl;
    }

    ~Rectangle()
    {

        cout << "Rectangle destory" << endl;
    }
};
class Triangle : public Shape
{

    int base;
    int height;

public:
    Triangle(int base = 0, int height = 0)
    {
        this->base = base;
        this->height = height;
    }

    void calArea()
    {
        trianglearea = 0.5 * (base * height);
    }

    void Display()
    {
        cout << "Triangle with base:" << base << endl;
        cout << "Triangle with length:" << height << endl;
        cout << "The area of traiangle is:" << trianglearea << endl;
    }

    ~Triangle()
    {

        cout << "circle destory" << endl;
    }
};

// Circle operator>(Rectangle &r)

// {
//     //  if(cirlearea>retanglearea)
//     //  {
//     //     cout<<"circle with radius :"<<radius;
//     //     cout<<"is grater area than rectangle with width:"<<width<<"and length"<<length;

//     // //  }
//     //  else
//     //  cout<<"rectangle  area  greater than cirlce"<<endl;

// }

int main()
{
    Shape *c = new Circle(5);
    c->calArea();
    c->Display();

    Shape *r = new Rectangle(4, 6);
    r->calArea();
    r->Display();

    Shape *t = new Triangle(7, 3);
    t->calArea();
    t->Display();

    delete c;
    delete r;
    delete t;

    return 0;
}
