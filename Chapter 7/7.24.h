#include <iostream>
using namespace std;

class Screen {
public:
	using pos = std::string::size_type;

	// 因为我们自己已经写了一个构造函数了，编译器不会主动帮我们生成一个默认构造函数，所以我们要主动地把它显示地声明出来
	// 一个默认构造函数
	Screen() = default;
	// 另一个构造函数接受宽和高的值，然后将contents 初始化成给定数量的空白
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht* wd, ' ') { }
	// 第三个构造函数接受宽和高的值以及一个字符，该字符作为初始化后屏幕的内容。
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) { }

	char get() const {
		return contents[cursor];
	}
	// 计算行的位置，返回给定列的字符
	inline char get(pos ht, pos wd) const { return contents[ht * width + wd]; }

private:
	pos cursor = 0;				// 光标
	pos height = 0, width = 0;	// 尺寸
	std::string contents;		// 内容

};

