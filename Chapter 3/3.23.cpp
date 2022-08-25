#include <iostream>
using namespace::std;
#include <vector>

int main() {
	vector<int> v(10, 1);
	for (auto &it:v) {
		it = it * 2;
		cout << it << endl;
	}
	// 2 2 2 2 2 2 2 2 2 2 2
	return 0;
}