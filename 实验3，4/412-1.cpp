#include<iostream>
#include"402-h.h"
#include<iomanip>
using namespace std;
int main() {
	double arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "请输入第" << i + 1 << "个数:";
		cin >> arr[i];
	}
	px(10,arr);
	for (int n = 0; n < 10; n++) {
		cout <<fixed<<setprecision(2)<< arr[n] << "\t";
	}
	return 0;
}