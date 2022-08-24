#include <iostream>
using namespace::std;
#include <vector>
#include <string>

int main() {
	vector<vector<int>> ivec;

	// vector<string> svec = ivec;
	// 报错：没有可用于执行该转换的用户定义的转换运算符，或者无法调用该运算符
	// 个人观点：数据类型不同，不能够进行赋值

	vector<string> svec(10, "null");
	// 是个string元素 每个初始化成null
	

	return 0;
}