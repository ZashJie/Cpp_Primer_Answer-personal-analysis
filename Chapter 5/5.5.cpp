#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	
	const vector<string> scores = { "F","D","C","B","A","A++" };

	int g;
	for (;cin >> g;) {
		string letter;
		if (g < 60) {
			letter = scores[0];
		}
		else {
			g = (g - 50) / 10;

			letter = scores[g];


		}
		cout << letter;
	}

	return 0;
}