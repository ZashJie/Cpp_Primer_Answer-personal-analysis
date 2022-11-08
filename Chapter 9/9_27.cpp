// 编写程序，查找并删除forward_list中的奇数元素。
#include <iostream>
#include <forward_list>
using namespace std;

int main() {

	forward_list<int> flst = { 0,1,2,3,4,5,6,7,8,9 };
	auto pre = flst.before_begin();

	auto curr = flst.begin();

	while (curr != flst.end()) {
		if (*curr & 0x1) {
			curr = flst.erase_after(pre);
		}
		else {
			pre = curr;
			++curr;
		}
	}

	for (auto& i : flst) {
		cout << i << endl;
	}

	return 0;
}