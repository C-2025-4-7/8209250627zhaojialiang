#include<iostream>
#include "mytemperature.h"
using namespace std;
double celsius_to_fah(double cel) {
	double fah;
	fah = cel * 9 / 5 + 32;
	return fah;
}
double fah_to_celsius(double fah) {
	double cel;
	cel = (fah - 32) * 5 / 9;
	return cel;
}