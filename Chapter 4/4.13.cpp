#include<iostream>
using namespace std;

int main() {

	int i;
	double d;
	d = i = 3.5;	// d=3 i=3 在将3.5赋值给i的时候变为整数所以被赋值给d的值也被转换为3
	cout << "d:" << d << "i:" << i << endl;
	i = d = 3.5;	// d=3.5 i=3
	cout << "d:" << d << "i:" << i << endl;

	return 0;
}