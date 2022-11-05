#include<iostream>
#include<vector>
using namespace std;
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it3 = v1.cbegin(), it4 = v2.cbegin();
// 上述代码有报错，auto后面一定要是同一个类型的 it1 跟 it2并不是同一个类型
// 所以将代码改为
auto it1 = v1.begin(); // it1是iterator
auto it2 = v2.begin(), it3 = v1.cbegin(), it4 = v2.cbegin(); //it2,it3,it4是iterator类型

