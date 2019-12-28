#include "CString.h"
#include <iostream>
/*
This is the implementation file. Most of the information you're looking for will
be in the header file.
*/
String::String() {
	length = 0;
	data = new char[0];
}

String::String(const char* str) {
	if (str) {
		length = 0;
		while (str[length] != '\0') {
			length++;
		}
		data = new char[length + 1];
		for (size_t currPos = 0; currPos < length; currPos++) {
			data[currPos] = str[currPos];
		}
		data[length] = '\0';
	}
	else {
		length = 0;
		data = new char[0];
	}
}

void String::append(const char* str) {
	unsigned argCount = 0;
	unsigned prevLength = 0;
	unsigned currPos = 0;
	while (str[argCount] != '\0') {
		argCount++;
	}
	currPos = 0;
	prevLength = length;
	length = length + argCount;
	for (prevLength; prevLength < length; prevLength++) {
		currPos++;
		data[prevLength] = str[currPos];
	}

	length = length + 1;
	data[length] = '\0';
}

unsigned String::count() {
	return(length - 1);
}

signed String::compare_length(const char* str) {
	if (str) {
		unsigned strLength = 0;
		while (str[strLength] != '\0') {
			strLength++;
		}
		if (strLength > length) {
			return 1;
		}
		if (strLength < length) {
			return -1;
		}
		if (strLength == length){
			return 0;
		}
	else {
		return 2;
	}

	}
}

bool String::compare_content(const char* str) {
	unsigned charCheck = 0;
	for (unsigned currPos = 0; currPos < length; currPos++) {
		if (data[currPos] == str[currPos]) {
			charCheck++;
			if (charCheck == length) {
				return 1;
			}
		}
	else {
		return 0;
	}
	}
}


char String::element(int strIndex) {
	return data[strIndex - 1];
}

void String::print() {
	std::cout << data;
}