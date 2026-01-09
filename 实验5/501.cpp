#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void sethour(int a) {
		hour = a;
	}
	void setminute(int a) {
		minute = a;
	}
	void setsec(int a) {
		sec = a;
	}
	void show() {
		cout << "hour:" << hour << '\t' << '\t' << "minute:" << minute << '\t' << "sec:" << sec;
	}
};
int main() {
	Time t1;
	int a,b,c;
	cout << "请输入小时，分钟，秒：";
	cin >> a;
	cin >> b;
	cin >> c;
	t1.sethour(a);
	t1.setminute(b);
	t1.setsec(c);
	t1.show();
	return 0;
}