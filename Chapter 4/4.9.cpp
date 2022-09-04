#include<iostream>
using namespace std;

int main() {

	const char* cp = "Hello World";
	if (cp && *cp) {
		cout << cp << endl;	// cp是字符串首字母的地址
		cout << *cp << endl;	// *cp指的就是首字母
	}


	return 0;
}