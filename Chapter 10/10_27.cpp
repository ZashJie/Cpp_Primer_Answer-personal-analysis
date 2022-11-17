#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v{ 1, 2, 2, 3, 4, 1, 5, 6 };
	list<int> front_l;
	list<int> back_l;

	unique_copy(v.begin(), v.end(), front_inserter(front_l));

	for (int i : front_l) {
		cout << i << endl;
	}
	cout << "！！！！！！！！！！！！" << endl;
	unique_copy(v.begin(), v.end(), back_inserter(back_l));
	for (int i : back_l) {
		cout << i << endl;
	}

	return 0;
}