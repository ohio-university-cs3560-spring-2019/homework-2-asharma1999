/*

// Program: prog1.cc

// Author: Anirudh Sharma

// Email: as675516@ohio.edu

// Description: This program reads through a text file and makes changes to whatever the user wants to change such as Joe Flaco in file1.txt being replaced with Tom Brady in file2.txt

// Date: January 27th, 2019

*/

#include <iostream>
#include "prog1.h"

using namespace std;

int main(int argc, char const *argv[])
{
	string i;
	string target = argv[1];
	string output = argv[2];
	
	getline(cin, i);
	
	while(!cin.eof())
	{
		substitution(i, target, output);
		cout << i << endl;
		getline(cin, i);
	}
	
	return 0;
}
