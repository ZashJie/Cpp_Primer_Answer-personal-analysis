// Ñ¡Ôñ(b) Data
#include<iostream>

class Data {
public:
	Data(int year, int month, int day) :year_(year), month_(month), day_(day)
	{ }
	explicit Data(std::istream& is) {
		is >> year_ >> month_ >> day_;
	}

private:
	int year_;
	int month_;
	int day_;

};