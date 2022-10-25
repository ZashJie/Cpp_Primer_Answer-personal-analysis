char* init(int ht, int wd = 80, char bckgrnd = ' ');

(a)init();
// 错误，第一个不是默认参数，形参ht没有被唇乳，所以至少要传入一个参数

(b)init(24, 10);
// 正确，值为(24, 80, ' ')

(c)init(14, '*');
// 合法，但是与初衷不符，想要把*传给bckgrnd形参，但是实际上被转换成int类型，传到了wd形参中