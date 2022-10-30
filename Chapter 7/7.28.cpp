//
// 如果move、set和display函数的返回类型不是Screen& 而是Screen，则在上一个练习中将会发生什么？
// myScreen.move(4, 0).set('#').display(std::cout);
// 如果返回类型为Screen的话，那么返回的就是一个临时副本，set函数只能改变临时副本的值，而不能改变myScreen的值
//