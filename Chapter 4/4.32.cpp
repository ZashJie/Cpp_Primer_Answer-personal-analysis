#include<iostream>
#include<string>
using namespace std;

int main() {

	constexpr int size = 5;
	int ia[size] = { 1, 2, 3, 4, 5 };
	for (int* ptr = ia, ix = 0;
		ix != size && ptr != ia + size;
		++ix, ++ptr) { 
		// cout << ia << endl;
	}

	// 这个循环在遍历数组 ia，指针 ptr 和 整型 ix 都是起到一个循环计数的功能。


	return 0;
}