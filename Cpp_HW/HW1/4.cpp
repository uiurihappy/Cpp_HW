#include<iostream>
using namespace std;
class student {
	//by default it is private
	string name;
	int student_ID, s1, s2, s3, s4;
	float per;
public:
	void get_details(); //get_details
	void put_details(); //put_details
};

//define member function outside the class
void student::get_details() {
	// input/output name
	cout << "Name: ";
	cin >> name;
	// input/output student_ID
	cout << "ID: ";
	cin >> student_ID;
	// input/output s1
	cout << "Subject1: ";
	cin >> s1;
	// input/output s2
	cout << "Subject2: ";
	cin >> s2;
	// input/output s3
	cout << "Subject3: ";
	cin >> s3;
	// input/output s4
	cout << "Subject4: ";
	cin >> s4;
}
//define member function outside the class
void student::put_details() {
	//output
	cout << "Name: " << name << endl;
	cout << "ID: " << student_ID << endl;
	cout << "Subject1: " << s1 << endl;
	cout << "Subject2: " << s2 << endl;
	cout << "Subject3: " << s3 << endl;
	cout << "Subject4: " << s4 << endl;
	per = ((double)(s1 + s2 + s3 + s4) / 400.0) * 100; //percentage as float type
	cout << "Total Percentage: " << per << "%" <<endl;
}

int main() {
	student st; //Create object
	st.get_details(); //object call the function
	st.put_details(); //object call the function
	system("pause");
	return 0;
}