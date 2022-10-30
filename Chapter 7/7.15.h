#include<iostream>
#include<string>
#include<iostream>

using std::string;
struct Person {

	string name;
	string addr;

	Person() = default;
	Person(const std::string& sname, const std::string& saddr) :name(sname), addr(saddr) { }
	Person(std::istream& is) { read(is, *this); }

	std::string const& get_name() const { return name; }
	std::string const& get_addr() { return addr; }

};


std::istream& read(std::istream& is, Person& item) {
	return is >> item.name >> item.addr;
}

std::ostream& print(std::ostream& os, Person& item) {
	return os << item.name << " " << item.addr << std::endl;
}

