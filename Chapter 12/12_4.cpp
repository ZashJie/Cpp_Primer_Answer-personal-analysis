// 在我们的 check 函数中，没有检查 i 是否大于0。为什么可以忽略这个检查？
// 因为i是size_type类型，当传递给check的参数小于0的时候，参数会转换成一个正整数；
//