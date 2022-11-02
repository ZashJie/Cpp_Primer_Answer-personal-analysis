#include <iostream>

std::istream& func(std::istream& is) {
	
	std::string buf;
	while (is>>buf) {
		std::cout << buf << std::endl;
	}
	buf.clear();
	return is;

}