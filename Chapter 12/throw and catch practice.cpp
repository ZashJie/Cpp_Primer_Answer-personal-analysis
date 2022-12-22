#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double triangle(double, double, double);
	double a, b, c;
	cin >> a >> b >> c;
	try                           //检查异常
	{
			while (a > 0 && b > 0 && c > 0)
			{
				cout << triangle(a,b,c) << endl;
				cin >> a >> b >> c;           //若不发生异常，则继续输入边长，计算面积
			}
	}
	catch(int)                           //捕获异常	
	{
			cout << "a=" << a << ",b=" << b << ",c=" << c << ",that is not a triangle!" << endl;
	}
	cout << "end" << endl;
	return 0;
}
                          //补全triangle 函数定义，要求在triangle 函数中对三角形条件进行检查，若不符合则抛出异常信息

double triangle(double a, double b, double c) {

	if (a + b <= c || a + c <= b || b + c <= a)
		throw - 1;		

	double temp = (a + b + c) / 2;
	double s = sqrt(temp * (temp - a) * (temp - b) * (temp - c));//海伦公式求面积
	return s;
}