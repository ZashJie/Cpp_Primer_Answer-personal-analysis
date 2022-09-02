#include <iostream>
#include <string>
using namespace std;

const char cstr1[] = "Hello";
const char cstr2[] = "world";

int main() {

	char cstr3[100];
	strcpy_s(cstr3, cstr1);
	strcat_s(cstr3, " ");	// strcat添加字符数组添加到另一个字符数组的后面
	strcat_s(cstr3, cstr2);
	cout << cstr3 << endl;


	return 0;

}