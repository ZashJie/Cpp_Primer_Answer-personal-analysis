#include <iostream>
using namespace std;

class Rect {
public:
	Rect(int x, int y) : length(x), width(y) {

	}
	friend bool area_compare(Rect, Rect);
private:
	int length;
	int width;
};

bool area_compare(Rect x, Rect y) {
	if (x.length * x.width > y.length * y.width) {
		// 左边的大，返回true
		return true;
	}
	else {
		// 右边的大，返回false
		return false;
	}
}

int main() {
	Rect a(1, 3);
	Rect b(2, 3);

	if (area_compare(a, b)) {
		cout << "a的面积比b大" << endl;
	}
	else
	{
		cout << "b的面积比a大" << endl;
	}
	return 0;
}