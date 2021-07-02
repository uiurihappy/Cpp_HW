#include<iostream>
using namespace std;
class student {
	//by default it is private
	string name;
	int student_ID, number;
public:
	void getdata(); //get data
	void putdata(); //put data
};
//define member function outside the class
void student::getdata() {
	// input/output student_number
	cout << "student:";
	cin >> number;
	// input/output name
	cout << "Name:";
	cin >> name;
	// input/output student_ID
	cout << "ID:";
	cin >> student_ID;
}
//define member function outside the class
void student::putdata() { 
	//output
	cout << "Student:" << number << endl;
	cout << "Name:" << name << endl;
	cout << "Student ID:" << student_ID << endl;
}

int main() {
	student st[5]; //Create Array object
	for (int i = 0; i < 5; i++) //Call the getdata function to input five times over.
		st[i].getdata();

	cout << "\n****Output****" << endl;

	for (int i = 0; i < 5; i++) //Call the getdata function to output five times over.
		st[i].putdata();

	system("pause");
	return 0;
}