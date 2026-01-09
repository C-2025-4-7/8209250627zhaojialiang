#include<iostream>
using namespace std;
class cft {
private:
	int length;
	int width;
	int height;
public:
	void set(int a, int b, int c) {
		length = a;
		width = b;
		height = c;
	}
	void showV() {
		cout << length * width * height << endl;
	}
};
int main() {
	cout << "请输入三个长方形的长宽高" << endl;
	int a, b, c;
	cft d[3];
	for (int i = 0; i < 3; i++) {
		cout << "请输入第"<<i+1<<"个长方体的长宽高：";
		cin >> a >> b >> c;
		d[i].set(a, b, c);
	}
	for (int i=0; i < 3; i++) {
		cout << "第"<<i+1<<"个长方体体积为：";
		d[i].showV();
	}
	return 0;
}