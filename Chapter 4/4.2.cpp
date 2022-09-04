#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> vec{ 1,3,3,4,5 };

	cout << *vec.begin() << endl;
	cout << *vec.begin() + 1 << endl;
	// 解引用得出数值再加一

	cout << *(vec.begin()) << endl;
	cout << *(vec.begin()) + 1 << endl;

	// 测验对运算符优先级的理解

	return 0;
}