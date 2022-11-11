#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {

	vector<double> dv{ 1.1, 0.1, 3.3 };
	cout << accumulate(dv.cbegin(), dv.cend(), 0) << endl;
	
	auto s = accumulate(dv.cbegin(), dv.cend(), 0);
	// 返回类型是整型

	return 0;
}