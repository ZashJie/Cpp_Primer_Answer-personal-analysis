#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	std::multimap<string, string> authors{
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" } };

	string author = "pezy";
	string work = "CP5";

	auto found = authors.find(author);
	auto count = authors.count(author);

	while (count) {
		if (found->second == work) {
			authors.erase(found);
			break;
		}
		++found;
		--count;
	}
	for (auto author : authors) {
		cout << author.first << " " << author.second << endl;
	}
}