使用2.6.1节的 Sales_data 类，解释下面的初始化过程。如果存在问题，尝试修改它。

Sales_data item = { "987-0590353403", 25, 15.99 };

// 需要将Sales_data转换成聚合类才行

struct Sales_data {
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};