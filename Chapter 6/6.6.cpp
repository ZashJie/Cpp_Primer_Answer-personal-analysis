#include <iostream>
using namespace std;

int xx(int x) {
	cout << "这个x就是形参" << endl;
	static int ctr = 10;
	cout << "这个ctr就是局部静态变量" << endl;
	return x;
}

int main() {

	int i = 0;
	cout << "这个i就是局部变量" << endl;
	xx(i);
	return 0;
}