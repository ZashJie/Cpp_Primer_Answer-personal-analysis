// 解释下面代码执行的结果。

int* q = new int(42), * r = new int(100);
r = q;
auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
r2 = q2;

// 指针r和q指向42，而存放值100的内存空间没有释放而导致内存泄露，而智能指针r2和q2都指向42,100的内存因为没有指针指向而自动释放