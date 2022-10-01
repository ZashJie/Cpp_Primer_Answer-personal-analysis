#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	// 用if语句来统计有多少个元音字母
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch) {
		if (ch == 'a') aCnt++;
		else if (ch == 'e') eCnt++;
		else if (ch == 'i') iCnt++;
		else if (ch == 'o') oCnt++;
		else if (ch == 'u') uCnt++;
	}
	cout << "a::" << aCnt << endl
		<< "e::" << eCnt << endl
		<< "i::" << iCnt << endl
		<< "o::" << oCnt << endl
		<< "u::" << uCnt << endl;

	// 输入：qwertyuiop
	// 输出：a::0
	// e::1
	// i::1
	// o::1
	// u::1

	return 0;
}