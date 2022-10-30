#include "7.29.h"

int main() {

	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(std::cout);
	std::cout << "\n";
	myScreen.display(std::cout);
	std::cout << "\n";

	return 0;
}

// 返回 Screen& 的结果
// XXXXXXXXXXXXXXXXXXXX#XXXX
// XXXXXXXXXXXXXXXXXXXX#XXXX

// 返回 Screen 的结果
// XXXXXXXXXXXXXXXXXXXX#XXXX
// XXXXXXXXXXXXXXXXXXXXXXXXX
