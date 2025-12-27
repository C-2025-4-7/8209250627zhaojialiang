#include<iostream>
using namespace std;
int gy(int a,int b){
	int c=1;
	while (c != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return  a;
}
int main() {
	cout << "请输入两个数（注：不能为0）；";
	int x, y;
	cin >> x >> y ;
	if (x == 0 || y == 0) {
		cout << "不能为0！";
	}
	else {
		cout << "最大公约数为：" << gy(x, y);
	}
	return 0;
}