// 说明接受一个string 参数的Sales_data构造函数是否应该是explicit的，并解释这样做的优缺点。
//
// 如果给Sales_data的构造函数explicit的话，不会有从string到Sale_data的转换了
// 那么在这里可能是对的，防止不正规的编号进入
// 
// 缺点是：要进行转换的话，要显示地使用构造函数
//