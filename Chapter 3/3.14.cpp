#include <iostream>
using namespace::std;
#include <vector>
#include <string>

int main() {
	int i;
	vector<int> vec;
	while (cin >> i) {
		vec.push_back(i);
		if (i == 0)
			break;
	}


	return 0;
}