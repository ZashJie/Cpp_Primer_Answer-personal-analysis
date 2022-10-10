#include<iostream>
#include<string>
using namespace std;

int main() {

begin:
	int sz = get_size();
	if (sz <= 0) {
		goto begin;
	}
	// 如果大小小于等于零的话就重新获取


	// 换成循环
	int sz=get_size();
	while (sz<=0) {
		sz = get_size();

	}


	return 0;
}