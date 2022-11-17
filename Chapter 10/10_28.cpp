#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main() {

	vector<int> v{ 1,2,3,4,5,6,7,8,9 };
	list<int> l1;
	copy(v.begin(), v.end(), back_inserter(l1));
	for (int i : l1) {
		cout << i << endl;
	}
	cout << "！！！！！！" << endl;


	list<int> l2;
	copy(v.begin(), v.end(), inserter(l2, l2.begin()));

	for (int i : l2) {
		cout << i << endl;
	}
	cout << "！！！！！！" << endl;


	list<int> l3;
	copy(v.begin(), v.end(), front_inserter(l3));

	for (int i : l3) {
		cout << i << endl;
	}
	cout << "！！！！！！" << endl;

	

	return 0;
}