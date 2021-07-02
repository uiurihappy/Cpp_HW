#pragma warning(disable : 4996)
#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;
//Forward declaration of test2
class test2;
class test1
{ //declaration of test1
    int len;
    char str[101];

public:
    void getA()
    {
        cout << "Enter str1: ";
        cin >> str;
    }
    //Friend to both classes
    friend void operator>(test1, test2);
};
class test2
{ //declaration of test2
    char str[101];

public:
    void getB()
    {
        cout << "Enter str2: ";
        cin >> str;
    }
    //Friend to both classes
    friend void operator>(test1, test2);
};
//declaration of operator >
void operator>(test1 t1, test2 t2)
{
    //using the strlen() function
    if (strlen(t1.str) < strlen(t2.str))
    {
        cout << "Greater string: " << t2.str << endl;
    }
    else if (strlen(t1.str) > strlen(t2.str))
    {
        cout << "Greater string: " << t1.str << endl;
    }
    else
    {
        cout << "string length same!!" << endl;
        cout << "str1: " << t1.str << " str2: " << t2.str << endl;
    }
}
int main()
{
    //declaration of class object
    test1 t1;
    test2 t2;
    //get function
    t1.getA();
    t2.getB();
    //operator >
    t1 > t2;
}
