#include<iostream>
using namespace std;
int* paixu(int a[],int max) {
	for (int i=0; i < max; i++) {
		for (int j=0; j < max - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	return a;
}
int main() {
	int max;
	cout << "请输入一个数组（第一个数为数组长度）" << endl;
	cout << "请输入数组长度：";
	cin >> max;
	int* p = new int[max+1];
	for (int i = 0; i < max; i++) {
		cout << "请输入第" << i+1 << "个数：";
		cin >> p[i];
	}
	int*p1=paixu(p,max);
	cout << "排序后的数组为：";
	for (int i = 1; i < max+1; i++) {
		cout << *(p1 + i)<<'\t';
	}
	delete[] p;
	return 0;

}
