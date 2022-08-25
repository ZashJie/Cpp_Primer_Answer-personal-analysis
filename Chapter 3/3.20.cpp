#include <iostream>
using namespace::std;
#include <vector>
#include <string>


int main() {

	vector<int> v;
	int i;
	while (cin >> i) {
		v.push_back(i);
	}

	for (int i = 0;i < v.size() - 1;i++) {
		cout << v[i] + v[i + 1] << endl;
	}
	
	cout << "！！！！！！！！！！！！！！！！" << endl;

	int n = 0;
	int m = v.size()-1;


	while (n < m) {
		cout << v[n] + v[m] << endl;
		n++;
		m--;
	}

	return 0;
}