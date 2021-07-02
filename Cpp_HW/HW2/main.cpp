//That stores the application, i.e. the main() method for the application.
#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include "Class.h" //Declare header files

using namespace std;

int main() {
    largest big; //object in class.h as big
    //function call
    big.input();
    big.max();
    big.display();
    return 0;
}