#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;

class largest { //class largest definition
	int n1, n2, n3;
public:
    //method declare
	void input();
	int max();
	void display();

};
//inline function
inline void largest::input() {
	cout << "Enter three number: ";
	cin >> n1 >> n2 >> n3;
}
inline int largest::max() {
	int max = n1;
    //max
    if (max < n2){
        if (n2 > n3){
            max = n2;
        }
        else{
            max = n3;
        }
    }
    else{
        if (max < n3){
            max = n3;
        }
    }
    return max; //return value
}
inline void largest::display() {
    cout << "Max number: " << max() << endl; //output message
}

int main() {
	largest big; //object as big
	big.input(); //input value
    big.max(); //max
	big.display(); //output value
	return 0;
}