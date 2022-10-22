#include<iostream>
using namespace std;


int count_li(initializer_list<int>const& li) {
	int count = 0;
	for (auto i : li) {
		count += i;
	}
	return count;
}


int main() {

	initializer_list<int> li{1,2,3,4,5,6,7,8,9,10};	//这个对象中的元素永远是常量值，我们无法修改

	cout << count_li(li) << endl;

	return 0;
}