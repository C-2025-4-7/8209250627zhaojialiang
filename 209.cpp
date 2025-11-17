#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	int b = 0;
	for (int a = 2;a <= 100; a=a * 2)
		{
			x += a;
			b++;
		}
	double c = x * 0.8 / b;
	cout << "每天平均花" << c << endl;
	return 0;
}
