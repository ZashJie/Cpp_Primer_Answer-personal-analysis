// 定义一个变量，通过对11.2.2节中的名为 bookstore 的multiset 调用begin()来初始化这个变量。写出变量的类型，不要使用auto 或 decltype。
//  

using compareType = bool (*)(const Sales_data& lhs, const Sales_data& rhs);
std::multiset<Sale_data, compareType> bookstore(compareIsbn);
std::multiset<Sale_data, compareType>::iterator c_it = bookstore.begin();