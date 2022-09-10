#include <iostream>
using namespace std;

int main() {

	double dval;
	int ival;
	int* pi;

	// dval = ival = pi = 0;
	// 这样会报错，不能将指针赋值给int

	dval = ival = 0;
	pi = 0;

	cout << pi << endl;
	return 0;
}