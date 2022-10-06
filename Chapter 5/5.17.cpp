#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

	vector<int> vec1{ 0,1,1,2 };
	vector<int> vec2{ 0,1,1,2,3,5,8 };


	//int minvec = vec1.size() > vec2.size() ? vec1.size() : vec2.size();   这个不知道为什么不行
	int minvec;
	if (vec1.size() > vec2.size()) {
		minvec = vec2.size();
	}
	else {
		minvec = vec1.size();
	}


	for (unsigned i = 0;i < minvec;i++) {
		if (vec1[i] != vec2[i]) {
			cout << "不匹配！" << endl;
			return 0;
		}
	}
	cout << "匹配的很！！" << endl;

	return 0;
}