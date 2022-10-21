#include<iostream>
using namespace std;

void print(const int ia[10])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}

void print(const int(&ia)[10])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}
// 当数组作为实参的时候，会被自动转换为指向单元素的指针，因此函数形参接收的是一个指针，如果让这个代码成功运行，可以将参数改为数组的引用

int main() {
	int ia[10] = { 10,10 };
	print(ia);


	return 0;
}