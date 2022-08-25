#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {
	/*
	vector<int> ivec;
	ivec[0] = 42;
	*/
	// 错误，分析为没有对ivec进行初始化
	vector<int> ivec(10);
	// 创建十个值为0的元素
	ivec[0] = 42;

	// 可能上面理解错意思了 标准答案如下
	vector<int> v;
	v.push_back(42);
	

	return 0;
}