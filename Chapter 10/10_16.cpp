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
	stable_sort(words.begin(), words.end(), [](const string& a, const string& b) {
		return a.size() < b.size();
		});
	auto wc = find_if(words.begin(), words.end(), [sz](const string& a) {
		return a.size() >= sz;
		});

	auto count = words.end() - wc;

	for_each(wc, words.end(),
		[](const string& s) {
			cout << s << " ";
		});
}

int main() {
	vector<std::string> v{ "1234", "1234", "1234", "hi~", "alan", "alan", "cp" };
	cout << "10.16: ";
	biggies(v, 3);
	cout << endl;
	return 0;
}