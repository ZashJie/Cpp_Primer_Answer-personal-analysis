#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;


int main() {

	vector<int> v;
	istream_iterator<int> int_it(cin), int_eof;

	unique_copy(int_it, int_eof, back_inserter(v));
	sort(v.begin(), v.end());

	unique_copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));


	return 0;
}