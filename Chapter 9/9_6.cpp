// 下面的程序有何错误？你应该如何修改它？
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
while (iter1 < iter2) /* ... */

// 应该改为

list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
while (iter1 != iter2) /* ... */
// 迭代器怎么可能能比大小