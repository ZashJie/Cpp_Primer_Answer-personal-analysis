#include <iostream>
using namespace std;

// 返回数的阶层
int fact(int x) {

	return x > 1 ? x * fact(x - 1) : 1;

}


int main() {

	int x;
	cout << "请输入1到13之间的数字:" << endl;
	while (cin >> x) {
		if (x < 1 || x>13) {
			cout << "错误，请输入1到13之间的数字:" << endl;

			continue;
		}
		cout << fact(x) << endl;
		cout << "请输入1到13之间的数字:" << endl;
	}
	
	

	return 0;
}
// 输入 5
// 输出 120