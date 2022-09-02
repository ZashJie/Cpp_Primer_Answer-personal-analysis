#include<iostream>
using namespace std;
#include <vector>

int main() {

	vector<int> ia;
	
	for (int i = 0;i < 10;i++) {
		ia.push_back(i);
	}

	for (int i : ia) {
		cout << i << endl;
	}

	return 0;
}