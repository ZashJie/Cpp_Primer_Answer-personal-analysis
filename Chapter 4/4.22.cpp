#include<iostream>
#include <vector>
using namespace std;

int main() {

	int grade;
	string finalgrade;
	cin >> grade;
	finalgrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail";
	cout << finalgrade;

	int grade1;
	string finalgrade1;
	cin >> grade1;
	
	if (grade > 90) {
		finalgrade1 = "high pass";
	}
	else if (grade > 75) {
		finalgrade1 = "pass";
	}
	else if (grade > 60) {
		finalgrade1 = "low pass";
	}
	else {
		finalgrade1 = "fail";
	}

	cout << finalgrade1;

	// 第二版更好理解，但第一版更加快速方便；第二版一看就能看出程序想要表达出的意思来，但是第一版看的有点眼花，还需理解一会才能理解意思。


	return 0;
}