// 调用了 Sales_data(std::istream &is) { read(is, *this); }
// 成员由输入决定
Sales_data first_item(cin); 
int main() {
	// 调用了 默认构造
	// 成员为 bookNo = "", cnt = 0, revenue = 0.0
	Sales_data next; 

	// 调用了 Sales_data(std::straing s = "")
	// 成员为 bookNo = "9-999-99999-9", cnt = 0, revenue = 0.0
	Sales_data last("9-999-99999-9");
}