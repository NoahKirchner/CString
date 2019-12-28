#pragma once
#ifndef CSTRING_H
#define CSTRING_H
/*
This is the header file. This is where all the useful information is.
*/
class String {
private:
	char* data;
	unsigned length;

public:

	String();
	/*
	Default constructor. Sets both data and length to 0;
	*/

	String(const char* str);
	/*
	Allows you to pass information to the object by use of an argument. This constructor
	determines and sets length using a for loop and then copies each element of the passed
	char array into the object. Adds a null terminator for good measure.
	*/

	void append(const char* str);
	/*
	Adds a passed argument onto the end of the char array already stored in the object.
	*/

	unsigned count();
	/*
	Returns the length variable minus one (not counting the null terminator).
	*/

	signed compare_length(const char* str);
	/*
	Compares the length of the length of an argument and the size of the length variable.
	If the size of the passed char array is greater than the one stored in the object,
	this method returns a 1. If less, the method returns a -1, and if they are equal it
	returns 0. In the event that none of these are somehow true, it will return a 2 for error.
	*/

	bool compare_content(const char* str);
	/*
	Compares the content of an argument with the char array stored inside of the object.
	It will return 1 if they are the same or 0 if they are not.
	*/

	char element(int strIndex);
	/*
	Finds the element in the data char array that corresponds with the integer passed
	to the method minus one. 
	*/

	void print();
	/*
	Very simple, easy, breezy and beautiful. Just couts the data variable. (This one was
	the easiest to write).
	*/

};


#endif