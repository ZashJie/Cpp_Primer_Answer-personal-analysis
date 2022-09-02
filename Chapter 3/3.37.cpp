#include <iostream>
#include <vector>
using namespace std;

int main() {

	const char ca[] = { 'h', 'e', 'l', 'l','o' };
	const char* cp = ca;	// 指针常量（指向常量的指针），cp不能改变ca的数值
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	// cp将字符数组中的元素都打印出来，但是因为没有空字符的存在，程序不会退出循环

	return 0;
}