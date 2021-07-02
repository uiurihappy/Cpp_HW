#include "FileManager.h"

//File load
void FileManager::load(Student* sl[])
{
	ifstream fin;
	fin.open("D:\\student.txt");

	Student s;
	string name;
	int id;
	int grade;
	// Conditional statement that tells you it failed if you don't have a file name
	if (fin.fail())
	{
		cout << "Failed to open file." << endl;
		exit(1);
	}
	while (1)			// Repeat statement that reads until it's finished
	{
		fin >> name >> id >> grade;

		if (fin.fail())
			break;

		sl[count++] = new Student(name, id, grade);	// new when pointer array
	}
	//file close
	fin.close();
}

void FileManager::save(Student* sl[], int count)
{
	ofstream fout;
	this->count = count;

	fout.open("D:\\output.txt");

	//Save student information to output file
	for (int i = 0; i < count; i++)
	{
		fout << sl[i]->getName() << " " << sl[i]->getId() << " " << sl[i]->getGrade() << endl;
	}
	//file close
	fout.close();
}