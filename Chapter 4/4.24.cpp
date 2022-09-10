#include<iostream>
#include <vector>
using namespace std;

int main() {

/*
如果条件运算符满足的是左结合律。那么

finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";

等同于

finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";

假如此时 grade > 90 ，第一个条件表达式的结果是 "high pass" ，
而字符串字面值的类型是 const char *，非空所以为真。
因此第二个条件表达式的结果是 "fail"。这样就出现了自相矛盾的逻辑。



*/


	
	return 0;
}