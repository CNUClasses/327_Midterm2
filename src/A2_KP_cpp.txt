/*
 * A.cpp
 *
 *  Created on: Apr 13, 2020
 *      Author: keith
 */
#include <string.h>
#include "A.h"

A::A(char character_to_find):character_to_find(character_to_find),pCharString(0) {

}

A::~A() {
	if(pCharString)
		delete [] pCharString;
}


int A::setString(char *pString){
	if (!pString )
		return 0;

	if (pCharString)
		delete [] pCharString;

	int ilen = strlen(pString);
	pCharString = new char[ilen +1];
	strncpy(pCharString, pString, ilen+1);
	return ilen;
}

int A::getStringLength(){
	if (!pCharString )
			return 0;
	return(strlen(pCharString));
}

int A::find_numb_occurrences(){
	int len=getStringLength();

	if (len == 0)
		return 0;

	int cnt=0;

	for (int i=0;i<len;i++)
		if( *(pCharString+i) == character_to_find)
			cnt++;
	return cnt;
}



