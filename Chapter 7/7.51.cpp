//
// vector 将其单参数的构造函数定义成 explicit 的，而string则不是，你觉得原因何在？
// 
// vector在只接收到一个单个数后进行类型转换 就没有意义了， 但是string的换类型转换后本质还是一样的
// 我认为主要看，隐式转换后还能不能将函数的意义体现出来
//