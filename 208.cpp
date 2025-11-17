#include<iostream>
using namespace std;
int main()
{
	double a,n1,n2=0;
	cout << "请输入一个正数";
	cin >> a;
	n1 = a;
	if (a < 0)
		cout << "请输入一个正数";
	else
	{
		if (a == 0)
			cout << "结果为" << a;
		else
		{
			for (int x=1; n1 - n2 > 0.00001;x++)//不能将精度调到10-10次方，会超出double的范围
			{
				if (x == 1)
					n2 = (n1 + a / n1) / 2;
				else
				{
					n1 = n2;
					n2 = (n1 + a / n1) / 2;
				}
			}
			cout << "结果为" << n2;
		}
	}
	return 0;
}