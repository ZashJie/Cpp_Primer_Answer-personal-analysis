#include <iostream>
#include <string>

void swap1(int*& lft, int*& rht)		// int*&是指针的引用
{

	auto tmp = lft;
	lft = rht;
	rht = tmp;
}

int main()
{
	int i = 42, j = 99;
	auto lft = &i;
	auto rht = &j;
	swap1(lft, rht);
	std::cout << *lft << " " << *rht << std::endl;

	return 0;
}