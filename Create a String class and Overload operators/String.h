#pragma once
#include <iostream>

class String
{
private:
	char* str;
	friend std::ostream& operator<<(std::ostream& os, const String& source);
	friend std::istream& operator>>(std::istream& is, String& source);
public:
	String();
	String(const char* s);
	String(const String& source);
	String(String&& source) noexcept;
	String operator=(const String& source);
	String operator=(String&& source) noexcept;
	void display() const;
	~String();
};

