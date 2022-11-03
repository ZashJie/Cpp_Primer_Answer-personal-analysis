#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>
using std::string;// using std::

int main() {
	// fstream - 文件流 ifstream - 输入文件流（好记）
	std::ifstream ifs("file.txt");
	std::string buf;
	std::vector<std::string> svec;
	while (getline(ifs, buf)) {
		svec.push_back(buf);
	}
	

	for (auto& s : svec) {
		// istringstream - 输入字符串流（好记）
		std::istringstream iss(s);
		string word;
		while (iss >> word) {
			std::cout << word << "," ;
		}
		std::cout << std::endl;
	}



	return 0;
}