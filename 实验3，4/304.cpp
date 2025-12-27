#include<iostream>
#include"mytriangle.h"
using namespace std;
int main(){
	cout << "请输入三角形三边长：";
	int a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		cout << "面积为：" << area(a, b, c) << endl;
	}
	else {
		cout << "该三边无法构成三角形！";
	}
	return 0;
}