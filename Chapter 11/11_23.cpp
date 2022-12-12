// 11.2.1节练习中的map 以孩子的姓为关键字，保存他们的名的vector，用multimap 重写此map。

#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
	multimap<string, string> families;

	for (string lname, cname; cin >> cname >> lname; families.emplace(cname, lname));
	
	for (auto const& family : families) {
		cout << family.first << " " << family.second << endl;
	}


}