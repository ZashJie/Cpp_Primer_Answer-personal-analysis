#include<iostream>
using namespace std;


bool is_empty1(const string& s) {
	return s.empty();
}


int main() {
	// 局限性在于常量字符串和字符串字面值无法作为该函数的实参
	const string str = "100";
	bool flag = is_empty1(str);

	return 0;
}