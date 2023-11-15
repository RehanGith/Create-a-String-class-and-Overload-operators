#include "String.h"
#include <cstring>
#include <iostream>
String::String()
	: str(nullptr) {
	str = new char;
	*str = '\0';
}
String::String(char* s)
	: str(nullptr) {
	if (s == nullptr) {
		str = new char;
		*str = '\0';
	}
	else {
		size_t size = strlen(s) + 1;
		str = new char[size];
		strcpy_s(str , size, s);
	}
}
String::String(const String& source)
: str(nullptr) {
	size_t size = std::strlen(source.str) + 1;
	str = new char[size];
	strcpy_s(str, size, source.str);
}
String String::operator=(const String& source) {
	if (source.str == nullptr)
		return *this;
	delete[] str;
	size_t size = std::strlen(source.str) + 1;
	str = new char[size];
	strcpy_s(str, size, source.str);
	return *this;
}
void String::display() const {
	std::cout << str << std::endl;
}
String::~String() {
	delete[] str;
}