// 重写11.1节练习的单词计数程序，使用insert代替下标操作。你认为哪个程序更容易编写和阅读？解释原因。

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, size_t> counts;
	for (string word; cin >> word;) {
		auto result = counts.insert({word, 1});
		if (!result.second) {
			// 其返回值为指向指定元素的关键字
			result.first->second++;
		}
	}
	for (auto i : counts) {
		cout << i.first << ":" << i.second << endl;
	}

	return 0;
}