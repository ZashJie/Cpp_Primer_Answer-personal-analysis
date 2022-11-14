#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool isLeesser(const string& s, string::size_type sz) {
	return s.size() <= sz;
}

int main() {

	vector<string> authors{ "1234567", "1234", "1234567890", "1234567", "12345" };
	cout << count_if(authors.begin(), authors.end(), bind(isLeesser, _1, 6)) << endl;

	return 0;
}