// 在第316页的程序中，向下面语句这样调用insert是否合法？如果不合法，为什么？
iter = vi.insert(iter, *iter++);
// 不合法，因为参数的求职顺序是未指定的