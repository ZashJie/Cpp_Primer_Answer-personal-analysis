#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	// 统计有多少个元音字母，相较于5.9能够捕捉大写的元音字母了
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, kCnt = 0, zCnt = 0, hCnt = 0, fiCnt = 0, flCnt = 0, ffCnt = 0;
	char ch,prech='\0';
	while (cin >> noskipws >> ch) {
		switch (ch) {
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
			if (prech == 'f')
				++fiCnt;
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case '\t':
			++zCnt;
			break;
		case ' ':
			++kCnt;
			break;
		case '\n':
			++hCnt;
			break;
		case 'f':
			if (prech == 'f')
				++ffCnt;
		case 'l':
			if (prech == 'f')
				++flCnt;
			prech = ch;
		}
	}
	cout << "a::" << aCnt << endl
		<< "e::" << eCnt << endl
		<< "i::" << iCnt << endl
		<< "o::" << oCnt << endl
		<< "u::" << uCnt << endl
		<< "制表符::" << zCnt << endl
		<< "空格::" << kCnt << endl
		<< "换行符::" << hCnt << endl
		<< "fi::" << hCnt << endl
		<< "fl::" << hCnt << endl
		<< "ff::" << hCnt << endl;

	

	return 0;
}