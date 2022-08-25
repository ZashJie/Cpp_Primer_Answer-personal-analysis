#include <iostream>
using namespace::std;
#include <vector>
#include <string>

void chack_and_print(vector<int>& vec) {
	cout << "size: " << vec.size() << "content: [";
	for (auto it = vec.begin();it != vec.end();it++) {
		cout << *it << (it != vec.end() - 1 ? "," : "");
	}
	cout << "]" << endl;
}

void chack_and_print(vector<string>& vec) {
	cout << "size:" << vec.size() << "content: [";
	for (auto it = vec.begin();it != vec.end();it++) {
		cout << *it << (it != vec.end() - 1 ? "," : "");
	}
	cout << "]" << endl;
}


int main() {
	// 题目：将3.13 3.16的容量即具体内容用迭代器输出出来

	vector<int> v1;
	chack_and_print(v1);
	// v1 大小为0 

	vector<int> v2(10);
	chack_and_print(v2);
	// v2 大小为10  ； v2属于 值初始化

	vector<int> v3(10, 42);
	chack_and_print(v3);
	// 创建10个值为42的元素

	vector<int> v4{ 10 };
	chack_and_print(v4);
	// v4 大小为1，只创建了一个值为10的元素

	vector<int> v5{ 10, 42 };
	chack_and_print(v5);
	// v5 大小为2，分别创建了值为10和42的元素

	vector<string> v6{ 10 };
	chack_and_print(v6);
	// v6 大小为10，值为""
	// 这不是列表初始化，花括号里面的值必须与元素的类型相同，
	// 因为不同，所以编译器采用了默认值初始化

	vector<string> v7{ 10,"hi" };
	chack_and_print(v7);
	// v7 大小为10，10个值为hi的元素
	// 类型为string的vector，都是使用花括号初始化，有点相当于类型为int的圆括号等同于类型为string的花括号


	


	return 0;
}