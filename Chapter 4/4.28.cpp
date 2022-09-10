#include<iostream>
#include<string>
using namespace std;

int main() {

	cout << "bool:\t" << sizeof(bool) << endl;
	cout << "char:\t" << sizeof(char) << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << endl;	// 是UNICODE的字符类型
	cout << "char16_t:\t" << sizeof(char16_t) << endl;	// 用于16位宽字符的无符号整数类型
	cout << "char32_t:\t" << sizeof(char32_t) << endl;

	cout << "short:\t" << sizeof(short) << endl;
	cout << "int:\t" << sizeof(int) << endl;
	cout << "long:\t" << sizeof(long) << endl;
	cout << "long long:\t" << sizeof(long long) << endl;
	cout << "long int:\t" << sizeof(long int) << endl;

	cout << "float:\t" << sizeof(float) << endl;
	cout << "double:\t" << sizeof(double) << endl;
	cout << "long double:\t" << sizeof(long double) << endl;

	/*
 bool:   1
char:   1
wchar_t:        2
char16_t:       2
char32_t:       4
short:  2
int:    4
long:   4
long long:      8
float:  4
double: 8
long double:    8
	*/



	return 0;
}