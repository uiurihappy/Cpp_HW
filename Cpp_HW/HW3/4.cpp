#pragma warning(disable : 4996)
#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

class animal
{ //declaration of animal class
protected:
    char name[101];
    int age;

public:
    void setdata(char b[101])
    { //using the strcat() function
        strcat(name, b);
    }
    void getdata()
    { //get data
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};
//, create two derived classes Zebra and Dolphin from class animal
class Zebra : public animal
{
public:
    //output
    void message_zebra()
    {
        cout << "The zebra name: " << name << endl;
        cout << "The zebra age: " << age << endl;
    }
};
class Dolphin : public animal
{
public:
    //output
    void message_dolphin()
    {
        cout << "The dolphin name: " << name << endl;
        cout << "The dolphin age: " << age << endl;
    }
};

int main()
{
    //declaration of class object
    Zebra z;
    Dolphin d;

    //information
    char origin1[101] = " origin: Africa";
    char origin2[101] = " origin: NewZeland";
    //get data
    cout << "Zebra" << endl;
    z.getdata();
    cout << "Dolphin" << endl;
    d.getdata();
    //extra information
    z.setdata(origin1);
    d.setdata(origin2);
    //output
    z.message_zebra();
    d.message_dolphin();

    return 0;
}
