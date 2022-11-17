#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {

	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };
	list<int> l;
	copy(vec.crbegin(), vec.crend(), back_inserter(l));
	for (auto i : l) {
		cout << i << endl;
	}

	return 0;
}