#include <iostream>
#include <vector>
using namespace std;
//#define NDEBUG

using Iter = vector<int>::const_iterator;

void print(Iter first, Iter Last) {
#ifndef NDEBUG
	cout << "vector size:" << Last - first << endl;
#endif

	if (first == Last) {
		cout << "OVER!" << endl;
		return;
	}
	cout << *first <<"  " << endl;
	print(++first, Last);

}


int main() {

	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	print(vec.begin(), vec.end());

	return 0;
}