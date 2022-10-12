(a) int f() {
    string s;
    // ...
    return s;
    }

// 改
string f() {
    string s;
    return s;
}


(b)f2(int i) { /* ... */ }

// 没有返回类型
void f2(int i)


(c) int calc(int v1, int v1) { /* ... */ }



(d) double square(double x)  return x * x;

double square(double x) { return x * x };