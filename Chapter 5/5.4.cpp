/*

(a) while (string::iterator iter != s.end()) {  }
(b) while (bool status = find(word)) {  }
		if (!status) {  }
(a)这个循环试图用迭代器遍历string，但是变量的定义应该放在循环的外面，
	目前每次循环都会重新定义一个变量，明显是错误的。
(b) 这个循环的 while 和 if 是两个独立的语句，if 语句中无法访问 status 变量，
	正确的做法是应该将 if 语句包含在 while 里面，

*/