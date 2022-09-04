#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> arr1{ 0,1,2,3,4,5,6,7,8,9 };
	int arr2[10];
	for (int i = 0;i < 10;i++) {
		arr2[i] = arr1[i];
	}

	for (auto i : arr2) {
		cout << i << endl;
	}

	return 0;
}