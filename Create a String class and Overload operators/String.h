#pragma once
class String
{
private:
	char* str;
public:
	String();
	String(char* s);
	String(const String& source);
	void display() const;
	~String();
};
