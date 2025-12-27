#include<iostream>
using namespace std;
int main() {
	bool arr[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		arr[i] = 1;
	}
	for (int n = 2; n <= 100; n++) {
		for (int j = n - 1; j < 100; j += (n + 1)) {
			if (arr[j]) {
				arr[j] = 0;
			}
			else{
				arr[j] = 1;
			}
		}
	}
	for (int x = 0; x < 100; x++) {
		if (arr[x]) {
			cout << x+1 << ' ';
		}
	}
	return 0;
}