#include<iostream>
using namespace std;

bool is_big(const string& str) {
	for (auto s : str) {
		if(isupper(s))
			return true;
	}
	return false;
}
void to_lower(string& str) {
	for (auto& s : str) {
		s = tolower(s);
	}
}


int main() { 
	
	string hello("Hello World!");

	cout << is_big(hello) << endl;

	to_lower(hello);
	cout << hello << endl;

	
	return 0;
}