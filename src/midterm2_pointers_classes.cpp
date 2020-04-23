//============================================================================
// Name        : midterm2_pointers_classes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "A.h"

int main() {

	char *pstr = {"a large piece of toast"};
	A a(' ');

	int num = a.getStringLength();	//num=0
	num = a.find_numb_occurrences();//num=0

	num = a.setString(pstr);		//num=22
	num = a.setString(pstr);		//num=22
	num = a.getStringLength();		//num=22

	num = a.find_numb_occurrences();//num=4

	return 0;
}
