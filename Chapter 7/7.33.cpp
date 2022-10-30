// 如果我们给Screen 添加一个如下所示的size成员将发生什么情况？如果出现了问题，请尝试修改它。
//
pos Screen::size() const
{
	return height * width;
}

// pos在类外部没有定义
Screen::pos Screen::size() const
{
	return height * width;
}