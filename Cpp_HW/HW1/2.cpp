#include<iostream>
using namespace std;

class student {
	//by default it is private
	string name;
	int student_ID;
public:
	void getdata(); //get data
	void putdata(); //put data
};

//define member function outside the class
void student::getdata() {
	cout << "Enter the name of student and his/her ID:";
	cin >> name >> student_ID; //input name and student_ID
}

//define member function outside the class
void student::putdata() {
	//output
	cout << "student name: " << name << endl;
	cout << "student ID: " << student_ID << endl;
}

int main() {
	student st; //Create object
	st.getdata(); //object call the function
	st.putdata(); //object call the function
	system("pause");
	return 0;
}