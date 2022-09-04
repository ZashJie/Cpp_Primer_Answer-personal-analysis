#include<vector>
#include<iostream>
using namespace std;

int main() {

	int arr[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	// C++特有的循环
	for (const int(&row)[4] : arr) {
		for (const int col : row) {
			cout << col << " ";
		}
	}
	cout << endl;

	// 下标循环
	for (size_t row = 0;row < 3;row++) {
		for (size_t col = 0;col < 4;col++) {
			cout << arr[row][col] << " ";
		}
	}
	cout << endl;

	// 指针循环
	for (int(*row)[4] = arr;row != arr + 3;++row) {
		for (int *col = *row;col != *row+4;++col) {
			cout << *col << " ";
		}
	}
	return 0;
}