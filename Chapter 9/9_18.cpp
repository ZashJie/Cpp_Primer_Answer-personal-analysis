// 编写程序，从标准输入读取string序列，存入一个deque中。编写一个循环，用迭代器打印deque中的元素。
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {

	string s;
	deque<string> sdeq;
	while (cin >> s) {
		sdeq.push_back(s);
	}
	for (auto i : sdeq) {
		cout << i << endl;
	}
	


	return 0;
}

