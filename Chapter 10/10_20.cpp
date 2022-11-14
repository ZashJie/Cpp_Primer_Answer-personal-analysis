#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

size_t bigerThan6(const vector<string>& v) {
	return count_if(v.begin(), v.end(), [](const string& v) {
		return v.size() > 6;
		});
}

int main() {

	vector<string> v{ "1234", "123456", "1234567", "1234567", "1234567", "1234567" };

	cout << bigerThan6(v) << endl;


	return 0;
}