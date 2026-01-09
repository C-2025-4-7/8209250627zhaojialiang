#include<iostream>
using namespace std;
class Student {
public:
	int No;
	int score;
};
void max(Student* p[5]) {
	int maxNo = p[0]->No;
	int maxscore = p[0]->score;
	for (int i = 0; i < 4;i++) {
		if (p[i]->score < p[i + 1]->score) {
			maxNo = p[i + 1]->No;
			maxscore = p[i + 1]->score;
		}
	}
	cout << "最高分同学的学号为：" << maxNo;
}
int main() {
	Student a[5];
	for (int i = 0; i < 5; i++) {
		cout << "请输入第" << i + 1 << "个同学的学号与成绩:";
		cin >> a[i].No >> a[i].score;
	}
	Student* p[5];
	for (int i=0; i < 5; i++) {
		p[i] = &a[i];
	}
	max(p);
	return 0;
}