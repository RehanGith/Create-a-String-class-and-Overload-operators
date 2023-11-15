#include <iostream>
#include "String.h"
using namespace std;

int main() {
	String s;
	char arr[]{ "Rehan" };
	String s1(arr);
	s1.display();
	s.display();
	String s2(s1);
	s2.display();
	s = s1;
	s.display();
	return 0;
}