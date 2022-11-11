#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main() {

	list<string> ls{ "aa", "aaa", "aa", "cc" };

	int i = count(ls.begin(), ls.end(), "aa");

	cout << i << endl;

	return 0;
}

