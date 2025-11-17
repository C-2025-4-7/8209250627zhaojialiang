#include<iostream>
using namespace std;
int main()
{
	char a;
	int x = 0, y = 0, z = 0, f = 0;
	while (cin.get(a)&& a != '\n')
	{
		int A = a;
		if ((A <= 90 && A >= 65) || (A >= 97 && A <= 122))
			x += 1;
		else
		{
			if (A == 32)
				y += 1;
			else
			{
				if (A >= 48 && A <= 57)
					z += 1;
				else
				{
					f += 1;
				}
			}
		}
	}
	cout << "字母数：" << x << endl << "空格数" << y << endl << "数字数" << z << endl << "其他字符数" << f << endl;
	return 0;
}