#include <iostream>
#include <string>
using namespace std;

int main() {

	string numbers("0123456789");
	string name("r2d2");

	auto a = numbers.find(name);
	cout << a << endl;

	// find搜索失败返回一个 string::npos 这个是一个unsigned类型，
	// 此初始值意味着npos等于任何string最大的可能大小

	return 0;
}