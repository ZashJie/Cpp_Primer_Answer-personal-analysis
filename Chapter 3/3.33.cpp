#include <iostream>
#include <vector>
using namespace std;

int main() {

	unsigned scores[11];
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++scores[grade / 10];
		}
		else {
			break;
		}
	}

	for (auto i : scores) {
		cout << i << " " << endl;
	}

	/*
	当scores数组不初始化时，结果如下：
		3435973836
		3435973837
		3435973837
		3435973837
		3435973837
		3435973838
		3435973837
		3435973837
		3435973837
		3435973837
		3435973837
	数组中所有的值都未被定义


	*/

	return 0;
}