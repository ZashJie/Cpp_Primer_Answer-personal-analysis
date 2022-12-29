#include <iostream>
using namespace std;

class Circle {
public:
	Circle(int x);
	void getarea();

private:
	int radius;
};

Circle::Circle(int x) : radius(x) {
	cout << "Circle类构造函数" << endl;
}
void Circle::getarea() {
	cout << "获取圆面积：" << radius << endl;
}

class Table {
public:
	Table(int x);
	void gethight();
private:
	int height;
	
};

Table::Table(int x) : height(x) {
	cout << "Table类构造函数" << endl;
}
void Table::gethight() {
	cout << "获取高度：" << height << endl;
}

class roundtable : public Circle, public Table {
public:
	roundtable(string c, int r, int h);
	void getcolor();
private:
	string color;
	
};

roundtable::roundtable(string c, int r, int h): color(c), Circle(r), Table(h) {
	cout << "roundtable类构造函数" << endl;
}

void roundtable::getcolor() {
	cout << "获取颜色：" << color << endl;
}

int main() {

	roundtable lol("red", 1, 1);

	lol.getcolor();
	lol.gethight();
	lol.getarea();

	return 0;
}