#include<iostream>
using std::string;
class Person {
private:
	string name;
	string addr;
public:
	auto get_name() const -> std::string const& { return name; }
	auto get_addr() const -> std::string const& { return addr; }

};