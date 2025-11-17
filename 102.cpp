#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	double r, h;
	cout << "请输入圆锥底面半径和锥高"<<endl;
	cin >> r >> h;
	cout << "体积为" << pi * r * r * h / 3<<endl;
	return 0;
}