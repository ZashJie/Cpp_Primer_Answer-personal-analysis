// 编写程序，分别使用 at、下标运算符、front 和 begin 提取一个vector中的第一个元素。在一个空vector上测试你的程序。
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{ 1 };
	
	cout << v.at(0) << endl;
	cout << v[0] << endl;
	cout << v.front() << endl;
	cout << *v.begin() << endl;

	return 0;
}