#pragma warning(disable : 4996)
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <array>

using namespace std;

int main() {
	//Declare a 2 dimensional array and initialize it
	std::array<std::array<int, 2>, 3> student = { 20, 100, 70,36,30,50 };
	
	//score, average
	int csum = 0, psum = 0;
	double cavg = 0, pavg = 0;

	//c++ score Cumulative
	for (int i = 0; i < 3; i++) {
		csum += student[i][0];
	}
	//Compute c++ score average
	cavg = (double)csum / 3.0;
	
	//physics score Cumulative
	for (int j = 0; j < 3; j++) {
		psum += student[j][1];
	}
	//Compute physics score average
	pavg = (double)psum / 3.0;

	//output
	cout << "C++ avg score : " << cavg << endl;
	cout << "Physics avg score : " << pavg << endl;

	return 0;
}