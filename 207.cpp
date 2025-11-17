#include<iostream>
using namespace std;
int main()
{
	for (int b = 1; b <= 5; b++) {
		switch (b)
		{
		case 1:
			cout << "*" << endl;
			break;
		case 2:
			cout << "**" << endl;
			break;
		case 3:
			cout << "***" << endl;
			break;
		case 4:
			cout << "****" << endl;
			break;
		case 5:
			cout << "*****" << endl;
			break;
		}
	}
	return 0;
}