// 我们未编写接受一个 initializer_list explicit 参数的构造函数。讨论这个设计策略的优点和缺点。
// 构造函数没有explicit修饰，所以可以从initializer_list隐式转换为StrBlob，这是它的优点
// 而缺点是当我们真的需要initializer_list的时候，编译器也会转换成StrBlob
//