struct X {
	X(int i, int j) : base(i), rem(base% j) {}
	int rem, base;
};
改为
struct X {
	X(int i, int j) : base(i), rem(base% j) {}
	int base, rem;
};

// 成员初始化的顺序与它们在类定义中出现的顺序一致
