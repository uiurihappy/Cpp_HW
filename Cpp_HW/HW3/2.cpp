#pragma warning(disable : 4996)
#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

class Area { //declaration of Area class
public:
    double getArea(double w, double h) { 
        return w * h; //calculate Area
    }
};
class Perimeter { //declaration of Perimeter class
public:
    double getPerimeter(double w, double h) { 
        return (w + h) * 2; //calculate Perimeter
    }
};

class Rectangle : public Area, public Perimeter
{ //Area, Perimeter class multiple inheritance
    double w, h;
public:
    //input
    void getlength() {
        cout << "Enter the width and height: ";
        cin >> w >> h;
    }
    //output
    void show() {
        cout << "Area: " << getArea(w, h) << endl;      //Area
        cout << "Perimeter: " << getPerimeter(w, h) << endl; //Perimeter
    }
};
int main() {
    Rectangle obj; //declaration of class object

    //input
    obj.getlength();
    //output
    obj.show();
    return 0;
}
