#include<iostream>
using namespace std;

void print(int(&arr)[2]) {
	for (auto i : arr) {
		cout << i << endl;
	}
}
void print(int i) {
	cout << i << endl;
}
void print(const int* beg, const int* end) {
	while (beg != end) {
		cout << *beg++ << endl;
	}
}
void print(const int i[], size_t size) {
	for (size_t i = 0;i != size;++i) {
		cout << i << endl;
	}
}


int main() {

	int i = 0, j[2] = { 0,1 };
	print(i);
	print(j);
	print(begin(j), end(j));
	print(j, end(j) - begin(j));


	return 0;
}