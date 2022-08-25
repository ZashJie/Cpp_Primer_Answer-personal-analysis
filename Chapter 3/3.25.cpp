#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {
	/* 
	* 
	* 课本原本代码
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++scores[grade / 10];
		}
	}
	*/
	vector<unsigned> scores(11, 0);
	unsigned grade=100;
	while (cin >> grade) {
		if (grade <= 100) {
			++*(scores.begin() + grade / 10);
			// 重点：一定要加星号(*)，不加星号++的话只是将迭代器往后移一位而已
		}
	}
	for (auto i : scores) {
		cout << i << endl;
	}

	

	return 0;
}