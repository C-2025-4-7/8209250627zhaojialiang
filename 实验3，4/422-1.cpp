#include<iostream>
using namespace std;
int indexOf(const char *s1, const char *s2) {
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int a = 0;
	for (int j = 0; j < size2; j++) {
		int b = 1;
		if (s1[0] == s2[j]) {
			for (int i = 1; i < size1; i++) {
				if (s1[i] != s2[j + i]) {
					b = 0;
				}
			}
			if (b == 1) {
				return j;
			}
		}
	}
	return -1;
}
int main() {
	char s1[100];
	char s2[100];
	char* p1 = s1;
	char* p2 = s2;
	cout << "请输入两个字符串（每个的字数不超过100，且第一个小于第二个）" << endl;
	cout << "输入第一个字符串:";
	cin.getline(s1, 100);
	cout << "输入第二给字符串:";
	cin.getline(s2, 100);
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	if (size1 > size2) {
		cout << "第一个字符串需小于第二个！";
	}
	else {
		int a = indexOf(p1, p2);
		cout << a;
	}
	return 0;
}