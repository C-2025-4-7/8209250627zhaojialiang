#include<iostream>
using namespace std;
int main()
{
	cout << "请输入三角形三边长：";
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "该三边无法构成三角形";
	else
	{
		cout << "周长为：" << a + b + c << endl;
		if (a == b || b == c || a == c)
			cout << "该三角形为等腰三角形";
		else
			cout << "该三角形不是等腰三角形";
	}
	return 0;
}