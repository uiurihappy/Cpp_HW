#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;

class Arguments_Print { //class Arguments_Print definition
    int a, b;
public:
    //default constructor
    Arguments_Print();
    //parametrized constructor single argument
    Arguments_Print(int num);
    Arguments_Print(int x, int y);
    void display();
};
//default constructor
Arguments_Print::Arguments_Print() {
    a = 0;
    b = 0;
}
//parametrized constructor single argument
Arguments_Print::Arguments_Print(int num) {
    a = b = num;
}
//parametrized constructor single argument
Arguments_Print::Arguments_Print(int x, int y) {
    a = x;
    b = y;
}
void Arguments_Print::display() {
    cout << "Value of A = " << a << endl;
    cout << "Value of B = " << b << endl;
    cout << endl;
}
int main() {

    int a, b;
    cout << "Input value: ";
    cin >> a >> b; //input value

    Arguments_Print ap; //default argument
    Arguments_Print ap1(a); //1 argument
    Arguments_Print ap2(a, b); //2 argument
    //output message
    ap.display();
    ap1.display();
    ap2.display();

    return 0;
}