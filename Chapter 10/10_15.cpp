#include <iostream>
using namespace std;

void add(int a) {
	auto sum = [a](int b) {
		return a + b;
	};
	cout << sum(1) << endl;
}

int main() {
	int x = 10;
	add(x);

	return 0;
}