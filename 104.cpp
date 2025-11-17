#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//Oxfffe
	cout << "output in unsigned int type:" << testUnint << endl;//oct
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	//65534超过了short可表示的范围，所以又从-32768开始往上计数，最终为-2
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in unsigned int type:" << hex << testUnint << endl;
	system("pause");
	return 0;
} 