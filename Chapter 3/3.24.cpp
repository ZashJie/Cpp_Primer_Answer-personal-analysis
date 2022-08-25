#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {

	vector<int> v;
	int i;
	while (cin >> i) {
		v.push_back(i);
	}
	// 使用迭代器的方法做
	for (auto i = v.begin();i!=v.end()-1;i++) {			//注意，循环结束条件不要写成v.end()了，一定要-1
		cout << *i + *(i+1) << endl;
	}
	cout << "————————————————" << endl;
	auto n = v.begin();
	auto m = v.end() - 1;
	while (n < m) {
		cout << *n + *m << endl;
		n++;
		m--;
	}

	return 0;
}