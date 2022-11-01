// 确定在你的Person 类中是否有一些构造函数应该是 explicit 的。

explicit Person(std::istream& is) { read(is, *this); }