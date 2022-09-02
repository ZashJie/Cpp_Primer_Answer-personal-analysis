#include <iostream>
#include <vector>
using namespace std;

int main() {

	int ia[2] = { 1,2 };


	int* p1 = &ia[0];
	int* p2 = &ia[1];

	*p1 = 0;

	cout << *p1 << endl;
	cout << *p2 << endl;
	// p1为0，p2为2 数组第一个元素变为0


	return 0;
}