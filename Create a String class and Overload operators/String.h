#pragma once
class String
{
private:
	char* str;
public:
	String();
	String(const char* s);
	String(const String& source);
	String(String&& source);
	String operator=(const String& source);
	String operator=(String&& source);
	void display() const;
	~String();
};

