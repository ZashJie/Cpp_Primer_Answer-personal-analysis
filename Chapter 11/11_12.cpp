#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	vector<pair<string, int>> vec;

	string str;

	int i;

	while (cin >> str >> i) {
		vec.push_back(pair<string, int>(str, i));
	}

	for (auto i : vec) {
		cout << i.first << ":" << i.second << endl;
	}

	return 0;
}