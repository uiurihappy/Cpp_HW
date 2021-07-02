#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;

class largest {
    int num1, num2, num3;
public:
    largest(int x, int y, int z) {
        num1 = x;
        num2 = y;
        num3 = z;
    }
    
    int max();
    void display();
    void input();
};
inline void largest::input() { //input value
    cout << "Enter three number:";
    cin >> num1 >> num2 >> num3;
}
inline int largest::max() {
    //max value
    int max = num1;
    if (max < num2) {
        if (num2 > num3) {
            max = num2;
        }
        else {
            max = num3;
        }
    }
    else {
        if (max < num3) {
            max = num3;
        }
    }
    return max; //return value
}
inline void largest::display() {
    int large = max();
    cout << "Max number: " << large << endl; //output message
}

int main() {
    largest big(10, 30, 300); //parametrized contructor 3 arguments
    //function call
    big.display(); //(10,30, 300) argument output
    big.input(); //input value
    big.max(); // max
    big.display(); // Output the value you inputed
    return 0;
}