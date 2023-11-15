#include <iostream>
#include "String.h"
using namespace std;

int main() {
	String s { "muhammad Rehan" };
	char arr[]{ "Rehan" };
	String s1(arr);
	cout << s1 << " and " << s << endl;
	String s2(s1);
	cout << s2 << endl;
	s = s1;
	cout << s << endl;
	cin >> s;
	cout << s;
	return 0;
}