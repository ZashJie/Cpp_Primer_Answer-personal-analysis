// 对于combine 函数的三种不同声明，当我们调用i.combine(s) 时分别发生什么情况？其中 i 是一个 Sales_data，而 s 是一个string对象。
(a)Sales_data& combine(Sales_data); // 可以的
(b)Sales_data& combine(Sales_data&); // 无法将参数从“std::string”转换为“Sales_data &”
(c)Sales_data& combine(const Sales_data&) const; // 函数成员是const，改变不了对象