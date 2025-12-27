#include<iostream>
#include "mytemperature.h"
#include<iomanip>
using namespace std;
int main(){
	cout << "Celsius" << "\t" "\t"<< "Fahrenheit" << "\t" << "|" << "\t" << "Fahrenheit" << "\t""\t" << "Celsius" << endl;
	double cel, fah;
	cel = 40.0;
	fah = 120.0;
	for (; cel >= 31.0 && fah >= 30.0; cel--, fah -= 10) {
		cout << setprecision(3);
		cout << cel << "\t" "\t" << celsius_to_fah(cel) << "\t" <<"\t "<<" | " << "\t" << fah << "\t""\t" "\t"<< fah_to_celsius(fah) << endl;
	}
	return 0;
}