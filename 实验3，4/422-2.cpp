#include<iostream>
using namespace std;
int pf(int a) {
	int result=1;
	for (int i = 1; i <= a; i++) {
		result = 16*result;
	}
	return result;
}
int paresHex(const char* const hexString) {
	int result=0;
	int length = strlen(hexString);
	for (int i = 0; i < length; i++) {
		int j = length-1-i;
		if (hexString[i] >= '1' && hexString[i] <= '9') {
			result += (hexString[i]-'0') * pf(j);
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
			result += (hexString[i]-'A'+10) * pf(j);
		}
		else {
			cout << "请输入一个16进制数！";
			return -1;
		}
	}
	return result;
}
int main() {
	cout << "请输入一个十六进制数：";
	char a[100];
	char* pa = a;
	cin.getline(a,100);
	int result = paresHex(pa);
	if (result == -1) {
		return 0;
	}
	cout << "以十进制表示为：" << result << endl;
	return 0;
}