#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void find_not_in(const string& s, string& result) {
	string not_in("dfpg");
	// 反正不包含那些上出头、下出头的字母就对了
	int size;
	if (s.find_first_of(not_in) == string::npos) {
		result = result.size() < s.size() ? s : result;
	}
}


int main() {
	ifstream ifs("./letter.txt");
	if (!ifs) {
		return -1;
	}
	string longest;

	for (string curr; ifs >> curr;) {
		find_not_in(curr, longest);
	}
	cout << longest << endl;

	return 0;
}