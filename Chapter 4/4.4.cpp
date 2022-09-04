#include<iostream>
#include<vector>
using namespace std;

int main() {

	int i = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << i << endl;
	//91
	int j = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);
	cout << j << endl;
	//91
	return 0;
}