#include<iostream>
#include<fstream>
// 用新函数重写7.3的程序
using std::cin;	using std::cout; using std::endl;  using std::string;
using std::ifstream; using std::ofstream;
int main(int argc, char** argv) {

	ifstream input(argv[1]);
	ofstream output(argv[2], ofstream::app);

	Sales_data total;
	if (read(input, total)) {
		Sales_data trans;
		while (read(input, trans)) {
			if (total.bookNo == trans.bookNo) {
				total.combine(trans);
			}
			else {
				print(output, total) << endl;
			}
		}
	}
	else {
		std::cerr << "没有数据" << endl;
		return -1;
	}
	return 0;
}


#include <string>
#include <iostream>


struct Sales_data {
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

// 定义类相关的非成员函数
std::istream& read(std::istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

std::ostream& print(std::ostream& os, Sales_data& item) {
	os << item.bookNo << " " << item.units_sold << " " << item.revenue;
	return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
