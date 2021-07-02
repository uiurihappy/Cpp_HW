#pragma once
#include "Student.h"
#include <fstream>

class FileManager
{
private:
	int count;

public:
	FileManager() { count = 0; }		//default constructor
	~FileManager() {};					//destructor

	//get
	int getCount() { return count; }

	//declare fuction
	void load(Student* sl[]);
	void save(Student* sl[], int count);
};

