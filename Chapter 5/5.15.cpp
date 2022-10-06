

//(a) 
for (int ix = 0; ix != sz; ++ix) { /* ... */ }
if (ix != sz)
// . . .
// 在for循环作用域中定义的ix，在下一个if语句前ix变量就被自动销毁了，所以要这样
int ix;
for (ix = 0; ix != sz; ++ix) { /* ... */ }
if (ix != sz)

//(b)
int ix;
for (ix != sz; ++ix) { /* ... */ }
// 不符合for循环的语法，所以应该要这样
int ix;
for (;ix != sz; ++ix) { /* ... */ }

//(c) 
for (int ix = 0; ix != sz; ++ix, ++sz) { /*...*/ }
// 这个循环永远都结束不了，所以要这样
for (int ix = 0; ix != sz; ++ix) { /*...*/ }


