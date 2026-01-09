#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "点的坐标为：(" << x << "," << y << ")";
	}
	Point() {
	 x = 60;
	 y = 80;
	}
};
int main() {
	int i, j;
	Point a;
	cout << "请输入i,j:";
	cin >> i >> j;
	a.setPoint(i, j);
	a.display();
	return 0;
}
