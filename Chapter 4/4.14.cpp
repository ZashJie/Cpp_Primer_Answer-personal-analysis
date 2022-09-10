#include<iostream>
using namespace std;

int main() {

	int i;
	// if(42=i) 该种情况不允许，表达式必须是可修改的左值
	if (i = 42) {
		cout << "只会产生警告" << endl;
	}	// 该条件一定会执行，编译器不会报错，只会产生警告

	return 0;
}