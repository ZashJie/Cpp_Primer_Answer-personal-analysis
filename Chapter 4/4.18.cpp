#include <iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> v(10,1);

	auto pbeg = v.begin();
	while (pbeg != v.end() && *pbeg >= 0)
		cout << *++pbeg << endl;
	// 运行到最后报错，因为先++意味着，是先从第二个函数开始取值，读取到v.end()
	// v.end()是最后一个元素的下一个值，所以程序出错


	return 0;
}