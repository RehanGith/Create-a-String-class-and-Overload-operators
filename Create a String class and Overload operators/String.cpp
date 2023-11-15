#include "String.h"
#include <cstring>
#include <iostream>
String::String()
	: str(nullptr) {
	str = new char;
	*str = '\0';
}
String::String(const char* s)
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
// copy assignment operator
String::String(const String& source)
: str(nullptr) {
	size_t size = std::strlen(source.str) + 1;
	str = new char[size];
	strcpy_s(str, size, source.str);
}
//Move copy assignment operator
String::String(String&& source) noexcept
	: str(source.str) {
	source.str = nullptr;
}
//copy Assignment operator
String String::operator=(const String& source) {
	if (source.str == nullptr)
		return *this;
	delete[] str;
	size_t size = std::strlen(source.str) + 1;
	str = new char[size];
	strcpy_s(str, size, source.str);
	return *this;
}
// Move Assignment operator
String String::operator=(String&& source) noexcept {
	if (this == &source)
		return *this;
	delete[] str;
	size_t size = std::strlen(source.str) + 1;
	str = new char[size];
	strcpy_s(str, size, source.str);
	return *this;
}
std::ostream &operator<<(std::ostream &os, const String &source) {
	os << source.str;
	return os;
}
std::istream& operator>>(std::istream& is, String& source) {
	char* buff = new char[100];
	is >> buff;
	source = String { buff };
	delete [] buff;
	return is;
}
void String::display() const {
	std::cout << str << std::endl;
}
String::~String() {
	delete[] str;
}