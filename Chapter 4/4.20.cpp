#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<string>::iterator iter;

	*iter++;	// 合法，返回迭代器当前指向的元素，迭代器递增

	(*iter)++;  // 不合法，因为iter指向的是string，不能++

	*iter.empty();	// 不合法，要加括号
	iter->empty();	// 合法

	++* iter;	//不合法，先执行的是*，iter指向的时候string，string又不能++

	iter++->empty();	// 合法，先判断当前元素是否为空，然后迭代器递增

	return 0;
}