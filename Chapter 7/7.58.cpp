//下面的静态数据成员的声明和定义有错误吗？请解释原因。

//example.h
class Example {
public:
	static double rate = 6.5;
	static const int vecSize = 20;
	static vector<double> vec(vecSize);
};
//example.c
#include "example.h"
double Example::rate;
vector<double> Example::vec;

// 静态成员初始化要求静态成员是字面值常量类型的constexpr，所以vec不行

// 修改如下
// example.h
class Example {
public:
	static constexpr double rate = 6.5;
	static const int vecSize = 20;
	static vector<double> vec;
};

// example.C
#include "example.h"
constexpr double Example::rate;
vector<double> Example::vec(Example::vecSize);