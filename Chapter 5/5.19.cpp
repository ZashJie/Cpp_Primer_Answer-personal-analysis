#include <string>
#include <iostream>
using namespace std;

int main() {

	string rsp;
	do {
		cout << "input two strings: " << endl;
		string str1, str2;
		cin >> str1 >> str2;
		cout << (str1 <= str2 ? str1 : str2)
			<< "is less than other" << endl
			<< "more? enter yer or no";
		cin >> rsp;

	} while (tolower(rsp[0] == 'y'));

	return 0;
}