#include<iostream>
#include<vector>
using namespace std;

int main() {

	int i = -30 * 3 + 21 / 5; // -90+4=-86
	cout << i << endl;
	// TRUE

	int j = -30 + 3 * 21 / 5; // -30+63/5 = 12-30=-18
	cout << j << endl;
	// TRUE

	int o = 30 / 3 * 21 % 5; // 10*21%5=210%5=0
	cout << o << endl;
	// TRUE

	int p = -30 / 3 * 21 % 4; // -10*21%4=-210%4=-2
	cout << p << endl;
	// TRUE 


	return 0;
}