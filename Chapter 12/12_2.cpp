#include "12_2.h"
#include <iostream>

int main() {
	StrBlob b1{ "Hello", "World" };
	const StrBlob cbv{ "const", "Hello", "World", "aaa" };
	cout << "b1:" << b1.front() << " " << b1.back() << endl;
	cout << "cb:" << cbv.front() << " " << cbv.back() << endl;
	return 0;
}