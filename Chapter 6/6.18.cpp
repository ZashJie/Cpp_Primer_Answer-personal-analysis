#include <iostream>
#include <vector>

// (a) 名为 compare 的函数，返回布尔值，两个参数都是 matrix 类的引用。
bool compare(matrix& x1, matrix& x2);

// (b)名为 change_val 的函数，返回vector的迭代器，有两个参数：一个是int，另一个是vector的迭代器。
vector<int>::iterator  change_val(int, vector<int>::iterator);