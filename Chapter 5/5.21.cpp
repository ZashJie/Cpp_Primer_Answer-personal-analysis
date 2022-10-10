#include<iostream>
#include<string>
using namespace std;


int main() {

	string curr, prev;
	bool no_twice = true;

	while (cin >> curr) {
		if (isupper(curr[0]) && prev == curr)	// 相较于上一题 多了一个isupper函数判断是否是大写字母 
		{
			cout << curr << ":连续两次了" << endl;
			no_twice = false;
			break;
		}
		prev = curr;
	}
	if (no_twice) {
		cout << "就没有重复的" << endl;
	}

	return 0;
}