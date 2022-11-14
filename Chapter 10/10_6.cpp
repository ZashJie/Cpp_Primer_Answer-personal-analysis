#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;	using std::cout;	using std::endl;	using std::fill_n;

int main() {

	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	fill_n(vec.begin(), vec.size(), 0);

	for (int n : vec) {
		cout << n << endl;
	}

	return 0;
}
