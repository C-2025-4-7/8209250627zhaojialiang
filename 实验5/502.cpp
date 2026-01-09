#include<iostream>
using namespace std;
#include"student.h"
int main(){
	Student stud;
	char a[] = "teg";
	stud.setvalue(007, a, 'm');
	stud.display();
	return 0;
}