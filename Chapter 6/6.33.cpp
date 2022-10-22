#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>::const_iterator beg, vector<int>::const_iterator end) {
	if (beg == end) {
		cout << "over!" << endl;
		return;
	}
	cout << *beg << endl;
	print(++beg, end);
}


int main() {

	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	print(vec.begin(), vec.end());

	return 0;
}