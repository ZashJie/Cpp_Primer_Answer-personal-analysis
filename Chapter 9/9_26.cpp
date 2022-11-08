#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {

	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

	// end(ia) —— ia数组最后元素的后一个地址

	vector<int> vec(ia, end(ia));
	list<int> lst(vec.begin(), vec.end());

	for (auto it = lst.begin(); it != lst.end(); )
		if (*it & 0x1)
			it = lst.erase(it);
		else
			++it;

	for (auto it = vec.begin(); it != vec.end(); )
		if (!(*it & 0x1))
			it = vec.erase(it);
		else
			++it;

	
	return 0;
}