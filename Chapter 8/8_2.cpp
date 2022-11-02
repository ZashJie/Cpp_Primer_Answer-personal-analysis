#include<iostream>
using namespace std;

std::istream& func(std::istream& is) {

	std::string buf;
	while (is >> buf) {
		std::cout << buf << std::endl;
	}
	buf.clear();
	return is;

}

int main() {

	istream& is = func(cin);
	cout << is.rdstate() << endl;

	return 0;
}