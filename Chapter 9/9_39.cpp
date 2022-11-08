vector<string> svec;
svec.reserve(1024);
string word;
while (cin >> word)
	svec.push_back(word);
svec.resize(svec.size() + svec.size() / 2);

//
// 定义了一个容纳string类型的vector容器，为其分配1024个元素的空间，
// 定义一个string类型的变量，通过循环从标准输入中读取字符串添加到vector当中，
// 循环结束后，改变vector的内容大小为原来的1.5倍，用元素默认值来填充 
// 
//