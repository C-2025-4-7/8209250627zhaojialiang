#include<iostream>
using namespace std;
int main() {
	int arr[10] = {0};
	int a,b=0;
	bool c=1;
	cout << "请输入10个数："<<endl;
	for (int i = 0; i < 10; i++) {
		cout << "请输入第" << i + 1 << "个数:";
		cin >> a;
		for (int n = 0; n < i; n++) {
			if (arr[n] == a) {
				c = 0;
			}
		}
		if (c == 1) {
			arr[b] = a;
			b++;
		}
		c = 1;
	}
	cout << "其中不同的数为：";
	for (int j = 0; j < b; j++) {
		cout << arr[j] << "\t";
	}
	return 0;
}

