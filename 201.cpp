#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个字符";
	char a;
	cin >> a;
	if (a <= 'z' && a >= 'a') {
		char b = a - 32;
		cout << "转化为：" << b << endl;
	}
	else {
		cout << a + 1 << endl;
	}
	return 0;
}