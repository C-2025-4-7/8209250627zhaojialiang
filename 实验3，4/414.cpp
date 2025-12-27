#include<iostream>
using namespace std;
void merge(const int list1[], int size1,const int list2[], int size2, int list3[]) {
	int i = 0, j = 0,k=0;
	for (; i < size1&&j<size2 ;) {
		if (list1[i] >= list2[j]) {
			list3[k] = list2[j];
			k++;
			j++;
		}
		else {
			list3[k] = list1[i];
			k++;
			i++;
		}
	}
	while (i < size1) {
		list3[k] = list1[i];
		i++;
		k++;
	}
	while (j < size2) {
		list3[k] = list2[j];
		j++;
		k++;
	}
}
int main() {
	cout << "请输入两个排序好的数组（输入的第一个数为数组长度，两数组长度之和小于80）："<<endl;
	int size1, size2;
	cout << "请输入第一个数组的长度：";
	cin >> size1;
	cout << "请输入第二个数组的长度：";
	cin >> size2;
	if (size1 + size2 >= 80) {
		cout << "两数组之和不能大于80！";
		return 0;
	}
	int arr1[80], arr2[80], arr3[80];
	for (int x = 1; x <= size1; x++) {
		cout << "请输入第一个数组的第" << x << "个数；";
		cin >> arr1[x-1];
	}
	for (int y = 1; y <= size2; y++) {
		cout << "请输入第二给数组的第" << y << "个数；";
		cin >> arr2[y-1];
	}
	merge(arr1, size1, arr2, size2, arr3);
	cout << "合并后的数组为:";
	for (int z = 0; z < size1 + size2; z++) {
		cout << arr3[z] << ' ';
	}
	return 0;
}