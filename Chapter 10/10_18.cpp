#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void elimDups(vector<string>& vs) {
	sort(vs.begin(), vs.end());
	auto new_end = unique(vs.begin(), vs.end());

}

void biggies(vector<string>& words, vector<string>::size_type sz) {
	elimDups(words);

	auto wc = partition(words.begin(), words.end(), [sz](const string& a) {
		return a.size() >= sz;
		});

	auto count = words.end() - wc;

	for_each(wc, words.end(),
		[](const string& s) {
			cout << s << " ";
		});
}

int main() {
	vector<std::string> v{ "the", "quick", "red", "fox", "jumps",
		"over", "the", "slow", "red", "turtle" };

	cout << "10.16: ";
	biggies(v, 4);
	cout << endl;
	return 0;
}