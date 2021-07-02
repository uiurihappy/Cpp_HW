#pragma once
#include "StudentList.h"

//Regist student
void StudentList::create()
{
	string name;
	int id;
	int grade;

	//Input data
	cout << "This is the student registration page." << endl;
	cout << "Enter the name : ";
	cin >> name;
	cout << "Enter the Student_ID : ";
	cin >> id;
	for (int i = 0; i < count; i++)
	{
		if (id == s[i]->getId())
		{
			cout << "A Student_ID that already exists." << endl;
			return;
		}
	}
	cout << "Enter the grade : ";
	cin >> grade;


	s[count++] = new Student(name, id, grade);			//Save to Student class
}

//Confirm student
void StudentList::read()
{
	cout << "This is the student confirm page." << endl;

	if (count == 0)					//Nothing student data
		cout << "Nothing data!" << endl;
	else
	{
		for (int i = 0; i < count; i++)
		{
			//Output student data, Name Student_ID Grade
			cout << s[i]->getName() << " " << s[i]->getId() << " " << s[i]->getGrade() << endl;
		}
	}
}

//Modify student
void StudentList::update()
{
	int id;
	cout << "This is the student modify page." << endl;

	//Identify by ID
	cout << "Enter the Student_ID : ";
	cin >> id;

	for (int i = 0; i < count; i++)
	{
		if (id == s[i]->getId())		//If the ID are the same
		{
			string name;
			//Modify student name
			cout << "Enter a name to change : ";
			cin >> name;
			//s[i] = Student(name, s[i].getId, s[i].getGrade);	//How to change to a constructor

			//Save to name
			s[i]->setName(name);
			cout << "Modify Complete!" << endl;

			return;
		}
		if (count - 1 == i)				//No matching Student_ID
		{
			cout << "There is no matching Student_ID." << endl;
		}
	}
}

//Delete student
void StudentList::deleteStudent()
{
	int id;
	int val = -1;	// Save to count

	cout << "This is the student deletion page." << endl;

	//Input the Student_ID to delete
	cout << "Enter the Student_ID : ";
	cin >> id;

	for (int i = 0; i < count; i++)
	{
		if (id == s[i]->getId())		// if exist student_ID,
		{
			val = i;
			break;
		}
	}
	if (val == -1)						// when the student number doesn't exist
		cout << "There is no matching Student_ID." << endl;
	else
	{
		for (int i = val; i < count; i++)
		{
			s[i] = s[i + 1];			//overwrite the elements of the class array before it.
		}
		count--;
	}
}

void StudentList::LoadFile()	//file load
{
	fm.load(s);
	count = fm.getCount();
}

void StudentList::SaveFile()	//file save
{
	fm.save(s, count);
}