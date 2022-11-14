#include "7_26.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;



int main() {

	Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");

	vector<Sales_data> sav{ d1, d2, d3, d4, d5 };

	sort(sav.begin(), sav.end(), [](const Sales_data& sd1, const Sales_data& sd2) {
		return sd1.isbn().size() < sd2.isbn().size();
		});

	for (const auto& element : sav)
		cout << element.isbn() << " " << endl;

	return 0;
}
