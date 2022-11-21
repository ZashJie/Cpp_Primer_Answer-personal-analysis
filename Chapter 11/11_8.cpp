#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<string> words{ "aa", "bb", "cc", "dd", "ee", "ff" };

	for (string word; cout << "ÇëÊäÈë£º\n", cin >> word;) {
		auto is_excluded = binary_search(words.begin(), words.end(), word);
		if (is_excluded) {
			cout << "ÖØ¸´" << endl;
		}
		else
		{
			words.push_back(word);
		}
	}

	for (auto i : words) {
		cout << i << endl;
	}

	return 0;
}
