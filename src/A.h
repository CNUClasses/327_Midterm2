#ifndef A_H_
#define A_H_

//Please implement(define) the functions in this class
//dont forget necessary includes
//all returned string lengths should exclude terminating nulls
class A {
public:
	//5 points
	//initialize member variables
	A(char character_to_find);

	//25 points
	//store a deep copy of pString into pCharString
	//be sure to handle null pointers
	//please do not leak memory
	//(ie if this function is called twice in a row)
	//
	//return:the number of characters copied
	//or 0 if pString is null
	int setString(char *pString);

	//10 points
	//return:the length of pCharString or 0 if
	//pCharString is null
	int getStringLength();

	//35 points
	//use pointer arithmetic to
	//iterate over pCharString and
	//count the number of occurrences
	//of character_to_find
	//
	//return:number occurrences or 0 if
	//pCharString is null
	int find_numb_occurrences();

	//25 points
	//handle cleanup
	virtual ~A();
private:
	const char character_to_find;
	char *pCharString;
};

#endif /* A_H_ */
