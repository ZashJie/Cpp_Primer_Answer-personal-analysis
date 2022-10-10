#include<iostream>
#include<stdexcept>		// 
using namespace std;

int main() {


	int a;
	int b;
	cin >> a >> b;
	if (b == 0)
	{
		throw runtime_error("除数不能为零");
		cout << "dddd";						// 并没有输出dddd
	}

	cout << a / b;


	return 0;
}