#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {
	
	vector<int> v(10, 0);
	auto beg = v.begin();
	auto end = v.end();
	
	cout << "end - beg = " << end - beg << endl;
	// 结果等于 10，也就是说两个迭代器相减结果为题目相距多少个元素
	// cout << "end + begin = " << end + begin << endl;
	// 相加则报错
	cout << (end - beg) +10 << endl;
	return 0;
}