#include<iostream>
using namespace std;

bool str_subrange(const string& str1, const string& str2) {
	if (str1.size() == str2.size())
		return str1 == str2;
	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
	for (decltype(size) i = 0;i != size;++i) {
		if (str1[i] != str2[i]) {
			return true; 
		}
	}
	
}


// 1>D:\Microsoft Visual Studio\projects\C++Primer 练手\第六章\6.30.cpp(10,4): error C2561: “str_subrange”: 函数必须返回值
// 1 > D:\Microsoft Visual Studio\projects\C++Primer 练手\第六章\6.30.cpp(4) : message: 参见“str_subrange”的声明


int main() {




	return 0;
}