#include<iostream>
#include<vector>
using namespace std;

int main() {

	int* ptr=nullptr;
	vector<int> vec{0,0};
	int ival=0;

	if (ptr == 0)
		cout << "ptr是空指针" << "ptr:" << ptr << endl;	// ptr是空指针ptr:0000000000000000
	// (a) ptr != 0 && *ptr++
	// 判断ptr是不是一个空指针，并且当前指向的元素的值也为真，然后将ptr指向下一个元素

	// (b) ival++ && ival
	// 判断ival是否为真，并且判断ival+1是否也为真

	// (c) vec[ival++] <= vec[ival]
	// 错误，C++并没有规定运算符两边的求值顺序，应该改为 vec[ival] <= vec[ival+1]




	return 0;
}