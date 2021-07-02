#pragma warning(disable : 4996)
#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <string>
#include <array>

using namespace std;

int main(){
	//open file for writing
	//creating object
	ifstream inf;
	//open() is a predefined function
	inf.open("D:\\test\\original.txt");
	//check the file
	if (!inf) { 
		cout << "Error, no such file exists" << endl;
	}
	
	// Declare string to Save
	string str; 

	//constructor
	ofstream onf;
	//open() is a predefined function
	onf.open("D:\\test\\record.txt");
	//check the file
	if (!onf) { 
		cout << "Error, no such file exists" << endl;
	}
	
	// Receiveand save to the end of the string
	while (getline(inf, str)) {
		onf << str << "\n"; //write
		cout << str << endl;
	}
	
	//close()
	inf.close();
	onf.close();
	
	return 0;
}