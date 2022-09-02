#include <iostream>
#include <vector>
using namespace std;

int main() {
	constexpr size_t array_size = 10;
	// size_t 专门用于数组下标，其被设计得足够大能表示内存中的任意对象大小
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size; ++ix) {
		ia[ix] = ix;
	}
	//ia数组大小为10，但是这个for循环却给第十一个位置赋值
	return 0;
}