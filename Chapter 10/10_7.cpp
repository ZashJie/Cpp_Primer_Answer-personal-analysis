// 下面程序是否有错误？如果有，请改正：


(a)
vector<int> vec; list<int> lst; int i;
while (cin >> i)
	lst.push_back(i);
copy(lst.cbegin(), lst.cend(), vec.begin());

// 应该加个 vec.resize(vec.size()) ，因为copy的时候要保证目标序列跟输入序列一样多的元素

(b)
vector<int> vec;
vec.reserve(10);
fill_n(vec.begin(), 10, 0);

// 语句没有错误，但是没有达到想要表达的目的
// vec.reserve(10) 改为 vec.resize(10)

