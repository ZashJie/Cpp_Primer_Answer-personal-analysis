#include<iostream>
#include<string>
using namespace std;

int main() {

	int x[10];
	int* p = x;
	cout << sizeof(x) / sizeof(*x) << endl;	// 猜测：40/4=10 对
	cout << sizeof(p) / sizeof(*p) << endl; // 猜测：40/4=10 错 

	cout << sizeof(p) << endl;	// 8 指针
	cout << sizeof(*p) << endl;	// 4  

	// x是数组的首地址，p存着数组的首地址，*p指向p[0]

	// 标答：第一个输出结果是 10。第二个结果是未定义。


	return 0;
}