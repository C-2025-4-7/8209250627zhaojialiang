#include<iostream>
using namespace std;
#include"stdio.h"
void f(char* st, int i) {
	st[i] = '\0';
	cout << st;
	if (i > 1)f(st, i - 1);
}
void main() {
	char st[] = "abcd";
	for (int i = 0; i < 4; i++) {
		st[i] = st[i] - 2 - i;
	}
	f(st, 4);
}
