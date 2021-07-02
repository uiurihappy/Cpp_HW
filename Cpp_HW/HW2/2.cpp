#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;

class calc { //class calc definition
	int n1, n2;
public:
	//method declare
	void get();
	void sum();
	void difference();
	void product();
	void division();
};

//inline function definition
inline void calc::get() {
	cout << "Enter first value: ";
	cin >> n1;
	cout << "Enter second value: ";
	cin >> n2;
}
inline void calc::sum() {
	cout << "Addition of two numbers: " << n1 + n2 << endl; //Add operation
}
inline void calc::difference() {
	cout << "Difference of two numbers: " << n1 - n2 << endl;
	//Sub operation
}
inline void calc::product() {
	cout << "Product of two numbers: " << n1 * n2 << endl;
	//Mutiply operation
}
inline void calc::division() {
	cout << "Division of two numbers: " << n1 / n2 << endl;
	//Division operation
}
int main() {
	calc obj1; //object as obj1;
	//function call
	obj1.get();
	obj1.sum();
	obj1.difference();
	obj1.product();
	obj1.division();

	return 0;
}