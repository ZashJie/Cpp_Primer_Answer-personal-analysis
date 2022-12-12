// 定义一个变量，通过对11.2.2节中的名为 bookstore 的multiset 调用begin()来初始化这个变量。写出变量的类型，不要使用auto 或 decltype。



#include <iostream>
#include <set> 
#include "Sales_data.h"

using namespace std;

bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main()
{
    //multiset<Sales_data,decltype(compareIsbn)*> bookstore(compareIsbn);

    //F是函数类型，不是指针，F*是一个带指针的复合类型，参考P223页 
    using Z = bool(const Sales_data&, const Sales_data&);
    multiset<Sales_data, Z*> bookstore(compareIsbn);

    multiset<Sales_data, Z*>::iterator it = bookstore.begin();
}