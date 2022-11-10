#include <iostream>
#include <string>
using namespace std;

string add_pre_and_suffix(string name, string const& pre, string const& su) {
	name.insert(name.begin(), pre.cbegin(), pre.cend());
	name.append(su);
	return name;
}


int main() {
	string name("Huang");
	cout << add_pre_and_suffix(name, "Mr.", "Jr.") << endl;
	return 0;
}