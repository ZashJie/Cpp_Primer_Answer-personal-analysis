#include <iostream>
#include <vector>
using namespace std;

class Screen;
class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	inline void clear(ScreenIndex);
	
private:
	std::vector<Screen> screens;

};


class Screen {
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos = std::string::size_type;

	// 因为我们自己已经写了一个构造函数了，编译器不会主动帮我们生成一个默认构造函数，所以我们要主动地把它显示地声明出来
	// 一个默认构造函数
	Screen() = default;
	// 另一个构造函数接受宽和高的值，然后将contents 初始化成给定数量的空白
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht* wd, ' ') { }
	// 第三个构造函数接受宽和高的值以及一个字符，该字符作为初始化后屏幕的内容。
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) { }

	inline Screen move(pos r, pos c);
	inline Screen set(char c);
	inline Screen set(pos r, pos c, char ch);

	Screen display(std::ostream& os);
	const Screen display(std::ostream& os) const;



	char get() const {
		return contents[cursor];
	}
	// 计算行的位置，返回给定列的字符
	inline char get(pos ht, pos wd) const { return contents[ht * width + wd]; }

private:

	void do_display(std::ostream& os) const { os << contents; }

	pos cursor = 0;				// 光标
	pos height = 0, width = 0;	// 尺寸
	std::string contents;		// 内容

};

inline void Window_mgr::clear(ScreenIndex i) {
	Screen& s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

inline Screen Screen::move(pos r, pos c) {
	cursor = r * width + c;
	return *this;
}

inline Screen Screen::set(pos r, pos c, char ch) {
	contents[r * width + c] = ch;
	return *this;
}

inline Screen Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

Screen Screen::display(std::ostream& os) {
	do_display(os);
	return *this;
}
const Screen Screen::display(std::ostream& os) const {
	do_display(os);
	return *this;
}
