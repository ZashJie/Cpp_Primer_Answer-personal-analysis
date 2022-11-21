#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	map<string, vector<string>> m;
	for (string ln;cout << "家庭的姓为:\n", cin >> ln && ln != "@q";) {
		for (string cn; cout << "|-孩子的名为:\n", cin >> cn && cn != "@q";) {
			m[ln].push_back(cn);
		}
	}

	return 0;
}