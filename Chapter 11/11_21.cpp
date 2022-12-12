// 假定word_count 是一个 string 到 size_t 的map，word 是一个string，解释下面循环的作用：
while (cin >> word)
	++word_count.insert({ word, 0 }).first->second;

// 添加关键字，给word_coun中没有的关键字添加后加上1，相同的关键字加上1
