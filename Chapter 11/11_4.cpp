#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	map<string, size_t> word_account;
	string word;

	while (cin >> word)
	{
		for (auto& ch : word)
			ch = tolower(ch);

		word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());

		++word_account[word];
	}

	for (const auto& elem : word_account)
	{
		cout << elem.first << ":" << elem.second << endl;
	}

	return 0;
}