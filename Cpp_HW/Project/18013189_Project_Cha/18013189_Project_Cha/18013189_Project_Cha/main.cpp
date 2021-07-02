#include "StudentList.h"
#include "FileManager.h"

int main()
{
	StudentList sl;					//declare StudentList object
	int n;
	bool check = true;				//Check whether the program is Exit or not

	sl.LoadFile();

	while (check == true)
	{
		cout << "Student Manager Program" << endl;
		cout << "1. Regist student" << endl;
		cout << "2. Confirm student" << endl;
		cout << "3. Modify student" << endl;
		cout << "4. Delete student" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter the number : ";
		cin >> n;

		switch (n)
		{
		case 1:						//Regist student
			sl.create();
			break;

		case 2:						//Confirm student
			sl.read();
			break;

		case 3:						//Modify student
			sl.update();
			break;

		case 4:						//Delete student
			sl.deleteStudent();
			break;

		case 5:						//Exit
			check = false;
			break;

		default:					//Invalid input
			cout << "Invalid input." << endl << endl;
			break;
		}
	}

	sl.SaveFile();

	return 0;
}