#include <iostream>
using namespace std;

// 返回数的阶层
int fact(int x) {

	return x > 1 ? x*fact(x - 1) : 1;

}


int main() {

	int x;
	cin >> x;
	cout << fact(x) << endl;

	return 0;
}
// 输入 5
// 输出 120