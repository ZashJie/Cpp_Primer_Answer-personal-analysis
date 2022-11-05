// 对6种创建和初始化 vector 对象的方法，每一种都给出一个实例。解释每个vector包含什么值。
#include<iostream>
#include<vector>
using namespace std;

vector<int> v1;
vector<int> v2(10);
vector<int> v3(10, 3);
vector<int> v4{ 10, 3 };
vector<int> v5 = v4; // 答案没有这个，好像是错滴，不过不知道为什么
vector<int> v6(v1);
vector<int> v7(v4.begin(), v4.end());
