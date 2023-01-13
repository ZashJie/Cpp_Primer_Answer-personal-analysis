// 下面的函数是否有错误？如果有，解释错误原因。

bool b() {
	int* p = new int;
	// ...
	return p;
}

// 没有释放指针p