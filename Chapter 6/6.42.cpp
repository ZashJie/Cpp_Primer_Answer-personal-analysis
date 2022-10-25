#include <iostream>
using namespace std;

string make_plural(size_t ctr, string word, const string& s2 = "s") {
	return ctr > 1 ? word + s2 : word;
}


int main() {

	cout << "1:" << make_plural(1, "success", "es") << " "
		<< make_plural(1, "failure") << endl;
	cout << "2:" << make_plural(2, "success", "es") << " "
		<< make_plural(2, "failure") << endl;

	return 0;
}