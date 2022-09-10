#include<iostream>
#include<string>
using namespace std;

int main() {

	int someValue = 1;

	int x = 0, y = 0;

	someValue ? ++x, ++y : --x, --y;

	cout << x << y << endl;	//1 0

	int someValue1 = 0;

	int x1 = 0, y1 = 0;

	someValue1 ? ++x1, ++y1 : --x1, --y1;

	cout << x1 << y1 << endl;	//-1 -1

	// 相当于 (someValue1 ? ++x1, ++y1 : --x1), --y1;
	// 不管someValue为真还是为假，都会执行--y1

	int x2 = 2;
	int i;
	i = 1, x2;
	cout << i << endl;
	return 0;
}