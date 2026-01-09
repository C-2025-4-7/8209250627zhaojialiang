#include<iostream>
#include"student.h"
using namespace std;
void Student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
	}
void Student::setvalue(int a, char b[], char c) {
	num = a;
	for (int i = 0; i < sizeof(b); i++) {
		name[i]=b[i];
	}
	sex = c;
}


