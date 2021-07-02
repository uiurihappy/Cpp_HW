#pragma once
#include "Student.h"
#include "FileManager.h"

class StudentList
{
private:
	Student* s[100];	// 100 student classes
	int count;
	FileManager fm;

public:
	StudentList()
	{
		count = 0;

		for (int i = 0; i < 100; i++)
		{
			s[i] = new Student();		// Insert as default constructor
		}
	};
	~StudentList() {};					//Destructor

	void create();
	void read();
	void update();
	void deleteStudent();

	void LoadFile();
	void SaveFile();
};