// 本节提到过，标准库算法不会改变它们所操作的容器的大小。为什么使用 back_inserter 不会使这一断言失效？

// back_inserter 是插入迭代器，在 iterator.h 头文件中，不是标准库的算法。


#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {

	vector<int> vec;
	cout << vec.size() << endl;			// 0
	cout << vec.capacity() << endl;		// 0

	// 接受的是迭代器
	auto i = back_inserter(vec);

	*i = 10;

	cout << vec.size() << endl;			// 1
	cout << vec.capacity() << endl;		// 1

	*i = 20;

	cout << vec.size() << endl;			// 2
	cout << vec.capacity() << endl;		// 2

	// i 指向vec数组最后元素后一个位置

	return 0;
}