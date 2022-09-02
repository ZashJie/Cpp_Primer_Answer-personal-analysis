#include <iostream>
#include <vector>
using namespace std;

int txt_size() {
	return 1;
}

int main() {
	
	unsigned buf_size = 1024;

	// int ia[buf_size];
	// 非法，表达式必须为常量

	int ia2[4 * 7 - 14];
	// OK

	int ia3[txt_size()];
	// 非法，标准答案为txt_size()的值必须要到运行时才能得到

	char st[11] = "fundamental";

	// 非法，字符串后边还需自动加上空字符，但是并没有给它预留空间

	return 0;
}