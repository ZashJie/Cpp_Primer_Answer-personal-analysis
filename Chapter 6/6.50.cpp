(a)f(2.56, 42)
f(double, double=3.14), f(int, int) 是可行函数，没有最佳具有二义性而不合法
(b)f(42)
f(int) f(int, int)是可行函数，f(int)是最佳匹配
(c)f(42, 0)
f(int, int)，f(double, double = 3.14)是可行函数，f(int, int)是最佳匹配
(d)f(2.56, 3.14)
f(double, double)，f(int, int)是可行函数，f(double, double)是最佳匹配