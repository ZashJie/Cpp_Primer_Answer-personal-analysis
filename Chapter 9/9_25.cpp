#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{ 1, 2, 3, 4, 5 };
	auto front = v.begin();
	auto end = v.begin();
	v.erase(front, end);
	for (auto s : v) {
		cout << s << endl;

	}
	// 如果 elem1 和 elem2 相等，那么不会发生任何操作。

	cout << "-------------------" << endl;

	auto end1 = v.end(); // 尾后迭代器
	v.erase(front, end1);

	for (auto s : v) {
		cout << s << endl;

	}
	
	// 如果两者皆为尾后迭代器，也什么都不会发生。


	return 0;
}