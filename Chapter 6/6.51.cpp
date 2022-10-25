#include<iostream>
using namespace std;

void f() {
	cout << "void f()" << endl;
}

void f(int x) {
	cout << "void f(int x)" << endl;
}

void f(int, int) {
	cout << "void f(int, int)" << endl;
}

void f(double, double = 3.14) {
	cout << "void f(double, double = 3.14)" << endl;
}





int main() {

	f();
	f(10);
	f(10, 15);
	f(10.5, 10.6);
	f(10.5);


	return 0;
}