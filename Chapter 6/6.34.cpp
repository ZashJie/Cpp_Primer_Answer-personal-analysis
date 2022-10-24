int factorial(int val) {
	if (val > 1)
		return factorial(val - 1) * val;
	return 1;
}
// 如果把判断条件改为  if(val!=0) 的话

// 输入是负数就会进入死循环