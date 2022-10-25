
vector<decltype(func)*> v;
// func表示的本质其实是形参是两个int类型，返回类型也是int类型的函数

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

v.push_back(add);
v.push_back(subtract);
v.push_back(multiply);
v.push_back(divide);


