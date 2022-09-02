#include <iostream>
#include <vector>
using namespace std;

int main() {

	int ia[2] = { 1,2 };


	int* p1 = &ia[0];
	int* p2 = &ia[1];

	p1 += p2 - p1;
	// 相当于p1向右移到p2位置

	cout << *p1 << endl;
	cout << *p2 << endl;
	// p1 跟 p2 都指向的是ia的第二个数组元素

	return 0;
}