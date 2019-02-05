/*

// Program: second.cc

// Author: Anirudh Sharma

// Email: as675516@ohio.edu

// Description: This file is where I write down the substitution definition for changing the user's input into whatever the user wants to output.

// Date: January 27th, 2019

*/

#include <string>
#include "prog1.h"

void substitution(std::string &input, std::string &target, std::string &output)
{
	size_t pos = input.find(target);
	size_t len = target.length();
	
	while(pos != std::string::npos)
	{
		input.replace(pos, len, output);
		pos = input.find(target);
	}
}
