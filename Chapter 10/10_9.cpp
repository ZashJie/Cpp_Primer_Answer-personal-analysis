#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<std::string>& elimDups(vector<string>& words) {
	sort(words.begin(), words.end());

	auto end_unique = unique(words.begin(), words.end());

	// 肇嶷
	words.erase(end_unique, words.end());

	return words;
}


int main() {

	vector<string> vs{ "a", "v", "a", "s", "v", "a", "a" };

	for (string i : vs) {
		cout << i << endl;
	}

	cout << "！！！！！！！！！！" << endl;

	for (string i : elimDups(vs)) {
		cout << i << endl;
	}

	return 0;
}
