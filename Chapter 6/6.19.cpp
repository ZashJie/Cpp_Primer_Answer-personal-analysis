double calc(double);
int count(const string&, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);

(a)calc(23.4, 55.1);		// 不合法，声明只有一个参数
(b)count("abcda", 'a');		// 合法
(c)calc(66);				// 合法
(d)sum(vec.begin(), vec.end(), 3.8);	// 合法


