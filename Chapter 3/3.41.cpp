#include<iostream>
#include<vector>
using namespace std;

int main() {

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> arr2(begin(arr1), end(arr1));
	// Ïàµ±ÓÚ vector<int> arr2(arr1, &arr1[10]);

	for (auto i : arr2) {
		cout << i << endl;
	}


	return 0;
}