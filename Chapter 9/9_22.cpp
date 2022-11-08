// 假定iv是一个int的vector，下面的程序存在什么错误？你将如何修改？
vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
while (iter != mid)
	if (*iter == some_val)
		iv.insert(iter, 2 * some_val);

// 死循环


vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
while (iter != mid) {
	if (*iter == some_val) {
		iv.insert(iter, 2 * some_val);
		// 不给迭代器加指向的是我们加上的元素
		iter++;
	}
	iter++;
}
	