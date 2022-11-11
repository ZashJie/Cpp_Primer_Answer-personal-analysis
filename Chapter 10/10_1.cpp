#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector<int> v{ 1,2,3,4,1,2,11,3,2 };

	int i = count(v.begin(), v.end(), 1);
	
	cout << i << endl;

	return 0;
}