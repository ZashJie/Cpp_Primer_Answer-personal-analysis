#include <iostream>
using namespace std;

int generate()
{
	static int ctr = 0;
	return ctr++;
}

int main() {

	cout << generate() << endl;
	cout << generate() << endl;

	return 0;

}