#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main() {

	list<const char*> cli{"hello", "world"};
	vector<string> svec;

	svec.assign(cli.begin(), cli.end());
	
	for (auto& i : svec) {
		cout << i << endl;
	}

	return 0;
}
