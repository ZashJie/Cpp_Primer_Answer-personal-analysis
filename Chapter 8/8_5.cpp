#include <vector>
#include <iostream>
#include<string>
#include <fstream>
// 使用文件流就要加fstream参数
using namespace std;


void ReadFileToVec(const string& filename, vector<string>& vec) {
	ifstream ifs(filename);
	if (ifs) {
		string buf;
		while (ifs>>buf) {
			vec.push_back(buf);
		}
	}
}


int main() {
	vector<string> vec;
	// 文件名要加后缀
	ReadFileToVec("file.txt", vec);
	for (auto i : vec) {
		cout << i << endl;
	}
	return 0;
}