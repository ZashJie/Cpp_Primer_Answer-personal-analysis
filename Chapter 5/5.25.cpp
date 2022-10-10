#include<iostream>
#include <stdexcept>
using namespace std;

int main() {


	int a;
	int b;
	
	while (cin >> a >> b) {
		try {
			if (b == 0) {
				throw runtime_error("除数不能为零");
			}
			cout << a / b << endl;
		}
		catch (runtime_error err) {
			cout << err.what() << "\n 再试一次？ 输入 y 或者 n" << endl;
			// err.what() 错误的信息；
			char c;
			cin >> c;
			if (c != 'y')
				break;
		}
	}


	return 0;
}