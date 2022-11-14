#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool cmp(const std::string& a) {
	return a.size() >= 5;
}

int main() {

	auto v = std::vector<std::string>{ "a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa" };
	auto pivot = std::partition(v.begin(), v.end(), cmp);

	for (auto it = v.cbegin(); it != pivot; it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return 0;
}