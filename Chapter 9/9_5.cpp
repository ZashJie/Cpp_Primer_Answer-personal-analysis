// 重写上一题的函数，返回一个迭代器指向找到的元素。注意，程序必须处理未找到给定值的情况。
#include <iostream>
#include <vector>
using namespace std;

vector<int>::const_iterator func(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i) {
	for (;begin != end;begin++) {
		if (*begin == i) {
			return begin;
		}
	}
	return end;
}