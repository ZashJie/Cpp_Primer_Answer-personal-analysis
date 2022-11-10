// npos是一个ungigned类型
#include <iostream>
#include <string>
using namespace std;

int main() {

	string numbers("0123456789");
	string s("ab2c3d7R4E6");

	cout << "数字：";
	for (int pos = 0;(pos = s.find_first_of(numbers, pos)) != string::npos;pos++) {
		cout << s[pos] << " ";
	}
	cout << "\n字母: ";
	for (int pos = 0;(pos = s.find_first_not_of(numbers, pos)) != string::npos;pos++) {
		cout << s[pos] << " ";
	}

	return 0;
}