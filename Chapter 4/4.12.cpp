#include<iostream>
#include<vector>
using namespace std;

int main() {

	int i = 1;
	int j = 2;
	int k = 3;
	if ((i != j) < k) {
		cout << "i不等于j返回1,1<3返回1" << endl;
	}
	if (i != j < k) {
		cout << "i不等于j返回1,1<3返回1" << endl;
	}
	else {
		cout << "<优先级更高，j<k返回1，i等于1，返回0" << endl;
	}


	return 0;
}