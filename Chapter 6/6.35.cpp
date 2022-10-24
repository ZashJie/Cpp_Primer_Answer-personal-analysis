int factorial(int val) {
	if (val > 1)
		return factorial(val - 1) * val;
	return 1;
}

// 在调用factorial 函数时，为什么我们传入的值是 val-1 而非 val--？

// 那么将永远传入相同的数，传入--val还差不多