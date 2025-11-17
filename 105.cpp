#include<iostream>
using namespace std;
int main()
{
	double F,C;
	cout << "请输入华氏度" ;
	cin >> F;
	C = 5 * (F - 32)/9;
	cout << "对应的摄氏度为" << C << endl;
	return 0;
}
