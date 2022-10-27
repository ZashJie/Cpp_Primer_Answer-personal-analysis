#include<iostream>
#include<string>
using std::string;
struct Person {

	string name;
	string addr;

	std::string const& get_name() const { return name; }
	std::string const& get_addr() { return addr; }

};


std::istream& read(std::istream &is, Person& item) {
	return is >> item.name >> item.addr;
}

std::ostream& print(std::ostream& os, Person& item) {
	return os << item.name << " " << item.addr << std::endl;
}

