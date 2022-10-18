#include<iostream>

void swap(int* x1, int* x2) {

	int i = *x1;
	*x1 = *x2;
	*x2 = i;


	return;
}


int main() {

	int x1 = 1;
	int x2 = 2;

	swap(&x1, &x2);

	std::cout <<"x1:"<< x1 <<"x2:" << x2 << std::endl;

	return 0;
}