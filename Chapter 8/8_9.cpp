#include <iostream>
#include <sstream>
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

	istringstream iss("hello world");
	func(iss);

	return 0;
}