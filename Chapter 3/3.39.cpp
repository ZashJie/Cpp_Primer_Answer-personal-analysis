#include <iostream>
#include <string>
#include <cstring>
using std::cout; using std::endl; using std::string;

int main()
{
	// 比较两个string对象
	string s1("aaaaaaaaaa"), s2("bbbbbbbbbb");
	if (s1 == s2)
		cout << "same string." << endl;
	else if (s1 > s2)
		cout << "aaaaaaaaaa > bbbbbbbbbb" << endl;
	else
		cout << "aaaaaaaaaa < bbbbbbbbbb" << endl;

	cout << "=========" << endl;
	// 比较两个C风格字符串的内容
	const char* cs1 = "aaaaaaaaaa";
	const char* cs2 = "bbbbbbbbbb";
	auto result = strcmp(cs1, cs2);	// 相等返回0 小于返回-1 大于返回1
	if (result == 0)
		cout << "same string." << endl;
	else if (result < 0)
		cout << "aaaaaaaaaa < bbbbbbbbbb" << endl;
	else
		cout << "aaaaaaaaaa > bbbbbbbbbb" << endl;

	return 0;
}