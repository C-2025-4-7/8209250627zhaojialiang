#include<iostream>
using namespace std;
bool is_prime(int num) {
	for (int i = num-1; i > 1; i--) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int a=0;
	int arr[ 200 ];
	for (int n = 2; a < 200; n++)
	{
		if (is_prime(n)) {
			arr[a] = n;
			a += 1;
		}
	}
	for (int b = 1; b <= 200; b++) 
	{
		if (b % 10 == 0) 
		{
			cout << arr[b - 1] << endl;
		}
		else 
		{
			cout << arr[b - 1]<<"\t";
		}
	}
	return 0;
}