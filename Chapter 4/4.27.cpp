#include<iostream>
#include<string>
using namespace std;

int main() {

	unsigned long ul1 = 3, ul2 = 7;
	cout << (ul1 & ul2) << endl;	// 011 & 111 = 011(3)
	cout << (ul1 | ul2) << endl;	// 011 | 111 = 111(7)
	cout << (ul1 && ul2) << endl;	// && 条件与，两边都为真
	cout << (ul1 || ul2) << endl;	// || 条件或，两边都为真


	return 0;
}