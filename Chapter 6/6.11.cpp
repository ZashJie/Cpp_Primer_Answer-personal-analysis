// reset函数 将传过来的对象变为零 这里运用到引用

#include<iostream>
using namespace std;

void reset(int& x) {
	x = 0;
}


int main() {
	int x = 10;
	reset(x);
	cout << "x:" << x;
	return 0;
}