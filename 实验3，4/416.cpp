#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == 97 + j || s[i] == 65 + j) {
				counts[j]++;
			}
		}
	}

}
int main() {
	cout << "Enter a string:";
	char s[100];
	std::cin.getline(s, 100);
	int counts[26] = { 0 };
	char zimu[26];
	for(int j=0;j<26;j++){
		zimu[j] = 'a' + j;
	}
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {		
			cout << zimu[i] << "£º" << counts[i] << endl;
		}
	}
	return 0;
}	
