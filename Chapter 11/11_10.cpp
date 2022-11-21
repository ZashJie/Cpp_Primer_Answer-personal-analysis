// 可以定义一个vector::iterator 到 int 的map吗？list::iterator 到 int 的map呢？对于两种情况，如果不能，解释为什么。
//
// 可以定义一个vector<int>::iterator到int的map，因为该迭代器有比较操作
// 但是不能定义一个list<int>:iterator到int的map，因为该迭代器没有比较操作
//