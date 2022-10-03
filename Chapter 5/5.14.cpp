#include<iostream>
#include<string>

using namespace std;

int main() {

	pair<string, int> max_duplicated;
	int count = 0;
	for (string str, prestr;cin >> str;prestr = str) {
		if (str == prestr) {
			++count;
		}
		else {
			count = 0;
		}
		if (count > max_duplicated.second) max_duplicated = { str,count };
	}
	if (max_duplicated.first.empty()) cout << "no" << endl;
	else cout << "the word:" << max_duplicated.first << "\toccured" << max_duplicated.second +1<< "times" << endl;
	// 程序统计重复多少次，重复两次证明总共出现三次

	return 0;
}