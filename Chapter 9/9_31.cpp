// 第316页中删除偶数值元素并复制奇数值元素的程序不能用于list或forward_list。为什么？修改程序，使之也能用于这些类型。
// 因为 iter += 2 应用不上  复合语句只能用于string vector deque array

// 若是list，可改为
list++;
list++;

// 若是 forward_list
auto prev = flst.before_begin();


curr == flst.insert_after(prev, *curr);
++curr; ++curr;
++prev; ++prev;

