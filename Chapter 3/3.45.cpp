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
	for (auto & row : arr) {
		for (int col : row) {
			cout << col << " ";
		}
	}
	cout << endl;

	// 下标循环
	for (auto row = 0;row < 3;++row) {
		for (auto col = 0;col < 4;++col) {
			cout << arr[row][col] << " ";
		}
	}
	cout << endl;

	// 指针循环
	for (auto row = arr;row != arr + 3;++row) {
		for (auto col = *row;col != *row + 4;++col) {
			cout << *col << " ";
		}
	}

	// auto 太强啦，直接就知道对象是什么类型

	return 0;
}