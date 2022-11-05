// 重写上一题的程序，用list替代deque。列出程序要做出哪些改变。
#include <iostream>
#include <string>
#include <deque>
#include <list>
using namespace std;

int main() {

	string s;
	// 只需要在声明上做出改变即可，其他都不变。
	list<string> sdeq;
	while (cin >> s) {
		sdeq.push_back(s);
	}
	for (auto i : sdeq) {
		cout << i << endl;
	}



	return 0;
}

