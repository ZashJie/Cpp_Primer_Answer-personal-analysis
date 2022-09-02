#include <iostream>
#include <vector>
using namespace std;

int main() {

	int ia[3] = { 1,2,3 };
	int* p1 = &ia[0];
	int* p2 = &ia[1];

	cout << p2 - p1 << endl;

	// 两个指针相减可以表示两个指针间的距离，将指针加上一个整数也可以表示移动这个指针到某一个位置
	// 但是两个指针相加并没有什么逻辑上的意义。

	return 0;
}