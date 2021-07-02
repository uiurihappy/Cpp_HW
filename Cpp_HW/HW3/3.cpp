#pragma warning(disable : 4996)
#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

class shape
{ //declaration of shape class
protected:
    double h, w;

public:
    void setValues(double height, double width)
    { //set Values(height, width)
        h = height;
        w = width;
    }
    double getHeight()
    { //get height
        return h;
    }
    double getWidth()
    { //get width
        return w;
    }
};
//Define two classes rectangle and triangle that inherit those features from class shape.
class Rectangle : public shape
{
public:
    //Calculate and return area of rectangle
    double getArea()
    {
        return h * w; //Rectangle Area
    }
};
class Triangle : public shape
{
public:
    //Calculate and return area of triangle
    double getArea()
    {
        return h * w / 2; //Triangle Area
    }
};
int main()
{
    //declaration of class object;
    Rectangle rect;
    Triangle tri;
    //valid and allows us to access the members of their pointed objects
    shape *r = &rect;
    shape *t = &tri;

    //set data in object
    r->setValues(5.0, 10.0);
    t->setValues(5.0, 10.0);
    //output
    cout << "Area of rectangle: " << rect.getArea() << endl;
    cout << "Area of triangle: " << tri.getArea() << endl;
}
