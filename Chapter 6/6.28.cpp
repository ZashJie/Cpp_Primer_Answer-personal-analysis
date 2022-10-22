#include<iostream>
using namespace std;
void error_msg(ErrCode e, initializer_list<string> li) {
	cout << e.msg() << ":";
	for (const auto& elem : li)
		cout << elem << " ";
	cout << endl;
}

// 提问：在error_msg函数的第二个版本中包含ErrCode类型的参数，其中循环内的elem是什么类型？

// initializer_list里面的元素是string类型，所以auto是 string 所以elem是 const string& 类型

