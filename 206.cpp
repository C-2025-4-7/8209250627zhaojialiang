#include<iostream>
using namespace std;
int max(int a, int b)
{
	int c;
	c = (a > b) ? a : b;
	return c;
}
int min(int a, int b)
{
	int c;
	c = (a < b) ? a : b;
	return c;
}
int main()
{
	cout << "请输入两个正整数：";
	int a, b, num1, num2,c,d,e;
	cin >> num1 >> num2;
	c = num1;
	d = num2;
	a = max(num1, num2);
	b = min(num1, num2);
	if (a <= 0 || b <= 0)
	{
		cout << "请输入两个正整数！";
		goto end;
	}
	else
		while (b!=0)
		{
			num1 = (a < b) ? a : b;
			num2 = a % b;
			a = num1;
			b = num2;
		}
	e = c * (d / a);
	cout << "最大公约数为" << a << endl << "最小公倍数为" << e << endl;
end:
	return 0;
}



