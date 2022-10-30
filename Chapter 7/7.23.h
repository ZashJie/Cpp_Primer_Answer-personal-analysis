#include <iostream>
using namespace std;

class Screen {
public:
	using pos = std::string::size_type;

	// 因为我们自己已经写了一个构造函数了，编译器不会主动帮我们生成一个默认构造函数，所以我们要主动地把它显示地声明出来
	Screen() = default;

	Screen(pos ht, pos wd, char c) :height(ht), width(wd),contents(ht*wd,c) { }
	char get() const {
		return contents[cursor];
	}
	// 计算行的位置，返回给定列的字符
	inline char get(pos ht, pos wd) const { return contents[ht * width + wd]; }
	Screen& move(pos r, pos c);

private:
	pos cursor = 0;				// 光标
	pos height = 0, width = 0;	// 尺寸
	std::string contents;		// 内容
	
};

