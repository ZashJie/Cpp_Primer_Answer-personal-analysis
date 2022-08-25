#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {
	
	// 三种方法定义含有十个元素值为42的vector对象

	vector<int> one(10, 42);

	vector<int> two{ 42,42,42,42,42,42,42,42,42,42 };

	vector<int> three;
	for (int i = 0;i < 10;i++) {
		three.push_back(42);
	}


	return 0;
}