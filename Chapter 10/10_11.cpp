#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool cmp(string const& lhs, string const& rhs) {
	return lhs.size() < rhs.size();
}


void elimDups(vector<string>& words) {
	sort(words.begin(), words.end());

	auto end_unique = unique(words.begin(), words.end());

	// 肇嶷
	words.erase(end_unique, words.end());

}


int main() {

	vector<string> vs{ "1234", "1234", "1234", "Hi", "alan", "wang" };

	for (string i : vs) {
		cout << i << endl;
	}

	cout << "！！！！！！！！！！" << endl;

	elimDups(vs);

	stable_sort(vs.begin(), vs.end(), cmp);

	for (string i : vs) {
		cout << i << endl;
	}

	cout << "！！！！！！！！！！" << endl;

	sort(vs.begin(), vs.end(), cmp);

	for (string i : vs) {
		cout << i << endl;
	}

	return 0;
}
