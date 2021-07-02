#include<iostream>
using namespace std;

class big {
	//by default it is private
	int n1, n2;
public:
	void input() { //input function definition
		cout << "Enter two number: ";
		cin >> n1 >> n2;
	}
	void largest() { //largest function definition
		cout << "largest number: " << ((n1 > n2) ? n1 : n2) << endl; //Output by comparison
	}
};

int main() {
	big b; // Create object
	b.input(); //object call the function
	b.largest(); //object call the function
	system("pause");
	return 0;
}