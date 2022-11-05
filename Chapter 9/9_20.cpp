// 编写程序，从一个list拷贝元素到两个deque中。值为偶数的所有元素都拷贝到一个deque中，而奇数值元素都拷贝到另一个deque中。

#include <iostream>
#include <string>
#include <deque>
#include <list>
using namespace std;

int main() {

	list<int> li{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	deque<int> ideq1;
	deque<int> ideq2;


	for (auto i : li) {
		(i & 0x1 ? ideq1 : ideq2).push_back(i);
	}

	for (auto i : ideq1) cout << i << endl;

	for (auto i : ideq2) cout << i << endl;


	return 0;
}
