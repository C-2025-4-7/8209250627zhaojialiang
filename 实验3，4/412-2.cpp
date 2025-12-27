#include<iostream>
#include"402-h.h"
using namespace std;
double px(int size,double arr[] ) {
	bool change = 1;
	do {
		change = 0;
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				change = 1;
			}
		}
	} while (change);
	return arr[size];
}