#include<iostream>
using namespace std;
int main()
{
	cout << "请输入x（0<x<10)=";
	double x,y;
	cin >> x;
	if (x < 1 && x>0) 
	{
		y = 3 - 2 * x;
		cout << "结果为:" << y << endl;
	}
	if (x >= 1 && x < 5)
	{
		y = 2 / (4 * x) + 1;
		cout << "结果为:" << y << endl;
	}
	if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "结果为:" << y << endl;
	}
	if (x >= 10 || x <= 0) 
	{
		cout << "请输入0到10之间的数" << endl;
	}
	return 0;
}