// 
// 假定Sales_data 的构造函数不是explicit的，则下述定义将执行什么样的操作？
string null_isbn("9-999-9999-9");
Sales_data item1(null_isbn);
Sales_data item2("9-999-99999-9");
// 
// 上述代码没有进行类型转换
//
