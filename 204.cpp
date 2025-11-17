#include<iostream>
using namespace std;
int main()
{
	cout << "请输入想计算的两个数与运算方法(如：1 + 2）:";
	double a, b;
	char c;
	cin >> a >> c >> b;
	if ((b == 0 && c == '%') || (b == 0 && c == '/'))
		cout << "除数不能为零";
	else 
	{   
		int ia = a, ib = b;
		switch (c)
		{
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/':
			cout << a / b << endl;
			break;
		case '%':
			cout << ia % ib << endl;
			break;
		default:
			cout << "请输入“+ - * / %”五种计算方式";
		}
	}
	return 0;
}
