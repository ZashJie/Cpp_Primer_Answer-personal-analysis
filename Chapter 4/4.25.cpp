#include<iostream>
#include <vector>
using namespace std;

int main() {

	int i = 'q';
	cout << i << endl;//113
	int j = 'q' << 6;
	cout << j << endl;//7232
	int o = ~'q' << 6;
	cout << o << endl;


	return 0;
}