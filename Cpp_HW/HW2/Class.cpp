//That stores the method definitions for that class.
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include "Class.h" //Declare header files

using namespace std;

void largest::input() { 
    cout << "Enter three number: ";
    cin >> n1 >> n2 >> n3; //input value
}
int largest::max() {
    //max
    int max = n1;
    if (max < n2) {
        if (n2 > n3) {
            max = n2;
        }
        else {
            max = n3;
        }
    }
    else {
        if (max < n3) {
            max = n3;
        }
    }
    return max;
}
void largest::display() {
    cout << "Max number: " << max() << endl; //output message
}