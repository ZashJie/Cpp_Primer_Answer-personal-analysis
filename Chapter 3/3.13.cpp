#include <iostream>
using namespace::std;
#include <vector>
#include <string>

int main() {
	
	vector<int> v1;
	cout << "v1.size = " << v1.size() << endl;
	// v1 大小为0

	vector<int> v2(10);
	cout << "v2.size = " << v2.size() << endl;
	// v2 大小为10  ； v2属于 值初始化

	vector<int> v3(10, 42);
	cout << "v3.size = " << v3.size() << endl;
	for (auto it = v3.begin();it != v3.end();++it) {
		cout << *it << "\t";
	}
	cout << endl;
	// 创建10个值为42的元素

	vector<int> v4{ 10 };
	cout << "v4.size = " << v4.size() << endl;
	// v4 大小为1，只创建了一个值为10的元素

	vector<int> v5{ 10, 42 };
	cout << "v4.size = " << v5.size() << endl;
	// v5 大小为2，分别创建了值为10和42的元素

	vector<string> v6{ 10 };
	cout << "v6.size = " << v6.size() << endl;
	// v6 大小为10，值为""
	// 这不是列表初始化，花括号里面的值必须与元素的类型相同，
	// 因为不同，所以编译器采用了默认值初始化

	vector<string> v7{ 10,"hi" };
	cout << "v7.size = " << v7.size() << endl;
	for (auto it = v7.begin();it != v7.end();it++) {
		cout << *it << "\t";
	}
	// v7 大小为10，10个值为hi的元素
	// 类型为string的vector，都是使用花括号初始化，有点相当于类型为int的圆括号等同于类型为string的花括号



	return 0;
}