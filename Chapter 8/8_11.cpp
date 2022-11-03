#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>
using std::string; using std::cout; using std::endl; using std::cin; using std::vector;

struct PersonInfo {
	string name;
	vector<string> phones;
};


int main() {
	
	string line, word;
	vector<PersonInfo> people;

	std::istringstream record;

	while (getline(cin, line)) {

		PersonInfo info;
		record.clear();
		record.str(line);

		record >> info.name;
		while (record >> word) {
			info.phones.push_back(word);
		}
		people.push_back(info);
	}

	for (auto& s : people) {
		std::cout << s.name << " ";
		for (auto& p : s.phones) {
			cout << p << " ";
		}
		cout << endl;
	}

	return 0;
}