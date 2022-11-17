仅根据算法和参数的名字，描述下面每个标准库算法执行什么操作：
replace(beg, end, old_val, new_val);
// 在两个迭代器范围内，新值替换旧值
replace_if(beg, end, pred, new_val);
// 在两个迭代器范围内，符合条件的性质替换旧值
replace_copy(beg, end, dest, old_val, new_val);
// 将两个迭代器范围内的元素到目标迭代器的位置，如果元素等于某个旧值，则用新值替换
replace_copy_if(beg, end, dest, pred, new_val);
// 将两个迭代器范围内的元素到目标迭代器的位置，如果符合条件的性质替换旧值，则用新值替换

