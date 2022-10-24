(a) int calc(int, int);
int calc(const int, const int);

// 非法，顶层consr不影响传入函数的对象，无法区分开来

// 如果形参是某种类型的指针或引用，则可以通过区分其指向的是常量对象还是非常量对象进行重载

(b) int get();
double get();

// 非法，重载函数不能重载返回值类型，可以重载形参数量和类型

(c) int* reset(int*);
double* reset(double*);

// 合法