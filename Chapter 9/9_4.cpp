// 编写函数，接受一对指向vector的迭代器和一个int值。在两个迭代器指定的范围中查找给定的值，返回一个布尔值来指出是否找到。
#include <iostream>
#include <vector>
using namespace std;

bool func(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i) {
	for (;begin != end;begin++) {
		if (*begin == i) {
			return true;
		}
	}
	return false;
}