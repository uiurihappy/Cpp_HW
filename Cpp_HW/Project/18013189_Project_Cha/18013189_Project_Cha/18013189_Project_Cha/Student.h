#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student		//student Class
{
private:
	string name;	// name
	int id;			// Student_ID
	int grade;		// grade

public:
	// default constructor
	Student() { name = ""; id = 0; grade = 0; };
	// Specify the same name as private and parameter.
	Student(string name, int id, int grade)
	{
		this->name = name;
		this->id = id;
		this->grade = grade;
	}
	~Student() {}; //destructor

	//set
	void setName(string name) { this->name = name; }

	//get
	string getName() { return name; }
	int getId() { return id; }
	int getGrade() { return grade; }
};