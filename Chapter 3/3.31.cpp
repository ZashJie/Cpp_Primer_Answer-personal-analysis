#include <iostream>
#include <vector>
using namespace std;

int main() {
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix < array_size;++ix) {
		ia[ix] = ix;
	}
	for (int i : ia) {
		cout << i << endl;
	}

	return 0;
}